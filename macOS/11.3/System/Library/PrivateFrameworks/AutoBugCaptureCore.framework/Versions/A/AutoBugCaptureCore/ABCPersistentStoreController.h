/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;
@class AnalyticsWorkspace, NSObject;

@interface ABCPersistentStoreController : NSObject {

	AnalyticsWorkspace* _workspace;
	char workspaceReady;
	AnalyticsWorkspace* tempWorkspace;
	NSObject*<OS_dispatch_queue> storeQueue;
	id<ABCPersistentStoreControllerDelegate> _delegate;

}

@property (nonatomic,readonly) AnalyticsWorkspace * workspace; 
@property (assign,nonatomic,__weak) id<ABCPersistentStoreControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<ABCPersistentStoreControllerDelegate>)delegate;
-(void)setDelegate:(id<ABCPersistentStoreControllerDelegate>)arg1 ;
-(void)save;
-(void)save:(char)arg1 ;
-(AnalyticsWorkspace *)workspace;
-(void)shutdown;
-(id)initWithDirectory:(id)arg1 ;
-(void)cleanupDiagnosticCaseUsage;
-(void)cleanupDiagnosticCaseStorage;
-(void)cleanupDiagnosticCaseSummary;
-(void)cleanupUploadRecord;
-(void)removeCaseStorageWithID:(id)arg1 ;
-(id)caseStorageAnalytics;
-(void)removeCaseStoragesWithCaseIDs:(id)arg1 ;
-(void)caseAttachmentsForDiagnosticCaseIDs:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)prepareDataDirectoryWithName:(id)arg1 containerPath:(id)arg2 ;
-(char)prepareWorkspaceWithDirectoryPath:(id)arg1 ;
-(id)initWithName:(id)arg1 inDirectory:(id)arg2 ;
-(id)caseUsageAnalytics;
-(id)caseSummaryAnalytics;
-(id)uploadRecordAnalytics;
-(void)removeCaseStoragesWithUUIDs:(id)arg1 ;
-(void)removeAllCaseStorages;
@end

