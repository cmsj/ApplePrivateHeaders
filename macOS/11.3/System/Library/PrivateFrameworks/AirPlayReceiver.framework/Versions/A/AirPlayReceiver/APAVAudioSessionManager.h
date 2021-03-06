/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/Versions/A/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AVAudioSession;

@interface APAVAudioSessionManager : NSObject {

	OpaqueFigSimpleMutexRef _mutex;
	AVAudioSession* _session;
	unsigned long long _type;
	char _isSetUp;

}

@property (nonatomic,readonly) AVAudioSession * session;              //@synthesize session=_session - In the implementation block
+(id)mediaSessionManager;
+(id)ambientSessionManager;
-(void)dealloc;
-(id)initWithType:(unsigned long long)arg1 ;
-(AVAudioSession *)session;
-(char)setActive:(char)arg1 error:(id*)arg2 ;
-(void)resetSession;
-(void)setUpSession;
-(char)setAudioMode:(CFStringRef)arg1 isLongForm:(char)arg2 error:(id*)arg3 ;
-(char)setPrefersMultichannelAudio:(unsigned char)arg1 error:(id*)arg2 ;
-(char)setDuckOthers:(unsigned char)arg1 error:(id*)arg2 ;
@end

