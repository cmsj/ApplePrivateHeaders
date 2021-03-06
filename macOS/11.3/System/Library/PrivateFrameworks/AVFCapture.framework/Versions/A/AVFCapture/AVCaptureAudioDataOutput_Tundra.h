/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput_Tundra.h>

@class AVCaptureAudioDataOutputInternal_Tundra, NSDictionary;

@interface AVCaptureAudioDataOutput_Tundra : AVCaptureOutput_Tundra {

	AVCaptureAudioDataOutputInternal_Tundra* _internal;

}

@property (nonatomic,readonly) id<AVCaptureAudioDataOutputSampleBufferDelegate_Tundra> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * audioSettings; 
+(void)initialize;
+(id)new;
-(void)dealloc;
-(id)init;
-(NSDictionary *)audioSettings;
-(id)supportedAssetWriterOutputFileTypes;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(id<AVCaptureAudioDataOutputSampleBufferDelegate_Tundra>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(id)connectionMediaTypes;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(char)getAudioSplitterNode:(int*)arg1 andAudioMixerNode:(int*)arg2 forConnection:(id)arg3 ;
-(id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2 ;
-(void)_updateCompressorNodesForConnection:(id)arg1 ;
-(id)outputGraphNodeDescriptionForConnection:(id)arg1 ;
-(void)_render:(id)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)_defaultCaptureAudioSettings;
-(id)_getAVAudioOutputSettings;
-(id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
@end

