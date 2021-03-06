/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/Versions/A/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, _DASFileProtection, NSDate, NSArray, NSDictionary, NSMutableDictionary, NSURL, _DASAssertion, NSUUID;

@interface _DASActivity : NSObject <NSCopying, NSSecureCoding> {

	char _cancelAfterDeadline;
	char _requiresNetwork;
	char _isUpload;
	char _requiresInexpensiveNetworking;
	char _requiresUnconstrainedNetworking;
	char _cpuIntensive;
	char _memoryIntensive;
	char _diskIntensive;
	char _requiresDeviceInactivity;
	char _requiresPlugin;
	char _afterUserIsInactive;
	char _beforeUserIsActive;
	char _triggersRestart;
	char _supportsAnyApplication;
	char _requestsApplicationLaunch;
	char _requestsExtensionLaunch;
	char _delayedStart;
	char _darkWakeEligible;
	char _beforeDaysFirstActivity;
	char _shouldBePersisted;
	char _isMLBackgroundActivity;
	char _runOnAppForeground;
	char _deferred;
	char _suspendable;
	char _suspendRequested;
	char _bypassesPredictions;
	char _wasForceRun;
	char _budgeted;
	char _requiresBuddyComplete;
	int _pid;
	unsigned _userIdentifier;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	/*^block*/id _startHandler;
	/*^block*/id _suspendHandler;
	_DASFileProtection* _fileProtection;
	unsigned long long _schedulingPriority;
	NSDate* _startAfter;
	NSDate* _startBefore;
	unsigned long long _duration;
	unsigned long long _uploadSize;
	unsigned long long _downloadSize;
	long long _targetDevice;
	NSArray* _relatedApplications;
	long long _relevancy;
	NSArray* _schedulerRecommendedApplications;
	long long _motionState;
	NSDictionary* _userInfo;
	NSString* _bundleId;
	double _interval;
	NSString* _groupName;
	NSString* _launchReason;
	NSString* _extensionIdentifier;
	double _predictedOptimalScore;
	NSDate* _predictedOptimalStartDate;
	double _lastComputedScore;
	NSDate* _lastScored;
	NSDate* _submitDate;
	NSDate* _startDate;
	double _percentCompleted;
	NSDictionary* _startConditions;
	NSMutableDictionary* _policyScores;
	NSMutableDictionary* _policyReasons;
	unsigned long long _lastDenialValue;
	NSString* _clientName;
	long long _completionStatus;
	NSString* _widgetID;
	NSURL* _applicationURL;
	/*^block*/id _completionHandler;
	NSString* _clientDataBudgetName;
	unsigned long long _budgetingToken;
	_DASAssertion* _assertion;
	long long _preClearedMode;
	NSDate* _endTime;
	NSUUID* _uuid;

}

@property (assign,nonatomic) char darkWakeEligible;                                   //@synthesize darkWakeEligible=_darkWakeEligible - In the implementation block
@property (assign,nonatomic) char beforeDaysFirstActivity;                            //@synthesize beforeDaysFirstActivity=_beforeDaysFirstActivity - In the implementation block
@property (assign,nonatomic) char beforeApplicationLaunch; 
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                      //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSArray * schedulerRecommendedApplications;              //@synthesize schedulerRecommendedApplications=_schedulerRecommendedApplications - In the implementation block
@property (nonatomic,copy) NSString * launchReason;                                   //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy) NSString * extensionIdentifier;                            //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (assign,nonatomic) char supportsAnyApplication;                             //@synthesize supportsAnyApplication=_supportsAnyApplication - In the implementation block
@property (assign,nonatomic) char requestsApplicationLaunch;                          //@synthesize requestsApplicationLaunch=_requestsApplicationLaunch - In the implementation block
@property (assign,nonatomic) char requestsExtensionLaunch;                            //@synthesize requestsExtensionLaunch=_requestsExtensionLaunch - In the implementation block
@property (assign,nonatomic) char shouldBePersisted;                                  //@synthesize shouldBePersisted=_shouldBePersisted - In the implementation block
@property (assign,nonatomic) char requestsNewsstandLaunch; 
@property (assign,nonatomic) char requiresSignificantUserInactivity; 
@property (assign,nonatomic) char hasMagneticSensitivity; 
@property (assign,nonatomic) char allowsCompanionExpensiveNetworking; 
@property (assign,nonatomic) char isMLBackgroundActivity;                             //@synthesize isMLBackgroundActivity=_isMLBackgroundActivity - In the implementation block
@property (assign,nonatomic) char runOnAppForeground;                                 //@synthesize runOnAppForeground=_runOnAppForeground - In the implementation block
@property (assign,nonatomic) char isContactTracingBackgroundActivity; 
@property (assign,nonatomic) char deferred;                                           //@synthesize deferred=_deferred - In the implementation block
@property (assign,nonatomic) char userRequestedBackupTask; 
@property (assign,nonatomic) double predictedOptimalScore;                            //@synthesize predictedOptimalScore=_predictedOptimalScore - In the implementation block
@property (retain) NSDate * predictedOptimalStartDate;                                //@synthesize predictedOptimalStartDate=_predictedOptimalStartDate - In the implementation block
@property (assign,nonatomic) double lastComputedScore;                                //@synthesize lastComputedScore=_lastComputedScore - In the implementation block
@property (retain) NSDate * lastScored;                                               //@synthesize lastScored=_lastScored - In the implementation block
@property (nonatomic,retain) NSDate * submitDate;                                     //@synthesize submitDate=_submitDate - In the implementation block
@property (retain) NSDate * startDate;                                                //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) char suspendable;                                        //@synthesize suspendable=_suspendable - In the implementation block
@property (assign,nonatomic) char suspendRequested;                                   //@synthesize suspendRequested=_suspendRequested - In the implementation block
@property (assign,nonatomic) char bypassesPredictions;                                //@synthesize bypassesPredictions=_bypassesPredictions - In the implementation block
@property (assign,nonatomic) double percentCompleted;                                 //@synthesize percentCompleted=_percentCompleted - In the implementation block
@property (retain) NSDictionary * startConditions;                                    //@synthesize startConditions=_startConditions - In the implementation block
@property (retain) NSMutableDictionary * policyScores;                                //@synthesize policyScores=_policyScores - In the implementation block
@property (retain) NSMutableDictionary * policyReasons;                               //@synthesize policyReasons=_policyReasons - In the implementation block
@property (assign) unsigned long long lastDenialValue;                                //@synthesize lastDenialValue=_lastDenialValue - In the implementation block
@property (assign,nonatomic) char wasForceRun;                                        //@synthesize wasForceRun=_wasForceRun - In the implementation block
@property (assign,nonatomic) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSString * clientName;                                   //@synthesize clientName=_clientName - In the implementation block
@property (assign,nonatomic) long long completionStatus;                              //@synthesize completionStatus=_completionStatus - In the implementation block
@property (nonatomic,retain) NSString * widgetID;                                     //@synthesize widgetID=_widgetID - In the implementation block
@property (nonatomic,retain) NSURL * applicationURL;                                  //@synthesize applicationURL=_applicationURL - In the implementation block
@property (nonatomic,retain) NSString * clientProvidedIdentifier; 
@property (nonatomic,retain) NSDate * clientProvidedStartDate; 
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) char budgeted;                                           //@synthesize budgeted=_budgeted - In the implementation block
@property (nonatomic,retain) NSString * clientDataBudgetName;                         //@synthesize clientDataBudgetName=_clientDataBudgetName - In the implementation block
@property (assign,nonatomic) unsigned long long budgetingToken;                       //@synthesize budgetingToken=_budgetingToken - In the implementation block
@property (nonatomic,retain) _DASAssertion * assertion;                               //@synthesize assertion=_assertion - In the implementation block
@property (assign,nonatomic) long long preClearedMode;                                //@synthesize preClearedMode=_preClearedMode - In the implementation block
@property (assign,nonatomic) char requiresBuddyComplete;                              //@synthesize requiresBuddyComplete=_requiresBuddyComplete - In the implementation block
@property (assign,nonatomic) unsigned userIdentifier;                                 //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (retain) NSDate * endTime;                                                  //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;               //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,copy) id startHandler;                                           //@synthesize startHandler=_startHandler - In the implementation block
@property (nonatomic,copy) id suspendHandler;                                         //@synthesize suspendHandler=_suspendHandler - In the implementation block
@property (nonatomic,copy) _DASFileProtection * fileProtection;                       //@synthesize fileProtection=_fileProtection - In the implementation block
@property (assign,nonatomic) unsigned long long schedulingPriority;                   //@synthesize schedulingPriority=_schedulingPriority - In the implementation block
@property (retain) NSDate * startAfter;                                               //@synthesize startAfter=_startAfter - In the implementation block
@property (retain) NSDate * startBefore;                                              //@synthesize startBefore=_startBefore - In the implementation block
@property (assign,nonatomic) char cancelAfterDeadline;                                //@synthesize cancelAfterDeadline=_cancelAfterDeadline - In the implementation block
@property (assign,nonatomic) unsigned long long duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char requiresNetwork;                                    //@synthesize requiresNetwork=_requiresNetwork - In the implementation block
@property (assign,nonatomic) unsigned long long transferSize; 
@property (assign,nonatomic) unsigned long long uploadSize;                           //@synthesize uploadSize=_uploadSize - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSize;                         //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) char isUpload;                                           //@synthesize isUpload=_isUpload - In the implementation block
@property (assign,nonatomic) char requiresInexpensiveNetworking;                      //@synthesize requiresInexpensiveNetworking=_requiresInexpensiveNetworking - In the implementation block
@property (assign,nonatomic) char requiresUnconstrainedNetworking;                    //@synthesize requiresUnconstrainedNetworking=_requiresUnconstrainedNetworking - In the implementation block
@property (assign,nonatomic) char cpuIntensive;                                       //@synthesize cpuIntensive=_cpuIntensive - In the implementation block
@property (assign,nonatomic) char memoryIntensive;                                    //@synthesize memoryIntensive=_memoryIntensive - In the implementation block
@property (assign,nonatomic) char diskIntensive;                                      //@synthesize diskIntensive=_diskIntensive - In the implementation block
@property (assign,nonatomic) char requiresDeviceInactivity;                           //@synthesize requiresDeviceInactivity=_requiresDeviceInactivity - In the implementation block
@property (assign,nonatomic) char requiresPlugin;                                     //@synthesize requiresPlugin=_requiresPlugin - In the implementation block
@property (assign,nonatomic) char afterUserIsInactive;                                //@synthesize afterUserIsInactive=_afterUserIsInactive - In the implementation block
@property (assign,nonatomic) char beforeUserIsActive;                                 //@synthesize beforeUserIsActive=_beforeUserIsActive - In the implementation block
@property (assign,nonatomic) char triggersRestart;                                    //@synthesize triggersRestart=_triggersRestart - In the implementation block
@property (assign,nonatomic) long long targetDevice;                                  //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) NSArray * relatedApplications;                           //@synthesize relatedApplications=_relatedApplications - In the implementation block
@property (assign,nonatomic) long long relevancy;                                     //@synthesize relevancy=_relevancy - In the implementation block
@property (assign,nonatomic) long long motionState;                                   //@synthesize motionState=_motionState - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                                     //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) char delayedStart;                                       //@synthesize delayedStart=_delayedStart - In the implementation block
+(char)supportsSecureCoding;
+(id)extensionLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
+(id)activityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 ;
+(unsigned long long)cleanSchedulingPriority:(unsigned long long)arg1 ;
+(unsigned long long)cleanDuration:(unsigned long long)arg1 ;
+(id)extensionLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 forExtensionIdentifier:(id)arg4 withReason:(id)arg5 duration:(unsigned long long)arg6 startingAfter:(id)arg7 startingBefore:(id)arg8 ;
+(id)applicationLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
+(id)launchWithTopic:(id)arg1 forReason:(id)arg2 withPayload:(id)arg3 highPriority:(char)arg4 ;
+(unsigned long long)cleanTransferSize:(unsigned long long)arg1 ;
+(id)validClassesForUserInfoSerialization;
+(id)sharedDateFormatter;
+(id)prettySchedulingPriorityDescription:(unsigned long long)arg1 ;
+(id)networkingActivityWithName:(id)arg1 priority:(unsigned long long)arg2 transferSize:(unsigned long long)arg3 isUpload:(char)arg4 expensiveNetworkingAllowed:(char)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
+(id)networkingActivityWithName:(id)arg1 priority:(unsigned long long)arg2 downloadSize:(unsigned long long)arg3 uploadSize:(unsigned long long)arg4 expensiveNetworkingAllowed:(char)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
+(id)anyApplicationActivityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 limitedToApplications:(id)arg6 ;
+(id)extensionLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forExtensionIdentifier:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7 ;
+(id)launchForRemoteNotificationWithTopic:(id)arg1 withPayload:(id)arg2 highPriority:(char)arg3 ;
+(id)validateBGTaskRequestWithActivity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned)userIdentifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)launchReason;
-(void)setLaunchReason:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(int)pid;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setDeferred:(char)arg1 ;
-(char)deferred;
-(id)shortDescription;
-(NSString *)clientName;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(_DASAssertion *)assertion;
-(void)setPid:(int)arg1 ;
-(char)userRequestedBackupTask;
-(void)setUserRequestedBackupTask:(char)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(void)setMemoryIntensive:(char)arg1 ;
-(void)setRequiresPlugin:(char)arg1 ;
-(void)setCpuIntensive:(char)arg1 ;
-(void)setAfterUserIsInactive:(char)arg1 ;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setRequiresBuddyComplete:(char)arg1 ;
-(char)cpuIntensive;
-(char)requiresBuddyComplete;
-(void)setAssertion:(_DASAssertion *)arg1 ;
-(id)nameString;
-(void)setUserIdentifier:(unsigned)arg1 ;
-(long long)targetDevice;
-(void)setTargetDevice:(long long)arg1 ;
-(long long)completionStatus;
-(void)setCompletionStatus:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)widgetID;
-(void)setWidgetID:(NSString *)arg1 ;
-(void)setFileProtection:(_DASFileProtection *)arg1 ;
-(void)setRelatedApplications:(NSArray *)arg1 ;
-(void)setStartHandler:(id)arg1 ;
-(void)setSuspendHandler:(id)arg1 ;
-(void)updateGroupIfNecessary;
-(id)initWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 ;
-(void)setRequiresNetwork:(char)arg1 ;
-(void)setDownloadSize:(unsigned long long)arg1 ;
-(void)setIsUpload:(char)arg1 ;
-(void)setRequiresInexpensiveNetworking:(char)arg1 ;
-(void)setUploadSize:(unsigned long long)arg1 ;
-(void)setSupportsAnyApplication:(char)arg1 ;
-(void)setRequestsApplicationLaunch:(char)arg1 ;
-(void)setRequestsExtensionLaunch:(char)arg1 ;
-(void)setSchedulingPriority:(unsigned long long)arg1 ;
-(NSString *)clientProvidedIdentifier;
-(NSDate *)startAfter;
-(NSDate *)startBefore;
-(NSDate *)clientProvidedStartDate;
-(void)setStartAfter:(NSDate *)arg1 ;
-(void)setStartBefore:(NSDate *)arg1 ;
-(char)requiresNetwork;
-(char)requiresPlugin;
-(void)setClientProvidedIdentifier:(NSString *)arg1 ;
-(void)setClientProvidedStartDate:(NSDate *)arg1 ;
-(void)setRequiresDeviceInactivity:(char)arg1 ;
-(char)isContactTracingBackgroundActivity;
-(unsigned long long)schedulingPriority;
-(char)requestsApplicationLaunch;
-(char)requiresSignificantUserInactivity;
-(char)hasMagneticSensitivity;
-(char)allowsCompanionExpensiveNetworking;
-(char)requestsNewsstandLaunch;
-(void)setObject:(id)arg1 forUserInfoKey:(id)arg2 ;
-(char)beforeApplicationLaunch;
-(void)setMotionState:(long long)arg1 ;
-(void)setClientDataBudgetName:(NSString *)arg1 ;
-(NSArray *)relatedApplications;
-(char)isIntensive;
-(char)triggersRestart;
-(long long)relevancy;
-(unsigned long long)uploadSize;
-(unsigned long long)downloadSize;
-(double)percentCompleted;
-(void)setPercentCompleted:(double)arg1 ;
-(NSDate *)submitDate;
-(void)setSubmitDate:(NSDate *)arg1 ;
-(double)predictedOptimalScore;
-(void)setPredictedOptimalScore:(double)arg1 ;
-(NSDate *)predictedOptimalStartDate;
-(void)setPredictedOptimalStartDate:(NSDate *)arg1 ;
-(double)lastComputedScore;
-(void)setLastComputedScore:(double)arg1 ;
-(NSDate *)lastScored;
-(void)setLastScored:(NSDate *)arg1 ;
-(NSMutableDictionary *)policyScores;
-(void)setPolicyScores:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)policyReasons;
-(void)setPolicyReasons:(NSMutableDictionary *)arg1 ;
-(unsigned long long)lastDenialValue;
-(void)setLastDenialValue:(unsigned long long)arg1 ;
-(char)wasForceRun;
-(void)setWasForceRun:(char)arg1 ;
-(char)budgeted;
-(NSString *)clientDataBudgetName;
-(void)setTransferSize:(unsigned long long)arg1 ;
-(unsigned long long)transferSize;
-(void)setDiskIntensive:(char)arg1 ;
-(void)setBeforeDaysFirstActivity:(char)arg1 ;
-(void)setDarkWakeEligible:(char)arg1 ;
-(void)setTriggersRestart:(char)arg1 ;
-(void)setIsMLBackgroundActivity:(char)arg1 ;
-(void)setRequiresSignificantUserInactivity:(char)arg1 ;
-(void)setHasMagneticSensitivity:(char)arg1 ;
-(void)setAllowsCompanionExpensiveNetworking:(char)arg1 ;
-(char)isSilentPush;
-(void)setRequestsNewsstandLaunch:(char)arg1 ;
-(void)setIsContactTracingBackgroundActivity:(char)arg1 ;
-(void)setBeforeApplicationLaunch:(char)arg1 ;
-(void)setConstraintsWithXPCDictionary:(id)arg1 ;
-(double)compatibilityWith:(id)arg1 ;
-(char)hasManyConstraints;
-(char)timewiseEligibleAtDate:(id)arg1 ;
-(char)overdueAtDate:(id)arg1 ;
-(char)significantlyOverdueAtDate:(id)arg1 ;
-(char)isIdenticalLaunchTo:(id)arg1 ;
-(char)keepsPrevious;
-(char)overwritesPrevious;
-(char)isBackgroundTaskActivity;
-(char)shouldReplaceActivity:(id)arg1 andKeepsSubmitted:(char*)arg2 ;
-(void)reconcileWithActivity:(id)arg1 ;
-(id)startHandler;
-(id)suspendHandler;
-(_DASFileProtection *)fileProtection;
-(char)cancelAfterDeadline;
-(void)setCancelAfterDeadline:(char)arg1 ;
-(char)isUpload;
-(char)requiresInexpensiveNetworking;
-(char)requiresUnconstrainedNetworking;
-(void)setRequiresUnconstrainedNetworking:(char)arg1 ;
-(char)memoryIntensive;
-(char)diskIntensive;
-(char)requiresDeviceInactivity;
-(char)afterUserIsInactive;
-(char)beforeUserIsActive;
-(void)setBeforeUserIsActive:(char)arg1 ;
-(char)supportsAnyApplication;
-(char)requestsExtensionLaunch;
-(void)setRelevancy:(long long)arg1 ;
-(NSArray *)schedulerRecommendedApplications;
-(void)setSchedulerRecommendedApplications:(NSArray *)arg1 ;
-(long long)motionState;
-(char)delayedStart;
-(void)setDelayedStart:(char)arg1 ;
-(char)darkWakeEligible;
-(char)beforeDaysFirstActivity;
-(char)shouldBePersisted;
-(void)setShouldBePersisted:(char)arg1 ;
-(char)isMLBackgroundActivity;
-(char)runOnAppForeground;
-(void)setRunOnAppForeground:(char)arg1 ;
-(char)suspendable;
-(void)setSuspendable:(char)arg1 ;
-(char)suspendRequested;
-(void)setSuspendRequested:(char)arg1 ;
-(char)bypassesPredictions;
-(void)setBypassesPredictions:(char)arg1 ;
-(NSDictionary *)startConditions;
-(void)setStartConditions:(NSDictionary *)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(NSURL *)applicationURL;
-(void)setApplicationURL:(NSURL *)arg1 ;
-(void)setBudgeted:(char)arg1 ;
-(unsigned long long)budgetingToken;
-(void)setBudgetingToken:(unsigned long long)arg1 ;
-(long long)preClearedMode;
-(void)setPreClearedMode:(long long)arg1 ;
@end

