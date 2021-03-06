/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@class FigCaptureIrisPreparedSettings, NSArray;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration {

	char _movieCaptureEnabled;
	SCD_Struct_Fi8 _movieDuration;
	SCD_Struct_Fi8 _movieVideoFrameDuration;
	int _movieAutoTrimMethod;
	FigCaptureIrisPreparedSettings* _preparedSettings;
	char _optimizesImagesForOfflineVideoStabilization;
	char _quadraHighResCaptureEnabled;
	char _depthDataDeliveryEnabled;
	char _portraitEffectsMatteDeliveryEnabled;
	NSArray* _enabledSemanticSegmentationMatteURNs;
	char _filterRenderingEnabled;
	char _bravoConstituentPhotoDeliveryEnabled;
	char _momentCaptureMovieRecordingEnabled;
	char _spatialOverCaptureEnabled;
	int _maxQualityPrioritization;
	char _deferredProcessingEnabled;
	char _digitalFlashCaptureEnabled;
	char _intelligentDistortionCorrectionEnabled;
	char _demosaicedRawEnabled;
	char _previewQualityAdjustedPhotoFilterRenderingEnabled;
	char _fastCapturePrioritizationEnabled;
	char _irisFrameHarvestingEnabled;

}

@property (assign,nonatomic) char irisMovieCaptureEnabled;                                        //@synthesize movieCaptureEnabled=_movieCaptureEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi8 irisMovieDuration;                                    //@synthesize movieDuration=_movieDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi8 irisMovieVideoFrameDuration;                          //@synthesize movieVideoFrameDuration=_movieVideoFrameDuration - In the implementation block
@property (assign,nonatomic) int irisMovieAutoTrimMethod;                                         //@synthesize movieAutoTrimMethod=_movieAutoTrimMethod - In the implementation block
@property (assign,nonatomic) char irisFrameHarvestingEnabled;                                     //@synthesize irisFrameHarvestingEnabled=_irisFrameHarvestingEnabled - In the implementation block
@property (nonatomic,retain) FigCaptureIrisPreparedSettings * irisPreparedSettings;               //@synthesize preparedSettings=_preparedSettings - In the implementation block
@property (assign,nonatomic) char optimizesImagesForOfflineVideoStabilization;                    //@synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization - In the implementation block
@property (assign,nonatomic) char quadraHighResCaptureEnabled;                                    //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
@property (assign,nonatomic) char depthDataDeliveryEnabled;                                       //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) char portraitEffectsMatteDeliveryEnabled;                            //@synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled - In the implementation block
@property (nonatomic,retain) NSArray * enabledSemanticSegmentationMatteURNs;                      //@synthesize enabledSemanticSegmentationMatteURNs=_enabledSemanticSegmentationMatteURNs - In the implementation block
@property (assign,nonatomic) char filterRenderingEnabled;                                         //@synthesize filterRenderingEnabled=_filterRenderingEnabled - In the implementation block
@property (assign,nonatomic) char bravoConstituentPhotoDeliveryEnabled;                           //@synthesize bravoConstituentPhotoDeliveryEnabled=_bravoConstituentPhotoDeliveryEnabled - In the implementation block
@property (assign,nonatomic) char momentCaptureMovieRecordingEnabled;                             //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) char spatialOverCaptureEnabled;                                      //@synthesize spatialOverCaptureEnabled=_spatialOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) int maxQualityPrioritization;                                        //@synthesize maxQualityPrioritization=_maxQualityPrioritization - In the implementation block
@property (assign,nonatomic) char deferredProcessingEnabled;                                      //@synthesize deferredProcessingEnabled=_deferredProcessingEnabled - In the implementation block
@property (assign,nonatomic) char digitalFlashCaptureEnabled;                                     //@synthesize digitalFlashCaptureEnabled=_digitalFlashCaptureEnabled - In the implementation block
@property (assign,nonatomic) char intelligentDistortionCorrectionEnabled;                         //@synthesize intelligentDistortionCorrectionEnabled=_intelligentDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) char demosaicedRawEnabled;                                           //@synthesize demosaicedRawEnabled=_demosaicedRawEnabled - In the implementation block
@property (assign,nonatomic) char previewQualityAdjustedPhotoFilterRenderingEnabled;              //@synthesize previewQualityAdjustedPhotoFilterRenderingEnabled=_previewQualityAdjustedPhotoFilterRenderingEnabled - In the implementation block
@property (assign,nonatomic) char fastCapturePrioritizationEnabled;                               //@synthesize fastCapturePrioritizationEnabled=_fastCapturePrioritizationEnabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setQuadraHighResCaptureEnabled:(char)arg1 ;
-(void)setIrisMovieCaptureEnabled:(char)arg1 ;
-(char)irisMovieCaptureEnabled;
-(void)setIrisMovieDuration:(SCD_Struct_Fi8)arg1 ;
-(void)setIrisMovieVideoFrameDuration:(SCD_Struct_Fi8)arg1 ;
-(void)setIrisMovieAutoTrimMethod:(int)arg1 ;
-(void)setIrisPreparedSettings:(FigCaptureIrisPreparedSettings *)arg1 ;
-(char)optimizesImagesForOfflineVideoStabilization;
-(void)setOptimizesImagesForOfflineVideoStabilization:(char)arg1 ;
-(void)setDepthDataDeliveryEnabled:(char)arg1 ;
-(void)setFilterRenderingEnabled:(char)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(char)arg1 ;
-(char)depthDataDeliveryEnabled;
-(char)portraitEffectsMatteDeliveryEnabled;
-(void)setSpatialOverCaptureEnabled:(char)arg1 ;
-(char)filterRenderingEnabled;
-(int)sinkType;
-(char)digitalFlashCaptureEnabled;
-(char)spatialOverCaptureEnabled;
-(char)deferredProcessingEnabled;
-(char)previewQualityAdjustedPhotoFilterRenderingEnabled;
-(char)fastCapturePrioritizationEnabled;
-(void)setEnabledSemanticSegmentationMatteURNs:(NSArray *)arg1 ;
-(void)setDemosaicedRawEnabled:(char)arg1 ;
-(void)setDigitalFlashCaptureEnabled:(char)arg1 ;
-(void)setDeferredProcessingEnabled:(char)arg1 ;
-(void)setPreviewQualityAdjustedPhotoFilterRenderingEnabled:(char)arg1 ;
-(void)setFastCapturePrioritizationEnabled:(char)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(char)quadraHighResCaptureEnabled;
-(SCD_Struct_Fi8)irisMovieDuration;
-(SCD_Struct_Fi8)irisMovieVideoFrameDuration;
-(int)irisMovieAutoTrimMethod;
-(NSArray *)enabledSemanticSegmentationMatteURNs;
-(char)bravoConstituentPhotoDeliveryEnabled;
-(char)momentCaptureMovieRecordingEnabled;
-(int)maxQualityPrioritization;
-(char)intelligentDistortionCorrectionEnabled;
-(char)demosaicedRawEnabled;
-(FigCaptureIrisPreparedSettings *)irisPreparedSettings;
-(void)setBravoConstituentPhotoDeliveryEnabled:(char)arg1 ;
-(void)setMomentCaptureMovieRecordingEnabled:(char)arg1 ;
-(void)setMaxQualityPrioritization:(int)arg1 ;
-(void)setIntelligentDistortionCorrectionEnabled:(char)arg1 ;
-(char)irisFrameHarvestingEnabled;
-(void)setIrisFrameHarvestingEnabled:(char)arg1 ;
@end

