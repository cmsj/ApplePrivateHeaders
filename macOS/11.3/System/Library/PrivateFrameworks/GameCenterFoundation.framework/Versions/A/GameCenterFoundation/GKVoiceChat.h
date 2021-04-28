/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKVoiceChatSessionDelegate.h>

@class NSArray, GKSession, GKVoiceChatSession, NSString;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate> {

	NSArray* _players;
	/*^block*/id _playerStateUpdateHandler;
	/*^block*/id _playerVoiceChatStateDidChangeHandler;
	GKSession* _gkSession;
	GKVoiceChatSession* _gkVoiceChatSession;

}

@property (nonatomic,retain) GKSession * gkSession;                                //@synthesize gkSession=_gkSession - In the implementation block
@property (nonatomic,retain) GKVoiceChatSession * gkVoiceChatSession;              //@synthesize gkVoiceChatSession=_gkVoiceChatSession - In the implementation block
@property (copy) id playerStateUpdateHandler;                                      //@synthesize playerStateUpdateHandler=_playerStateUpdateHandler - In the implementation block
@property (retain) NSArray * players;                                              //@synthesize players=_players - In the implementation block
@property (copy) id playerVoiceChatStateDidChangeHandler;                          //@synthesize playerVoiceChatStateDidChangeHandler=_playerVoiceChatStateDidChangeHandler - In the implementation block
@property (copy,readonly) NSString * name; 
@property (getter=isActive) char active; 
@property (assign) float volume; 
+(char)isVoIPAllowed;
-(void)dealloc;
-(NSString *)name;
-(char)isActive;
-(float)volume;
-(void)start;
-(void)stop;
-(void)setActive:(char)arg1 ;
-(void)setVolume:(float)arg1 ;
-(NSArray *)players;
-(void)setPlayers:(NSArray *)arg1 ;
-(id)initChat:(id)arg1 withSession:(id)arg2 players:(id)arg3 ;
-(id)playerIDs;
-(void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned long long)arg2 forPeer:(id)arg3 ;
-(void)setPlayer:(id)arg1 muted:(char)arg2 ;
-(void)setMute:(char)arg1 forPlayer:(id)arg2 ;
-(id)playerStateUpdateHandler;
-(void)setPlayerStateUpdateHandler:(id)arg1 ;
-(id)playerVoiceChatStateDidChangeHandler;
-(void)setPlayerVoiceChatStateDidChangeHandler:(id)arg1 ;
-(GKSession *)gkSession;
-(void)setGkSession:(GKSession *)arg1 ;
-(GKVoiceChatSession *)gkVoiceChatSession;
-(void)setGkVoiceChatSession:(GKVoiceChatSession *)arg1 ;
@end
