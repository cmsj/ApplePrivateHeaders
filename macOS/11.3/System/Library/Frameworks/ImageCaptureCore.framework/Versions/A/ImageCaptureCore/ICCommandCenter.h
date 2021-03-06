/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableDictionary, NSXPCConnection, NSLock, NSObject;

@interface ICCommandCenter : NSObject {

	int _selfPID;
	NSMutableDictionary* _pendingCommands;
	char _openSession;
	NSXPCConnection* _connection;
	unsigned _connectionAttempts;
	NSLock* _connectionLock;
	NSObject*<OS_dispatch_queue> _serialCommandQueue;
	NSMutableDictionary* _replyDict;
	NSObject*<OS_dispatch_semaphore> _msgSem;

}
+(id)defaultCenter;
-(void)icddConnectionSetup:(id)arg1 ;
-(void)lockConnection;
-(void)unlockConnection;
-(void)handleImageCaptureEventNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestScannerOpenSessionWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)makeCommand:(id)arg1 ;
-(void)loadDeviceModuleForDeviceRef:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendCommand:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setConnection:(id)arg1 ;
-(void)resetConnection;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)requestOpenSessionWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getConnection;
-(void)messageFromClient:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)messageFromDevice:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)messageFromICDD:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setDeviceModuleEndpointForDeviceRef:(id)arg1 endpoint:(id)arg2 deviceID:(id)arg3 ;
-(void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(char)arg3 ;
-(void)releaseConnection;
@end

