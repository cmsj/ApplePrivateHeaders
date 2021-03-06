/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sourceID;
	OpaqueFigCaptureSourceRef _source;
	int _sourceType;
	NSDictionary* _sourceAttributes;
	FigCaptureSourceVideoFormat* _requiredFormat;
	float _requiredMaxFrameRate;
	float _requiredMinFrameRate;
	float _maxFrameRateClientOverride;
	float _maxGainClientOverride;
	char _hasSetVideoZoomFactorOnCaptureSource;
	float _videoZoomFactor;
	float _videoZoomRampAcceleration;
	int _imageControlMode;
	char _applyMaxExposureDurationFrameworkOverrideWhenAvailable;
	SCD_Struct_Fi8 _maxExposureDurationClientOverride;
	NSDictionary* _faceDetectionConfiguration;
	char _sensorHDREnabled;
	char _highlightRecoveryEnabled;
	int _colorSpace;
	char _depthDataDeliveryEnabled;
	FigCaptureSourceDepthDataFormat* _depthDataFormat;
	float _depthDataMaxFrameRate;
	char _lowLightVideoCaptureEnabled;
	char _spatialOverCaptureEnabled;
	char _nonDestructiveCropEnabled;
	char _geometricDistortionCorrectionEnabled;
	char _variableFrameRateVideoCaptureEnabled;
	char _cinematicFramingEnabled;
	char _cinematicFramingSupported;
	int _cinematicFramingControlMode;

}

@property (readonly) char smartCameraEnabled; 
@property (readonly) char bravoShiftMitigationEnabled; 
@property (nonatomic,copy) NSString * sourceID;                                                              //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureSourceRef source; 
@property (nonatomic,retain) FigCaptureSourceVideoFormat * requiredFormat;                                   //@synthesize requiredFormat=_requiredFormat - In the implementation block
@property (assign,nonatomic) float requiredMaxFrameRate;                                                     //@synthesize requiredMaxFrameRate=_requiredMaxFrameRate - In the implementation block
@property (assign,nonatomic) float requiredMinFrameRate;                                                     //@synthesize requiredMinFrameRate=_requiredMinFrameRate - In the implementation block
@property (assign,nonatomic) float maxFrameRateClientOverride;                                               //@synthesize maxFrameRateClientOverride=_maxFrameRateClientOverride - In the implementation block
@property (assign,nonatomic) float maxGainClientOverride;                                                    //@synthesize maxGainClientOverride=_maxGainClientOverride - In the implementation block
@property (assign,nonatomic) char hasSetVideoZoomFactorOnCaptureSource;                                      //@synthesize hasSetVideoZoomFactorOnCaptureSource=_hasSetVideoZoomFactorOnCaptureSource - In the implementation block
@property (assign,nonatomic) float videoZoomFactor;                                                          //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (assign,nonatomic) float videoZoomRampAcceleration;                                                //@synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration - In the implementation block
@property (nonatomic,copy) NSDictionary * faceDetectionConfiguration;                                        //@synthesize faceDetectionConfiguration=_faceDetectionConfiguration - In the implementation block
@property (nonatomic,readonly) int sourcePosition; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,readonly) int sourceDeviceType; 
@property (assign,nonatomic) int imageControlMode;                                                           //@synthesize imageControlMode=_imageControlMode - In the implementation block
@property (assign,nonatomic) char applyMaxExposureDurationFrameworkOverrideWhenAvailable;                    //@synthesize applyMaxExposureDurationFrameworkOverrideWhenAvailable=_applyMaxExposureDurationFrameworkOverrideWhenAvailable - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi8 maxExposureDurationClientOverride;                               //@synthesize maxExposureDurationClientOverride=_maxExposureDurationClientOverride - In the implementation block
@property (assign,nonatomic) char sensorHDREnabled;                                                          //@synthesize sensorHDREnabled=_sensorHDREnabled - In the implementation block
@property (assign,nonatomic) char highlightRecoveryEnabled;                                                  //@synthesize highlightRecoveryEnabled=_highlightRecoveryEnabled - In the implementation block
@property (assign,nonatomic) int colorSpace;                                                                 //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) char depthDataDeliveryEnabled;                                                  //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) float depthDataMaxFrameRate;                                                    //@synthesize depthDataMaxFrameRate=_depthDataMaxFrameRate - In the implementation block
@property (nonatomic,retain) FigCaptureSourceDepthDataFormat * depthDataFormat;                              //@synthesize depthDataFormat=_depthDataFormat - In the implementation block
@property (assign,nonatomic) char lowLightVideoCaptureEnabled;                                               //@synthesize lowLightVideoCaptureEnabled=_lowLightVideoCaptureEnabled - In the implementation block
@property (assign,nonatomic) char variableFrameRateVideoCaptureEnabled;                                      //@synthesize variableFrameRateVideoCaptureEnabled=_variableFrameRateVideoCaptureEnabled - In the implementation block
@property (assign,nonatomic) char spatialOverCaptureEnabled;                                                 //@synthesize spatialOverCaptureEnabled=_spatialOverCaptureEnabled - In the implementation block
@property (assign,nonatomic) char nonDestructiveCropEnabled;                                                 //@synthesize nonDestructiveCropEnabled=_nonDestructiveCropEnabled - In the implementation block
@property (assign,nonatomic) char geometricDistortionCorrectionEnabled;                                      //@synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) char cinematicFramingEnabled;                                                   //@synthesize cinematicFramingEnabled=_cinematicFramingEnabled - In the implementation block
@property (assign,getter=isCinematicFramingSupported,nonatomic) char cinematicFramingSupported;              //@synthesize cinematicFramingSupported=_cinematicFramingSupported - In the implementation block
@property (assign,nonatomic) int cinematicFramingControlMode;                                                //@synthesize cinematicFramingControlMode=_cinematicFramingControlMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForSourceDeviceType:(int)arg1 ;
+(id)stringForSourcePosition:(int)arg1 ;
+(id)stringForSourceType:(int)arg1 ;
+(int)sourceTypeForString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(OpaqueFigCaptureSourceRef)source;
-(id)initWithSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)setColorSpace:(int)arg1 ;
-(int)colorSpace;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(int)sourceType;
-(id)_sourceUID;
-(int)sourceDeviceType;
-(void)setDepthDataDeliveryEnabled:(char)arg1 ;
-(char)cinematicFramingEnabled;
-(void)setVideoZoomFactor:(float)arg1 ;
-(char)depthDataDeliveryEnabled;
-(char)isCinematicFramingSupported;
-(void)setLowLightVideoCaptureEnabled:(char)arg1 ;
-(void)setVariableFrameRateVideoCaptureEnabled:(char)arg1 ;
-(int)imageControlMode;
-(void)setImageControlMode:(int)arg1 ;
-(float)videoZoomRampAcceleration;
-(void)setVideoZoomRampAcceleration:(float)arg1 ;
-(float)videoZoomFactor;
-(void)setGeometricDistortionCorrectionEnabled:(char)arg1 ;
-(void)setSpatialOverCaptureEnabled:(char)arg1 ;
-(void)setNonDestructiveCropEnabled:(char)arg1 ;
-(int)cinematicFramingControlMode;
-(void)setCinematicFramingControlMode:(int)arg1 ;
-(void)setCinematicFramingEnabled:(char)arg1 ;
-(void)setRequiredFormat:(FigCaptureSourceVideoFormat *)arg1 ;
-(void)setRequiredMaxFrameRate:(float)arg1 ;
-(void)setRequiredMinFrameRate:(float)arg1 ;
-(void)setApplyMaxExposureDurationFrameworkOverrideWhenAvailable:(char)arg1 ;
-(FigCaptureSourceVideoFormat *)requiredFormat;
-(void)setHighlightRecoveryEnabled:(char)arg1 ;
-(void)setSensorHDREnabled:(char)arg1 ;
-(void)setDepthDataFormat:(FigCaptureSourceDepthDataFormat *)arg1 ;
-(void)setDepthDataMaxFrameRate:(float)arg1 ;
-(id)initWithSourceType:(int)arg1 ;
-(char)spatialOverCaptureEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(char)_isCameraSource;
-(int)_sourceToken;
-(float)requiredMaxFrameRate;
-(float)requiredMinFrameRate;
-(float)maxFrameRateClientOverride;
-(float)maxGainClientOverride;
-(char)applyMaxExposureDurationFrameworkOverrideWhenAvailable;
-(SCD_Struct_Fi8)maxExposureDurationClientOverride;
-(char)sensorHDREnabled;
-(char)highlightRecoveryEnabled;
-(FigCaptureSourceDepthDataFormat *)depthDataFormat;
-(float)depthDataMaxFrameRate;
-(char)lowLightVideoCaptureEnabled;
-(char)nonDestructiveCropEnabled;
-(char)geometricDistortionCorrectionEnabled;
-(char)variableFrameRateVideoCaptureEnabled;
-(char)_isMicSource;
-(int)sourcePosition;
-(NSDictionary *)faceDetectionConfiguration;
-(void)setMaxFrameRateClientOverride:(float)arg1 ;
-(void)setMaxGainClientOverride:(float)arg1 ;
-(void)setMaxExposureDurationClientOverride:(SCD_Struct_Fi8)arg1 ;
-(void)setFaceDetectionConfiguration:(NSDictionary *)arg1 ;
-(void)setCinematicFramingSupported:(char)arg1 ;
-(id)_sourceAttributes;
-(char)hasSetVideoZoomFactorOnCaptureSource;
-(void)setHasSetVideoZoomFactorOnCaptureSource:(char)arg1 ;
-(char)smartCameraEnabled;
-(char)bravoShiftMitigationEnabled;
@end

