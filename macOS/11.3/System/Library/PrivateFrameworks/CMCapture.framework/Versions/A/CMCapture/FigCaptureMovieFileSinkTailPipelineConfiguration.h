/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureMovieFileSinkPipelineConfiguration, BWPipelineStage, BWPhotoDecompressorNode, BWNodeOutput, NSArray;

@interface FigCaptureMovieFileSinkTailPipelineConfiguration : NSObject {

	FigCaptureMovieFileSinkPipelineConfiguration* _movieFileSinkPipelineConfiguration;
	BWPipelineStage* _movieFilePipelineStage;
	BWPhotoDecompressorNode* _irisIntermediateJPEGPhotoDecompressorNode;
	BWNodeOutput* _videoSourceOutput;
	BWNodeOutput* _audioSourceOutput;
	NSArray* _metadataSourceOutputs;
	NSArray* _indexesOfDetectedObjectsInMetadataOutputs;
	int _indexOfVideoOrientationInMetadataOutputs;
	char _vitalityScoringEnabled;
	char _meaningfulSubjectTrackingEnabled;
	char _delayedCompressorCleanupEnabled;

}

@property (nonatomic,retain) FigCaptureMovieFileSinkPipelineConfiguration * movieFileSinkPipelineConfiguration;              //@synthesize movieFileSinkPipelineConfiguration=_movieFileSinkPipelineConfiguration - In the implementation block
@property (nonatomic,retain) BWPipelineStage * movieFilePipelineStage;                                                       //@synthesize movieFilePipelineStage=_movieFilePipelineStage - In the implementation block
@property (nonatomic,retain) BWPhotoDecompressorNode * irisIntermediateJPEGPhotoDecompressorNode;                            //@synthesize irisIntermediateJPEGPhotoDecompressorNode=_irisIntermediateJPEGPhotoDecompressorNode - In the implementation block
@property (nonatomic,retain) BWNodeOutput * videoSourceOutput;                                                               //@synthesize videoSourceOutput=_videoSourceOutput - In the implementation block
@property (nonatomic,retain) BWNodeOutput * audioSourceOutput;                                                               //@synthesize audioSourceOutput=_audioSourceOutput - In the implementation block
@property (nonatomic,retain) NSArray * metadataSourceOutputs;                                                                //@synthesize metadataSourceOutputs=_metadataSourceOutputs - In the implementation block
@property (nonatomic,retain) NSArray * indexesOfDetectedObjectsInMetadataOutputs;                                            //@synthesize indexesOfDetectedObjectsInMetadataOutputs=_indexesOfDetectedObjectsInMetadataOutputs - In the implementation block
@property (assign,nonatomic) int indexOfVideoOrientationInMetadataOutputs;                                                   //@synthesize indexOfVideoOrientationInMetadataOutputs=_indexOfVideoOrientationInMetadataOutputs - In the implementation block
@property (assign,nonatomic) char vitalityScoringEnabled;                                                                    //@synthesize vitalityScoringEnabled=_vitalityScoringEnabled - In the implementation block
@property (assign,nonatomic) char meaningfulSubjectTrackingEnabled;                                                          //@synthesize meaningfulSubjectTrackingEnabled=_meaningfulSubjectTrackingEnabled - In the implementation block
@property (assign,nonatomic) char delayedCompressorCleanupEnabled;                                                           //@synthesize delayedCompressorCleanupEnabled=_delayedCompressorCleanupEnabled - In the implementation block
-(void)dealloc;
-(id)init;
-(char)vitalityScoringEnabled;
-(void)setVitalityScoringEnabled:(char)arg1 ;
-(FigCaptureMovieFileSinkPipelineConfiguration *)movieFileSinkPipelineConfiguration;
-(void)setMovieFileSinkPipelineConfiguration:(FigCaptureMovieFileSinkPipelineConfiguration *)arg1 ;
-(BWPipelineStage *)movieFilePipelineStage;
-(void)setMovieFilePipelineStage:(BWPipelineStage *)arg1 ;
-(BWPhotoDecompressorNode *)irisIntermediateJPEGPhotoDecompressorNode;
-(NSArray *)indexesOfDetectedObjectsInMetadataOutputs;
-(int)indexOfVideoOrientationInMetadataOutputs;
-(void)setIrisIntermediateJPEGPhotoDecompressorNode:(BWPhotoDecompressorNode *)arg1 ;
-(BWNodeOutput *)videoSourceOutput;
-(void)setVideoSourceOutput:(BWNodeOutput *)arg1 ;
-(BWNodeOutput *)audioSourceOutput;
-(void)setAudioSourceOutput:(BWNodeOutput *)arg1 ;
-(NSArray *)metadataSourceOutputs;
-(void)setMetadataSourceOutputs:(NSArray *)arg1 ;
-(void)setIndexesOfDetectedObjectsInMetadataOutputs:(NSArray *)arg1 ;
-(void)setIndexOfVideoOrientationInMetadataOutputs:(int)arg1 ;
-(char)meaningfulSubjectTrackingEnabled;
-(void)setMeaningfulSubjectTrackingEnabled:(char)arg1 ;
-(char)delayedCompressorCleanupEnabled;
-(void)setDelayedCompressorCleanupEnabled:(char)arg1 ;
@end

