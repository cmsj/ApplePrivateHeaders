/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NWConnection, NSRecursiveLock, NSString;

@interface NWConnectionManager : NSObject {

	NSObject*<OS_dispatch_semaphore> networkConnectionReadySemaphore;
	NSObject*<OS_dispatch_semaphore> sendSemaphore;
	NSObject*<OS_dispatch_queue> readDispatchQueue;
	char _stopConnection;
	NWConnection* connection;
	NSRecursiveLock* writeLock;

}

@property (retain) NWConnection * connection; 
@property (retain) NSRecursiveLock * writeLock; 
@property (readonly) NSString * stateString; 
@property (assign) char stopConnection;                      //@synthesize stopConnection=_stopConnection - In the implementation block
-(void)dealloc;
-(id)init;
-(NWConnection *)connection;
-(void)setConnection:(NWConnection *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)stateString;
-(char)stopConnection;
-(void)setStopConnection:(char)arg1 ;
-(id)initWithNWConnection:(id)arg1 ;
-(void)waitForConnection:(unsigned)arg1 ;
-(void)writeData:(const void*)arg1 size:(unsigned)arg2 ;
-(void)setWriteLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)writeLock;
-(void)startRead:(id)arg1 ;
@end

