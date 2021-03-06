/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXActionDelegate.h>
#import <libobjc.A.dylib/CXAbstractProviderVendorProtocol.h>

@protocol OS_dispatch_queue, CXAbstractProviderDelegate;
@class NSMutableArray, NSObject, NSArray, NSString;

@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProviderVendorProtocol> {

	NSMutableArray* _mutablePendingTransactions;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXAbstractProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSMutableArray * mutablePendingTransactions;                          //@synthesize mutablePendingTransactions=_mutablePendingTransactions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXAbstractProviderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) id<CXAbstractProviderHostProtocol> hostProtocolDelegate; 
@property (nonatomic,copy,readonly) NSArray * pendingTransactions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<CXAbstractProviderDelegate>)delegate;
-(void)setDelegate:(id<CXAbstractProviderDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_performAction:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSArray *)pendingTransactions;
-(void)actionCompleted:(id)arg1 ;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(oneway void)commitTransaction:(id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(NSMutableArray *)mutablePendingTransactions;
-(void)_handleConnectionInterruption;
-(id)_pendingActionWithUUID:(id)arg1 ;
-(id<CXAbstractProviderHostProtocol>)hostProtocolDelegate;
-(void)_updatePendingTransactions;
-(void)sendProviderDidBegin;
-(void)handleConnectionInterruption;
@end

