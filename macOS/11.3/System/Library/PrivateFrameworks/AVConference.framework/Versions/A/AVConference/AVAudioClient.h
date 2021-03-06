/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
@property (assign,nonatomic) id changeListener; 
+(char)isMicrophoneMuted;
+(void)setMicrophoneMuted:(char)arg1 ;
+(char)setInputDevice:(id)arg1 ;
+(id)currentInputDevice;
+(id)currentOutputDevice;
+(char)setOutputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(void)stopAudioSession;
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(char)hasActiveAudioSession;
+(void)registerBlocksForNotifications;
+(void)initializeAudioSessionQ;
+(void)resetAudioSessionOutputPortOverride;
+(void)registerSecureMicrophoneEngagedHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)devices;
-(AVAudioDeviceList *)deviceList;
-(id)outputDevices;
-(id)changeListener;
-(id)inputDevices;
-(void)setChangeListener:(id)arg1 ;
-(void)setDeviceList:(AVAudioDeviceList *)arg1 ;
@end

