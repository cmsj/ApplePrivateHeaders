/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSourceConfiguration, NSArray, BWZoomCommandHandler, NSString;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {

	FigCaptureSourceConfiguration* _micConfiguration;
	NSArray* _micConnectionConfigurations;
	FigCaptureSourceConfiguration* _cameraConfigurationForStereoAudioCapture;
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;
	char _flipStereoAudioCaptureChannels;
	NSString* _sessionPreset;
	char _configuresAppAudioSession;
	unsigned _clientVersionOfLinkedSDK;
	SCD_Struct_Fi26 _clientAuditToken;

}

@property (nonatomic,retain) FigCaptureSourceConfiguration * micConfiguration;                                      //@synthesize micConfiguration=_micConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * micConnectionConfigurations;                                                 //@synthesize micConnectionConfigurations=_micConnectionConfigurations - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * cameraConfigurationForStereoAudioCapture;              //@synthesize cameraConfigurationForStereoAudioCapture=_cameraConfigurationForStereoAudioCapture - In the implementation block
@property (nonatomic,retain) BWZoomCommandHandler * zoomCommandHandlerForStereoAudioCapture;                        //@synthesize zoomCommandHandlerForStereoAudioCapture=_zoomCommandHandlerForStereoAudioCapture - In the implementation block
@property (assign,nonatomic) char flipStereoAudioCaptureChannels;                                                   //@synthesize flipStereoAudioCaptureChannels=_flipStereoAudioCaptureChannels - In the implementation block
@property (nonatomic,retain) NSString * sessionPreset;                                                              //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (assign,nonatomic) char configuresAppAudioSession;                                                        //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) unsigned clientVersionOfLinkedSDK;                                                     //@synthesize clientVersionOfLinkedSDK=_clientVersionOfLinkedSDK - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi26 clientAuditToken;                                                      //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
-(void)dealloc;
-(NSString *)sessionPreset;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)setConfiguresAppAudioSession:(char)arg1 ;
-(char)configuresAppAudioSession;
-(id)micConnectionConfigurationsForMicSourcePosition:(int)arg1 ;
-(FigCaptureSourceConfiguration *)micConfiguration;
-(void)setMicConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(NSArray *)micConnectionConfigurations;
-(void)setMicConnectionConfigurations:(NSArray *)arg1 ;
-(FigCaptureSourceConfiguration *)cameraConfigurationForStereoAudioCapture;
-(void)setCameraConfigurationForStereoAudioCapture:(FigCaptureSourceConfiguration *)arg1 ;
-(BWZoomCommandHandler *)zoomCommandHandlerForStereoAudioCapture;
-(void)setZoomCommandHandlerForStereoAudioCapture:(BWZoomCommandHandler *)arg1 ;
-(char)flipStereoAudioCaptureChannels;
-(void)setFlipStereoAudioCaptureChannels:(char)arg1 ;
-(unsigned)clientVersionOfLinkedSDK;
-(void)setClientVersionOfLinkedSDK:(unsigned)arg1 ;
-(SCD_Struct_Fi26)clientAuditToken;
-(void)setClientAuditToken:(SCD_Struct_Fi26)arg1 ;
@end
