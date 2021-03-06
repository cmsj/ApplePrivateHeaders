/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDSearchableIndexSchedulableDelegate.h>

@protocol EDSearchableIndexSchedulable, OS_dispatch_queue;
@class EDSearchableIndexBudgetConfiguration, NSString, NSObject, NSMutableDictionary, NSMutableSet;

@interface EDSearchableIndexScheduler : NSObject <EFLoggable, EDSearchableIndexSchedulableDelegate> {

	char _dataSourceIndexingPermitted;
	char _scheduling;
	char _scheduledDeferralCheck;
	double _budgetedTimeRemaining;
	long long _budgetedItemCountRemaining;
	double _noActivityIndexingTime;
	double _maintenanceIndexingTime;
	id<EDSearchableIndexSchedulable> _schedulable;
	EDSearchableIndexBudgetConfiguration* _budgetConfiguration;
	NSString* _budgetTimeUserDefaultsKey;
	NSObject*<OS_dispatch_queue> _indexingStateQueue;
	NSMutableDictionary* _activities;
	NSMutableSet* _indexingEnabledForActivityTypes;

}

@property (assign,nonatomic) char scheduledDeferralCheck;                                               //@synthesize scheduledDeferralCheck=_scheduledDeferralCheck - In the implementation block
@property (nonatomic,copy) NSString * budgetTimeUserDefaultsKey;                                        //@synthesize budgetTimeUserDefaultsKey=_budgetTimeUserDefaultsKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexingStateQueue;                           //@synthesize indexingStateQueue=_indexingStateQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activities;                                          //@synthesize activities=_activities - In the implementation block
@property (nonatomic,retain) NSMutableSet * indexingEnabledForActivityTypes;                            //@synthesize indexingEnabledForActivityTypes=_indexingEnabledForActivityTypes - In the implementation block
@property (getter=isDataSourceIndexingPermitted) char dataSourceIndexingPermitted;                      //@synthesize dataSourceIndexingPermitted=_dataSourceIndexingPermitted - In the implementation block
@property (assign) long long budgetedItemCountRemaining;                                                //@synthesize budgetedItemCountRemaining=_budgetedItemCountRemaining - In the implementation block
@property (assign) double budgetedTimeRemaining;                                                        //@synthesize budgetedTimeRemaining=_budgetedTimeRemaining - In the implementation block
@property (assign) double noActivityIndexingTime;                                                       //@synthesize noActivityIndexingTime=_noActivityIndexingTime - In the implementation block
@property (assign) double maintenanceIndexingTime;                                                      //@synthesize maintenanceIndexingTime=_maintenanceIndexingTime - In the implementation block
@property (assign,getter=isScheduling,nonatomic) char scheduling;                                       //@synthesize scheduling=_scheduling - In the implementation block
@property (nonatomic,__weak,readonly) id<EDSearchableIndexSchedulable> schedulable;                     //@synthesize schedulable=_schedulable - In the implementation block
@property (nonatomic,readonly) EDSearchableIndexBudgetConfiguration * budgetConfiguration;              //@synthesize budgetConfiguration=_budgetConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activityTypes;
+(id)log;
+(id)deferrableActivityTypes;
+(id)budgetTimeUserDefaultsKeyForIndexName:(id)arg1 ;
+(char)isDeferrableActivityType:(id)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)activities;
-(void)setActivities:(NSMutableDictionary *)arg1 ;
-(char)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)arg1 ;
-(double)budgetedTimeRemainingForSearchableIndexSchedulable:(id)arg1 ;
-(long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)arg1 ;
-(void)searchableIndexSchedulable:(id)arg1 didGenerateImportantPowerEventWithIdentifier:(id)arg2 eventData:(id)arg3 ;
-(void)indexingDidSuspendForSearchableIndexSchedulable:(id)arg1 ;
-(void)indexingDidResumeForSearchableIndexSchedulable:(id)arg1 ;
-(char)isDataSourceIndexingPermitted;
-(void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id)arg1 ;
-(void)searchableIndexSchedulable:(id)arg1 didIndexForTime:(double)arg2 ;
-(void)searchableIndexSchedulable:(id)arg1 didIndexItemCount:(long long)arg2 ;
-(void)searchableIndexSchedulable:(id)arg1 didGeneratePowerEventWithIdentifier:(id)arg2 eventData:(id)arg3 ;
-(void)setDataSourceIndexingPermitted:(char)arg1 ;
-(void)setScheduling:(char)arg1 ;
-(double)_budgetTimeFromUserDefaults;
-(void)_stopAllIndexing;
-(void)_startScheduling;
-(void)_stopScheduling;
-(EDSearchableIndexBudgetConfiguration *)budgetConfiguration;
-(void)setBudgetedItemCountRemaining:(long long)arg1 ;
-(void)beginIndexingForActivityType:(id)arg1 activity:(id)arg2 ;
-(/*^block*/id)_xpcCriteriaBuilderBlockForActivityType:(id)arg1 ;
-(void)_registerActivityForType:(id)arg1 builder:(/*^block*/id)arg2 runner:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)indexingStateQueue;
-(void)_setBudgetedTimeRemaining:(double)arg1 ;
-(void)_enableIndexingForActivityType:(id)arg1 ;
-(void)_logIndexingPowerEventWithIdentifier:(id)arg1 additionalEventData:(id)arg2 usePersistentLog:(char)arg3 ;
-(void)_beginIndexingForActivityType:(id)arg1 activity:(id)arg2 ;
-(void)_disableIndexingForActivityType:(id)arg1 defer:(char)arg2 ;
-(void)_stopIndexingForActivityType:(id)arg1 shouldDeferIfPossible:(char)arg2 ;
-(char)_isIndexingEnabledForActivityType:(id)arg1 ;
-(char)_isIndexingEnabledByActivities;
-(char)scheduledDeferralCheck;
-(void)setScheduledDeferralCheck:(char)arg1 ;
-(void)_deferActivitiesIfNecessary;
-(void)_periodicallyCheckForDeferralIfNecessary;
-(NSMutableSet *)indexingEnabledForActivityTypes;
-(void)_setDataSourceIndexingPermitted:(char)arg1 ;
-(id<EDSearchableIndexSchedulable>)schedulable;
-(NSString *)budgetTimeUserDefaultsKey;
-(double)budgetedTimeRemaining;
-(long long)budgetedItemCountRemaining;
-(id)initWithSchedulable:(id)arg1 budgetConfiguration:(id)arg2 ;
-(id)_xpcActivityIdentifierForActivityType:(id)arg1 ;
-(void)deferIndexingForActivityType:(id)arg1 ;
-(char)isIndexingEnabledForActivityType:(id)arg1 ;
-(void)setNoActivityIndexingTime:(double)arg1 ;
-(double)noActivityIndexingTime;
-(void)setMaintenanceIndexingTime:(double)arg1 ;
-(double)maintenanceIndexingTime;
-(void)setBudgetedTimeRemaining:(double)arg1 ;
-(char)isScheduling;
-(void)setBudgetTimeUserDefaultsKey:(NSString *)arg1 ;
-(void)setIndexingStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIndexingEnabledForActivityTypes:(NSMutableSet *)arg1 ;
@end

