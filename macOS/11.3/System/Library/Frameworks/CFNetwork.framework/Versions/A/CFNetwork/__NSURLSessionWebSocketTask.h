/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFLocalSessionTask.h>

@protocol OS_nw_protocol_options;
@class NSData, NSMutableArray, NSError, NSString, NSObject;

@interface __NSURLSessionWebSocketTask : __NSCFLocalSessionTask {

	char _webSocketHandshakeCompleted;
	char _readInProgress;
	int _pingSeed;
	long long _maximumMessageSize;
	long long _closeCode;
	NSData* _closeReason;
	NSMutableArray* _pendingSendWork;
	NSMutableArray* _pendingReceiveWork;
	NSMutableArray* _highPriorityPendingWork;
	NSMutableArray* _delegateWork;
	NSError* _webSocketError;
	NSString* _protocolPicked;
	NSObject*<OS_nw_protocol_options> _wsOptions;

}

@property (assign) long long maximumMessageSize;              //@synthesize maximumMessageSize=_maximumMessageSize - In the implementation block
@property (readonly) long long closeCode;                     //@synthesize closeCode=_closeCode - In the implementation block
@property (copy,readonly) NSData * closeReason;               //@synthesize closeReason=_closeReason - In the implementation block
-(void)_onqueue_cancel;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)_onqueue_resume;
-(long long)maximumMessageSize;
-(void)sendPingWithPongReceiveHandler:(/*^block*/id)arg1 ;
-(void)setMaximumMessageSize:(long long)arg1 ;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(void)cancel;
-(NSData *)closeReason;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)receiveMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2 ;
-(long long)closeCode;
@end

