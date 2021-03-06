/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPLibrary.framework/Versions/A/AMPLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, AMPArtworkEventsProtocol, OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface AMPArtworkClient : NSObject {

	NSObject*<OS_os_log> _logHandle;
	id<AMPArtworkEventsProtocol> _eventsDelegate;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _replyQueue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> replyQueue;                         //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> logHandle;                                  //@synthesize logHandle=_logHandle - In the implementation block
@property (assign,nonatomic,__weak) id<AMPArtworkEventsProtocol> eventsDelegate;              //@synthesize eventsDelegate=_eventsDelegate - In the implementation block
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)currentConnection;
-(void)connect;
-(void)connectionInvalidated;
-(NSObject*<OS_os_log>)logHandle;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<AMPArtworkEventsProtocol>)eventsDelegate;
-(void)setEventsDelegate:(id<AMPArtworkEventsProtocol>)arg1 ;
-(void)lookupArtworkForInfo:(id)arg1 forDatabase:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)fetchArtwork:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setArtwork:(id)arg1 forInfo:(id)arg2 forDatabase:(unsigned long long)arg3 withReply:(/*^block*/id)arg4 ;
-(void)setRemoteArtworkForInfo:(id)arg1 forDatabase:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)removeArtwork:(unsigned long long)arg1 forUUID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)removeArtworkWithArray:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)purgeAllItemsforDatabase:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)withClientQueue:(/*^block*/id)arg1 ;
-(char)openDatabase:(unsigned long long)arg1 forKind:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)closeDatabase:(unsigned long long)arg1 ;
-(void)synchronousFetchArtwork:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(char)disableEventBroadcaster:(id*)arg1 ;
@end

