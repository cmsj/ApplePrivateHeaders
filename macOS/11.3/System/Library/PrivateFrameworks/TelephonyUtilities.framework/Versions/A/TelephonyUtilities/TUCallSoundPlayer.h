/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUNSSoundPlayer;

@interface TUCallSoundPlayer : NSObject {

	TUNSSoundPlayer* _player;
	long long _currentlyPlayingSoundType;

}

@property (nonatomic,retain) TUNSSoundPlayer * player;                         //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingSoundType;              //@synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) char playing; 
-(id)init;
-(char)isPlaying;
-(void)setPlayer:(TUNSSoundPlayer *)arg1 ;
-(TUNSSoundPlayer *)player;
-(void)stopPlaying;
-(char)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)attemptToPlayDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)currentlyPlayingSoundType;
-(void)setCurrentlyPlayingSoundType:(long long)arg1 ;
-(char)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 ;
-(char)attemptToPlayDescriptor:(id)arg1 ;
@end
