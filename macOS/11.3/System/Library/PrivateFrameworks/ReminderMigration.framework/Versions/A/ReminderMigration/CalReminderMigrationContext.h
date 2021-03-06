/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/Versions/A/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalReminderKitDatabaseMigrationContext, CalReminderKitProvider;
@class REMStore, REMSaveRequest, REMAccountChangeItem, REMObjectID, NSMutableArray, NSDictionary, REMAccount, NSMutableDictionary, NSString;

@interface CalReminderMigrationContext : NSObject {

	id<CalReminderKitDatabaseMigrationContext> _remDatabaseMigrationContext;
	REMStore* _reminderStore;
	REMSaveRequest* _saveRequest;
	REMAccountChangeItem* _localAccountChangeItem;
	REMObjectID* _defaultListMigratedIdentifier;
	NSMutableArray* _orderedListChangeItemsStack;
	char _accountsLoaded;
	NSDictionary* _accountsForAccountIdentifiers;
	REMAccount* _localAccount;
	NSMutableDictionary* _accountChangeItemsForAccountIdentifiers;
	char _recordedAnyFatalFailures;
	id<CalReminderKitProvider> _reminderKitProvider;
	NSString* _defaultListOriginalIdentifier;

}

@property (nonatomic,readonly) id<CalReminderKitProvider> reminderKitProvider;              //@synthesize reminderKitProvider=_reminderKitProvider - In the implementation block
@property (nonatomic,readonly) char shouldPerformMigration; 
@property (nonatomic,readonly) char shouldDeleteMigratedData; 
@property (nonatomic,readonly) REMSaveRequest * saveRequest; 
@property (nonatomic,readonly) REMAccountChangeItem * localAccountChangeItem; 
@property (nonatomic,retain) NSString * defaultListOriginalIdentifier;                      //@synthesize defaultListOriginalIdentifier=_defaultListOriginalIdentifier - In the implementation block
@property (nonatomic,readonly) REMObjectID * defaultListMigratedIdentifier;                 //@synthesize defaultListMigratedIdentifier=_defaultListMigratedIdentifier - In the implementation block
@property (nonatomic,readonly) char isCurrentOrderedListItemsContextEmpty; 
-(char)_setup;
-(REMSaveRequest *)saveRequest;
-(id)reminderStore;
-(void)_loadAccountsIfNeeded;
-(char)shouldDeleteMigratedData;
-(char)ensureAccountsExist:(id)arg1 ;
-(char)shouldPerformMigration;
-(id)_initWithReminderKitProvider:(id)arg1 ;
-(char)_tryBeginMigration;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4 isFatal:(char)arg5 ;
-(id<CalReminderKitProvider>)reminderKitProvider;
-(char)finishMigrationWithSave:(char)arg1 ;
-(void)_willBeginMigration;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 ;
-(id)accountsForAccountIdentifiers;
-(void)_verifyAccountHasNoLists:(id)arg1 withAccountIdentifier:(id)arg2 ;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4 ;
-(NSString *)defaultListOriginalIdentifier;
-(void)_sortAddedReminderListsInAccountChangeItem:(id)arg1 ;
-(id)_sortedAddedListChangeItems;
-(REMObjectID *)defaultListMigratedIdentifier;
-(void)_didEndMigrationWithSuccess:(char)arg1 ;
-(REMAccountChangeItem *)localAccountChangeItem;
-(id)existingAccountChangeItemWithAccountIdentifier:(id)arg1 ;
-(void)recordAddedListChangeItem:(id)arg1 withOriginalIdentifier:(id)arg2 order:(id)arg3 ;
-(void)pushOrderedListItemsContext;
-(void)popOrderedListItemsContextAndSortListsInAccountChangeItem:(id)arg1 ;
-(char)isCurrentOrderedListItemsContextEmpty;
-(void)setDefaultListOriginalIdentifier:(NSString *)arg1 ;
@end

