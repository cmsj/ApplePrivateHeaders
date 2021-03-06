/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {

	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	char _mrcLowPowerModeEnabled;
	char _useSceneClassifierToGateMRCDetection;
	SCD_Struct_Fi37 _smartCameraPipelineVersion;
	char _deferredPrepareEnabled;
	char _previewEnabled;
	int _motionAttachmentsSource;
	char _boxedMetadataEnabled;
	NSArray* _detectedObjectMovieFileOutputMetadataConnectionConfigurations;

}

@property (nonatomic,retain) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * detectedObjectMovieFileOutputMetadataConnectionConfigurations;                              //@synthesize detectedObjectMovieFileOutputMetadataConnectionConfigurations=_detectedObjectMovieFileOutputMetadataConnectionConfigurations - In the implementation block
@property (assign,nonatomic) char mrcLowPowerModeEnabled;                                                                          //@synthesize mrcLowPowerModeEnabled=_mrcLowPowerModeEnabled - In the implementation block
@property (assign,nonatomic) char useSceneClassifierToGateMRCDetection;                                                            //@synthesize useSceneClassifierToGateMRCDetection=_useSceneClassifierToGateMRCDetection - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi37 smartCameraPipelineVersion;                                                           //@synthesize smartCameraPipelineVersion=_smartCameraPipelineVersion - In the implementation block
@property (assign,nonatomic) char deferredPrepareEnabled;                                                                          //@synthesize deferredPrepareEnabled=_deferredPrepareEnabled - In the implementation block
@property (assign,nonatomic) char previewEnabled;                                                                                  //@synthesize previewEnabled=_previewEnabled - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                                          //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) char boxedMetadataEnabled;                                                                            //@synthesize boxedMetadataEnabled=_boxedMetadataEnabled - In the implementation block
-(void)dealloc;
-(void)setPreviewEnabled:(char)arg1 ;
-(char)previewEnabled;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(void)setMetadataObjectConnectionConfiguration:(FigMetadataObjectCaptureConnectionConfiguration *)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(char)mrcLowPowerModeEnabled;
-(void)setMrcLowPowerModeEnabled:(char)arg1 ;
-(char)useSceneClassifierToGateMRCDetection;
-(void)setUseSceneClassifierToGateMRCDetection:(char)arg1 ;
-(SCD_Struct_Fi37)smartCameraPipelineVersion;
-(void)setSmartCameraPipelineVersion:(SCD_Struct_Fi37)arg1 ;
-(char)deferredPrepareEnabled;
-(void)setDeferredPrepareEnabled:(char)arg1 ;
-(NSArray *)detectedObjectMovieFileOutputMetadataConnectionConfigurations;
-(void)setDetectedObjectMovieFileOutputMetadataConnectionConfigurations:(NSArray *)arg1 ;
-(char)boxedMetadataEnabled;
-(void)setBoxedMetadataEnabled:(char)arg1 ;
@end

