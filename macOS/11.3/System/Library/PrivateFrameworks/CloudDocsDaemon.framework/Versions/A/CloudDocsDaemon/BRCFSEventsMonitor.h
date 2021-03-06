/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, BRCFSEventsDelegate;
@class BRCAccountSession, NSString, BRCFSEventsPersistedState, NSObject, BRCFairSource, NSMutableArray, BRCVolume, BRCRelativePath, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable> {

	BRCAccountSession* _session;
	NSString* _name;
	Ai _suspendCount;
	Ai _resetCount;
	BRCFSEventsPersistedState* _persistedState;
	NSString* _devicePath;
	NSObject*<OS_dispatch_source> _rootVnodeWatcher;
	FSEventStreamRef _stream;
	NSObject*<OS_dispatch_queue> _streamQueue;
	NSObject*<OS_dispatch_source> _historicalEventSource;
	NSObject*<OS_dispatch_queue> _processQueue;
	BRCFairSource* _fseventsProcessSource;
	NSMutableArray* _fseventsToProcess;
	unsigned long long _maxFSEventQueueSize;
	unsigned long long _fseventProcessBatchSize;
	char _hasMarkSelf;
	BRCFSEventsPersistedState* _rendezVous;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	char _drainEvents;
	BRCVolume* _volume;
	char _isCancelled;
	BRCRelativePath* _root;
	id<BRCFSEventsDelegate> _delegate;
	PQLConnection* _db;

}

@property (__weak) id<BRCFSEventsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (setter=setDB:,nonatomic,retain) PQLConnection * db;              //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * root;                      //@synthesize root=_root - In the implementation block
@property (nonatomic,readonly) char volumeIsCaseSensitive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isCancelled;                            //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(id<BRCFSEventsDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<BRCFSEventsDelegate>)arg1 ;
-(void)resume;
-(void)cancel;
-(void)suspend;
-(char)isCancelled;
-(BRCRelativePath *)root;
-(PQLConnection *)db;
-(void)_close;
-(void)_cancel;
-(id)initWithAccountSession:(id)arg1 ;
-(char)openWithRoot:(id)arg1 isImmutableRoot:(char)arg2 volume:(id)arg3 error:(id*)arg4 ;
-(id)initWithAccountSession:(id)arg1 name:(id)arg2 ;
-(void)setDB:(id)arg1 ;
-(void)resetWithReason:(id)arg1 ;
-(void)signalAfterCurrentFSEvent:(id)arg1 ;
-(void)_updatePersistedStateWithState:(id)arg1 ;
-(void)fseventOnRootWithEventID:(unsigned long long)arg1 andReason:(id)arg2 ;
-(char)setUpRoot:(id)arg1 isImmutableRoot:(char)arg2 volume:(id)arg3 error:(id*)arg4 ;
-(char)setUpStreamSynchronously:(char)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(char)_queueEvents:(id)arg1 markSelfEncountered:(char)arg2 ;
-(void)processFseventBatch;
-(void)fseventAtPath:(id)arg1 withFlags:(unsigned)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned)arg4 eventCount:(unsigned)arg5 initialScan:(char)arg6 ;
-(void)resetWithReason:(id)arg1 dropFSEventID:(char)arg2 ;
-(void)didProcessEventID:(unsigned long long)arg1 ;
-(void)stopWatcher;
-(char)volumeIsCaseSensitive;
-(char)openWithRoot:(id)arg1 volume:(id)arg2 error:(id*)arg3 ;
-(void)queueEvents:(id)arg1 markSelfEncountered:(char)arg2 ;
-(void)flushStream;
@end

