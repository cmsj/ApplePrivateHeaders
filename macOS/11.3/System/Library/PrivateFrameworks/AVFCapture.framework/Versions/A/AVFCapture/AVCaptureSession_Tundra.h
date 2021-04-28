/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureSessionInternal_Tundra, NSString, NSArray;

@interface AVCaptureSession_Tundra : NSObject {

	AVCaptureSessionInternal_Tundra* _internal;
	char usesApplicationAudioSession;
	char automaticallyConfiguresApplicationAudioSession;
	char automaticallyConfiguresCaptureDeviceForWideColor;

}

@property (nonatomic,copy) NSString * sessionPreset; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) NSArray * connections; 
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (getter=isInterrupted,nonatomic,readonly) char interrupted; 
@property (assign,nonatomic) char usesApplicationAudioSession; 
@property (assign,nonatomic) char automaticallyConfiguresApplicationAudioSession; 
@property (assign,nonatomic) char automaticallyConfiguresCaptureDeviceForWideColor; 
@property (nonatomic,readonly) OpaqueCMClockRef masterClock; 
+(void)initialize;
+(id)avCaptureSessionPlist;
+(id)allAVCaptureSessionPresets;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isRunning;
-(NSArray *)connections;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)beginConfiguration;
-(NSArray *)inputs;
-(void)removeInput:(id)arg1 ;
-(NSArray *)outputs;
-(void)removeOutput:(id)arg1 ;
-(char)isInterrupted;
-(OpaqueCMClockRef)masterClock;
-(void)addOutput:(id)arg1 ;
-(char)canAddOutput:(id)arg1 ;
-(char)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)stopRunning;
-(void)removeConnection:(id)arg1 ;
-(NSString *)sessionPreset;
-(char)isBeingConfigured;
-(void)removeVideoPreviewLayer:(id)arg1 ;
-(void)commitConfiguration;
-(char)canSetSessionPreset:(id)arg1 ;
-(void)_doSessionUpdates;
-(char)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(void)_addInputWithNoConnections:(id)arg1 ;
-(id)_connectionsForNewInputPort:(id)arg1 ;
-(char)canAddConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(char)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(void)_addOutputWithNoConnections:(id)arg1 ;
-(id)_connectionsForNewOutput:(id)arg1 ;
-(id)_connectionsForNewVideoPreviewLayer:(id)arg1 ;
-(char)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_stopAndTearDownGraph;
-(void)_buildAndRunGraph;
-(void)_postRuntimeError:(id)arg1 ;
-(char)_buildGraphUnitsForInputPort:(id)arg1 error:(id*)arg2 ;
-(char)_buildGraphUnitsForConnection:(id)arg1 error:(id*)arg2 ;
-(void)_setupMasterSynchronizers;
-(void)_configureAudioDecoderConverters;
-(void)_informActiveInputsAndOutputsThatGraphWillStart;
-(void)_setupMasterClock;
-(void)_setMasterClock:(OpaqueCMClockRef)arg1 ;
-(char)_graphIsInitialized;
-(char)_graphIsRunning;
-(id)_stopError;
-(void)_informActiveInputsAndOutputsThatGraphWillStopWithError:(id)arg1 ;
-(void)_setRunning:(char)arg1 ;
-(void)_postNotificationNamed:(id)arg1 ;
-(void)_rebuildGraph;
-(char)_buildSupportUnitsForVideoInputPort:(id)arg1 error:(id*)arg2 ;
-(char)_buildSupportUnitsForAudioInputPort:(id)arg1 error:(id*)arg2 ;
-(char)_buildSupportUnitsForClosedCaptionInputPort:(id)arg1 error:(id*)arg2 ;
-(char)_buildSupportUnitsForGenericInputPort:(id)arg1 error:(id*)arg2 ;
-(char)_connectGraphUnitsForVideoConnection:(id)arg1 error:(id*)arg2 ;
-(char)_connectGraphUnitsForAudioConnection:(id)arg1 error:(id*)arg2 ;
-(char)_connectGraphUnitsForClosedCaptionConnection:(id)arg1 error:(id*)arg2 ;
-(char)_connectGraphUnitsForGenericConnection:(id)arg1 error:(id*)arg2 ;
-(id)_resolvedDecompressionSettingsForInputPort:(id)arg1 alsoRequiresDeviceNative:(char*)arg2 ;
-(void)decompressionRequirementsDidChangeForConnection:(id)arg1 ;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)addInputWithNoConnections:(id)arg1 ;
-(void)addOutputWithNoConnections:(id)arg1 ;
-(void)addVideoPreviewLayer:(id)arg1 ;
-(void)addVideoPreviewLayerWithNoConnection:(id)arg1 ;
-(void)startRunning;
-(int*)audioChannelMapForConnection:(id)arg1 size:(unsigned long long*)arg2 ;
-(void)decompressionSettingsDidChangeForConnection:(id)arg1 ;
-(id)defaultOutputSettingsForConnection:(id)arg1 fileType:(id)arg2 ;
-(id)defaultConnectionPropertiesForConnection:(id)arg1 ;
-(char)usesApplicationAudioSession;
-(void)setUsesApplicationAudioSession:(char)arg1 ;
-(char)automaticallyConfiguresApplicationAudioSession;
-(void)setAutomaticallyConfiguresApplicationAudioSession:(char)arg1 ;
-(char)automaticallyConfiguresCaptureDeviceForWideColor;
-(void)setAutomaticallyConfiguresCaptureDeviceForWideColor:(char)arg1 ;
@end
