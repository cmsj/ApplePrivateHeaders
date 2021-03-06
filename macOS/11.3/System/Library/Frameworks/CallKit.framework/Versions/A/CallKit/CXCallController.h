/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CXCallObserver, NSObject;

@interface CXCallController : NSObject {

	CXCallObserver* _callObserver;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) CXCallObserver * callObserver;                               //@synthesize callObserver=_callObserver - In the implementation block
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTransactionWithActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTransactionWithAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CXCallObserver *)callObserver;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
@end

