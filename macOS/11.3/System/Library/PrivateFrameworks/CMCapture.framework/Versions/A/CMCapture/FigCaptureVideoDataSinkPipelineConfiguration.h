/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSDictionary;

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {

	FigCaptureVideoTransform _sourceVideoTransform;
	char _sourceHasAppliedAllZoom;
	int _videoStabilizationType;
	int _motionAttachmentsSource;
	char _faceTrackingEnabled;
	char _offlineVISMotionDataEnabled;
	char _P3ToBT2020ConversionEnabled;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	int _sourceDeviceType;
	SCD_Struct_BW12 _visOutputDimensions;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	SCD_Struct_Fi26 _clientAuditToken;
	NSDictionary* _colorInfo;

}

@property (assign,nonatomic) FigCaptureVideoTransform sourceVideoTransform;                                          //@synthesize sourceVideoTransform=_sourceVideoTransform - In the implementation block
@property (assign,nonatomic) char sourceHasAppliedAllZoom;                                                           //@synthesize sourceHasAppliedAllZoom=_sourceHasAppliedAllZoom - In the implementation block
@property (assign,nonatomic) int videoStabilizationType;                                                             //@synthesize videoStabilizationType=_videoStabilizationType - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                                            //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (assign,nonatomic) char faceTrackingEnabled;                                                               //@synthesize faceTrackingEnabled=_faceTrackingEnabled - In the implementation block
@property (assign,nonatomic) char offlineVISMotionDataEnabled;                                                       //@synthesize offlineVISMotionDataEnabled=_offlineVISMotionDataEnabled - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;                                    //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (assign,nonatomic) int sourceDeviceType;                                                                   //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW12 visOutputDimensions;                                                    //@synthesize visOutputDimensions=_visOutputDimensions - In the implementation block
@property (nonatomic,retain) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;              //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi26 clientAuditToken;                                                       //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
@property (nonatomic,retain) NSDictionary * colorInfo;                                                               //@synthesize colorInfo=_colorInfo - In the implementation block
@property (assign,nonatomic) char P3ToBT2020ConversionEnabled;                                                       //@synthesize P3ToBT2020ConversionEnabled=_P3ToBT2020ConversionEnabled - In the implementation block
-(void)dealloc;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(int)sourceDeviceType;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(char)faceTrackingEnabled;
-(void)setFaceTrackingEnabled:(char)arg1 ;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(void)setVideoDataConnectionConfiguration:(FigVideoCaptureConnectionConfiguration *)arg1 ;
-(SCD_Struct_Fi26)clientAuditToken;
-(void)setClientAuditToken:(SCD_Struct_Fi26)arg1 ;
-(NSDictionary *)colorInfo;
-(FigCaptureVideoTransform)sourceVideoTransform;
-(void)setSourceVideoTransform:(FigCaptureVideoTransform)arg1 ;
-(char)sourceHasAppliedAllZoom;
-(void)setSourceHasAppliedAllZoom:(char)arg1 ;
-(int)videoStabilizationType;
-(void)setVideoStabilizationType:(int)arg1 ;
-(char)offlineVISMotionDataEnabled;
-(void)setOfflineVISMotionDataEnabled:(char)arg1 ;
-(void)setSourceDeviceType:(int)arg1 ;
-(SCD_Struct_BW12)visOutputDimensions;
-(void)setVisOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setColorInfo:(NSDictionary *)arg1 ;
-(char)P3ToBT2020ConversionEnabled;
-(void)setP3ToBT2020ConversionEnabled:(char)arg1 ;
@end
