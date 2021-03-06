/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject {

	NSHashTable* _listeners;
	NSMutableArray* _supportedProtocols;
	char _shouldQueue;
	NSMutableArray* _queuedEvents;

}

@property (nonatomic,retain) NSHashTable * listeners;                          //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (assign,nonatomic) char shouldQueue;                                 //@synthesize shouldQueue=_shouldQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedEvents;                    //@synthesize queuedEvents=_queuedEvents - In the implementation block
+(id)eventEmitterForProtocols:(id)arg1 shouldQueue:(char)arg2 ;
+(id)eventEmitterForProtocols:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSHashTable *)listeners;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)registerListener:(id)arg1 ;
-(void)setQueuedEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queuedEvents;
-(NSMutableArray *)supportedProtocols;
-(void)setSupportedProtocols:(NSMutableArray *)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(void)setShouldQueue:(char)arg1 ;
-(char)shouldQueue;
-(char)listenerRegisteredForSelector:(SEL)arg1 ;
-(void)unregisterAllListeners;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithSupportedProtocols:(id)arg1 shouldQueue:(char)arg2 ;
-(void)dispatchQueuedEventsToListener:(id)arg1 ;
-(id)invocationForProtocol:(id)arg1 selector:(SEL)arg2 ;
@end

