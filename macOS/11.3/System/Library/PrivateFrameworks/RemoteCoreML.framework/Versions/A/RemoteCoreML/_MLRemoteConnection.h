/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/Versions/A/RemoteCoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_connection, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, _MLNetworking, _MLNetworkOptions, _MLNetworkPacket, NSMutableData;

@interface _MLRemoteConnection : NSObject {

	NSObject*<OS_nw_connection> _connection;
	_MLNetworking* _nwObj;
	_MLNetworkOptions* _nwOptions;
	_MLNetworkPacket* _packet;
	NSMutableData* _outputResult;
	unsigned long long _jobCount;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSObject*<OS_dispatch_queue> _q;

}

@property (nonatomic,readonly) NSObject*<OS_nw_connection> connection;                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) _MLNetworking * nwObj;                                   //@synthesize nwObj=_nwObj - In the implementation block
@property (nonatomic,readonly) _MLNetworkOptions * nwOptions;                           //@synthesize nwOptions=_nwOptions - In the implementation block
@property (nonatomic,readonly) _MLNetworkPacket * packet;                               //@synthesize packet=_packet - In the implementation block
@property (nonatomic,retain) NSMutableData * outputResult;                              //@synthesize outputResult=_outputResult - In the implementation block
@property (nonatomic,readonly) unsigned long long jobCount;                             //@synthesize jobCount=_jobCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;                        //@synthesize q=_q - In the implementation block
-(NSObject*<OS_nw_connection>)connection;
-(id)initWithOptions:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(NSObject*<OS_dispatch_queue>)q;
-(unsigned long long)jobCount;
-(NSMutableData *)outputResult;
-(char)loadFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(_MLNetworkOptions *)nwOptions;
-(void)doReceive:(id)arg1 context:(id)arg2 isComplete:(char)arg3 error:(id)arg4 ;
-(_MLNetworkPacket *)packet;
-(_MLNetworking *)nwObj;
-(void)setOutputResult:(NSMutableData *)arg1 ;
-(char)sendDataAndWaitForAcknowledgementOrTimeout:(id)arg1 ;
-(char)predictionFromURL:(id)arg1 features:(id)arg2 output:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(char)unloadFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)send:(id)arg1 options:(id)arg2 ;
@end
