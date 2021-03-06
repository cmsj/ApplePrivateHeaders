/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/Versions/A/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioPasscode/AudioPasscode-Structs.h>
@class AVAudioSession, AVAudioEngine, AVAudioUnit, AUPasscodeDecoder, AUPasscodeCodecConfiguration;

@interface APCListenerEngine : NSObject {

	AVAudioSession* _session;
	AVAudioEngine* _engine;
	AVAudioUnit* _decoderAUNode;
	AUPasscodeDecoder* _decoderAU;
	AUPasscodeCodecConfiguration* _codecConfig;

}
+(id)listenerWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
+(id)listenerWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 resultData:(id)arg4 error:(id*)arg5 ;
-(id)createAU:(AudioComponentDescription)arg1 ;
-(void)setupAudioSession;
-(void)createEngineAndAttachNodes;
-(id)initWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 resultData:(id)arg4 error:(id*)arg5 ;
-(char)validateInputNodeWithFormat:(id)arg1 ;
-(void)makeEngineConnectionsWithError:(id*)arg1 ;
-(void)startEngineWithError:(id*)arg1 ;
-(void)stopEngine;
@end

