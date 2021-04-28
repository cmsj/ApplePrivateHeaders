/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/login.framework/Versions/A/login
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LFSMSession : NSObject {

	int _sessionID;

}

@property (assign) int sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
+(id)sessionWithSessionID:(int)arg1 ;
+(char)isThisSessionOnConsole;
+(id)sessionForUser:(unsigned)arg1 ;
+(void)signalSessionReady;
+(id)sessionByListener:(id)arg1 withOptions:(id)arg2 ;
+(id)sessionWithOptions:(id)arg1 ;
+(id)defaultOptions;
+(id)allSessions;
+(id)currentSession;
+(id)sessionWithCGSessionID:(unsigned)arg1 ;
-(void)bringOnConsoleWithOptions:(id)arg1 ;
-(int)close;
-(id)properties;
-(int)sessionID;
-(void)setSessionID:(int)arg1 ;
-(id)initWithSessionID:(int)arg1 ;
@end
