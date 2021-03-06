/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCBoostableOperationThrottlerDelegate, OS_dispatch_queue;
@class NSObject;

@interface FCBoostableOperationThrottler : NSObject <FCOperationThrottler> {

	char _workPending;
	os_unfair_lock_s _workPendingLock;
	unsigned long long _mergedData;
	id<FCBoostableOperationThrottlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;
	long long _workPendingQualityOfService;
	unsigned long long _workPendingMergedData;

}

@property (assign,nonatomic,__weak) id<FCBoostableOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialWorkQueue;                           //@synthesize serialWorkQueue=_serialWorkQueue - In the implementation block
@property (assign,nonatomic) char workPending;                                                       //@synthesize workPending=_workPending - In the implementation block
@property (assign,nonatomic) long long workPendingQualityOfService;                                  //@synthesize workPendingQualityOfService=_workPendingQualityOfService - In the implementation block
@property (assign,nonatomic) unsigned long long workPendingMergedData;                               //@synthesize workPendingMergedData=_workPendingMergedData - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s workPendingLock;                                       //@synthesize workPendingLock=_workPendingLock - In the implementation block
@property (assign,nonatomic) unsigned long long mergedData;                                          //@synthesize mergedData=_mergedData - In the implementation block
@property (assign) char suspended; 
-(id)init;
-(id<FCBoostableOperationThrottlerDelegate>)delegate;
-(void)setDelegate:(id<FCBoostableOperationThrottlerDelegate>)arg1 ;
-(void)setSuspended:(char)arg1 ;
-(char)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickleWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(char)workPending;
-(void)setWorkPending:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialWorkQueue;
-(void)tickleWithQualityOfService:(long long)arg1 ;
-(void)setSerialWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(os_unfair_lock_s)workPendingLock;
-(void)setWorkPendingLock:(os_unfair_lock_s)arg1 ;
-(void)tickleWithQualityOfService:(long long)arg1 data:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)mergedData;
-(long long)workPendingQualityOfService;
-(void)setWorkPendingQualityOfService:(long long)arg1 ;
-(unsigned long long)workPendingMergedData;
-(void)setWorkPendingMergedData:(unsigned long long)arg1 ;
-(void)setMergedData:(unsigned long long)arg1 ;
@end

