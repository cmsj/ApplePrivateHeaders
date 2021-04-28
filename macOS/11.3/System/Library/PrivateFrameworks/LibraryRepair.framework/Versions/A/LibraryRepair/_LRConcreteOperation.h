/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LibraryRepair.framework/Versions/A/LibraryRepair
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LibraryRepair/LibraryRepair-Structs.h>
#import <LibraryRepair/LROperation.h>

@protocol LROperationDelegate;
@class NSURL, SFAuthorization, NSArray;

@interface _LRConcreteOperation : LROperation {

	NSURL* _url;
	int _flags;
	SFAuthorization* _auth;
	NSArray* _pathsNeedingRepair;
	unsigned long long _pathsNeedingRepairCount;
	id<LROperationDelegate> _delegate;
	unsigned long long _generation;
	xpc_connection_sRef _connection;
	dispatch_queue_sRef _queue;

}

@property (assign) xpc_connection_sRef connection;                          //@synthesize connection=_connection - In the implementation block
@property (assign) dispatch_queue_sRef queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned long long generation;                           //@synthesize generation=_generation - In the implementation block
@property (retain) NSArray * pathsNeedingRepair;                            //@synthesize pathsNeedingRepair=_pathsNeedingRepair - In the implementation block
@property (assign) unsigned long long pathsNeedingRepairCount;              //@synthesize pathsNeedingRepairCount=_pathsNeedingRepairCount - In the implementation block
-(int)flags;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)generation;
-(xpc_connection_sRef)connection;
-(void)setConnection:(xpc_connection_sRef)arg1 ;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(dispatch_queue_sRef)queue;
-(void)cancel;
-(void)setFlags:(int)arg1 ;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(id)auth;
-(void)setGeneration:(unsigned long long)arg1 ;
-(void)setAuth:(id)arg1 ;
-(void)setPathsNeedingRepair:(NSArray *)arg1 ;
-(void)_handleEvent:(void*)arg1 generation:(unsigned long long)arg2 ;
-(void)setPathsNeedingRepairCount:(unsigned long long)arg1 ;
-(void)beginRepair;
-(NSArray *)pathsNeedingRepair;
-(unsigned long long)pathsNeedingRepairCount;
@end
