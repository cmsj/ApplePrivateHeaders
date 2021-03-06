/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMDFairPlaySAPSessionDelegate, OS_dispatch_queue;
@class NSObject, NSUUID;

@interface HMDFairPlaySAPSession : HMFObject {

	unsigned long long _state;
	id<HMDFairPlaySAPSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSUUID* _sessionIdentifier;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (__weak,readonly) id<HMDFairPlaySAPSessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionIdentifier;                              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(void)dealloc;
-(id<HMDFairPlaySAPSessionDelegate>)delegate;
-(void)close;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)_teardown;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(NSUUID *)sessionIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_closeWithError:(id)arg1 ;
-(void)openWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setupSAPSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signatureForData:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)verifySignedData:(id)arg1 signature:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

