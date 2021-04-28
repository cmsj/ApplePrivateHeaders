/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDMessageHistorySyncTask.h>

@class NSString, IMDAccountController, NSMutableDictionary;

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject <IMDMessageHistorySyncTask> {

	NSString* _className;
	IMDAccountController* _accountController;
	NSMutableDictionary* _taskGroupedByServiceName;
	/*^block*/id _syncTaskCompletionBlock;

}

@property (nonatomic,retain) IMDAccountController * accountController;                    //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskGroupedByServiceName;              //@synthesize taskGroupedByServiceName=_taskGroupedByServiceName - In the implementation block
@property (nonatomic,copy) id syncTaskCompletionBlock;                                    //@synthesize syncTaskCompletionBlock=_syncTaskCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithAccountController:(id)arg1 ;
-(void)setSyncTaskCompletionBlock:(id)arg1 ;
-(void)_setupAndBeginSync;
-(void)setTaskGroupedByServiceName:(NSMutableDictionary *)arg1 ;
-(/*^block*/id)_createProcessBatchBlockWithServiceSession:(id)arg1 ;
-(/*^block*/id)_createKnownRecordBlock;
-(/*^block*/id)_createSyncCompletionBlockForServiceSession:(id)arg1 ;
-(void)startSyncTask:(/*^block*/id)arg1 ;
-(unsigned long long)syncTaskType;
-(IMDAccountController *)accountController;
-(void)setAccountController:(IMDAccountController *)arg1 ;
-(NSMutableDictionary *)taskGroupedByServiceName;
-(id)syncTaskCompletionBlock;
@end
