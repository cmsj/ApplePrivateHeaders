/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Versions/A/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCConnection, MSTimerGate;

@interface MSClientSidePauseContext : NSObject {

	NSString* _UUID;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSXPCConnection* _server;
	MSTimerGate* _gate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;              //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * server;                             //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) MSTimerGate * gate;                                   //@synthesize gate=_gate - In the implementation block
-(void)resume;
-(void)setServer:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)server;
-(MSTimerGate *)gate;
-(void)setGate:(MSTimerGate *)arg1 ;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(id)initWithServer:(id)arg1 ;
-(void)timerQueueTimerFired;
-(void)timerQueuePing;
@end
