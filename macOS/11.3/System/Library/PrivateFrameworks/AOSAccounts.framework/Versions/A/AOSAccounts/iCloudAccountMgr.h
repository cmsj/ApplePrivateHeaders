/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSAccounts.framework/Versions/A/AOSAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOperationQueue;

@interface iCloudAccountMgr : NSObject {

	NSArray* _accountCache;
	NSOperationQueue* _operationQueue;
	long long _queuedRefreshCount;

}

@property (retain) NSArray * accountCache;                         //@synthesize accountCache=_accountCache - In the implementation block
@property (retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign) long long queuedRefreshCount;                   //@synthesize queuedRefreshCount=_queuedRefreshCount - In the implementation block
+(id)sharedMgr;
-(id)init;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)icaPrimaryAppleAccount;
-(id)icaAppleAccountWithPersonID:(id)arg1 ;
-(void)setAccountCache:(NSArray *)arg1 ;
-(void)_reloadAccounts:(id)arg1 ;
-(long long)queuedRefreshCount;
-(void)setQueuedRefreshCount:(long long)arg1 ;
-(NSArray *)accountCache;
-(void)forceReloadAccounts;
-(id)icaAppleAccountWithUsername:(id)arg1 ;
@end
