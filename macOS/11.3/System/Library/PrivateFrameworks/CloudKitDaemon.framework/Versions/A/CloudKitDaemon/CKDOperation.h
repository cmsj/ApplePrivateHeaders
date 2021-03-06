/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/CKDURLRequestMetricsDelegate.h>
#import <libobjc.A.dylib/CKDURLRequestAuthRetryDelegate.h>
#import <libobjc.A.dylib/CKThrottlingCriteria.h>
#import <libobjc.A.dylib/CKDFlowControllable.h>

@protocol OS_os_activity, CKOperationCallbacks, OS_dispatch_queue, OS_dispatch_group, NSObject;
@class NSString, NSObject, CKDURLRequest, NSDate, CKDClientContext, CKDClientProxy, NSError, CKDOperationMetrics, CKOperationInfo, NSMutableArray, CKOperationMetrics, CKOperationMMCSRequestOptions, NSMutableDictionary, NSNumber;

@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKThrottlingCriteria, CKDFlowControllable> {

	unsigned long long _state;
	NSObject*<OS_os_activity> _osActivity;
	char _isFinished;
	char _isExecuting;
	char _useEncryption;
	char _useClearAssetEncryption;
	char _isLongLivedCallbackRelayOperation;
	char _shouldPipelineFetchAllChangesRequests;
	char _didAttemptDugongKeyRoll;
	Ai _pcsWaitCount;
	CKDURLRequest* _request;
	id<CKOperationCallbacks> _clientOperationCallbackProxy;
	NSDate* _startDate;
	CKDOperation* _parentOperation;
	CKDClientContext* _context;
	CKDClientProxy* _proxy;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSError* _error;
	CKDOperationMetrics* _cloudKitMetrics;
	CKDOperationMetrics* _MMCSMetrics;
	NSDate* _metricExecuteStartDate;
	/*^block*/id _requestCompletedBlock;
	CKOperationInfo* _operationInfo;
	NSObject*<OS_dispatch_group> _stateTransitionGroup;
	NSMutableArray* _requestUUIDs;
	NSMutableArray* _childOperations;
	NSMutableArray* _finishedChildOperationIDs;
	id<NSObject> _powerAssertion;
	NSObject*<OS_dispatch_group> _childOperationsGroup;
	NSString* _clientSuppliedDeviceIdentifier;

}

@property (nonatomic,retain) NSMutableArray * requestUUIDs;                                              //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * parentOperation;                                      //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,retain) NSMutableArray * childOperations;                                           //@synthesize childOperations=_childOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedChildOperationIDs;                                 //@synthesize finishedChildOperationIDs=_finishedChildOperationIDs - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) id<NSObject> powerAssertion;                                                //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> childOperationsGroup;                          //@synthesize childOperationsGroup=_childOperationsGroup - In the implementation block
@property (nonatomic,retain) NSString * clientSuppliedDeviceIdentifier;                                  //@synthesize clientSuppliedDeviceIdentifier=_clientSuppliedDeviceIdentifier - In the implementation block
@property (nonatomic,retain) CKOperationInfo * operationInfo;                                            //@synthesize operationInfo=_operationInfo - In the implementation block
@property (assign,nonatomic) Ai pcsWaitCount;                                                            //@synthesize pcsWaitCount=_pcsWaitCount - In the implementation block
@property (assign,nonatomic) char didAttemptDugongKeyRoll;                                               //@synthesize didAttemptDugongKeyRoll=_didAttemptDugongKeyRoll - In the implementation block
@property (nonatomic,readonly) char resolvedAutomaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) unsigned long long resolvedDiscretionaryNetworkBehavior; 
@property (nonatomic,readonly) unsigned long long duetPreClearedMode; 
@property (nonatomic,readonly) unsigned long long discretionaryWhenBackgroundedState; 
@property (nonatomic,readonly) unsigned long long systemScheduler; 
@property (nonatomic,__weak,readonly) CKDOperation * topmostParentOperation; 
@property (nonatomic,retain) id<CKOperationCallbacks> clientOperationCallbackProxy;                      //@synthesize clientOperationCallbackProxy=_clientOperationCallbackProxy - In the implementation block
@property (nonatomic,retain) CKDClientContext * context;                                                 //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                                              //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) char useEncryption;                                                         //@synthesize useEncryption=_useEncryption - In the implementation block
@property (assign,nonatomic) char useClearAssetEncryption;                                               //@synthesize useClearAssetEncryption=_useClearAssetEncryption - In the implementation block
@property (nonatomic,readonly) char isLongLivedCallbackRelayOperation;                                   //@synthesize isLongLivedCallbackRelayOperation=_isLongLivedCallbackRelayOperation - In the implementation block
@property (nonatomic,readonly) char shouldCheckAppVersion; 
@property (nonatomic,readonly) char usesBackgroundSession; 
@property (nonatomic,readonly) char expectDelayBeforeRequestBegins; 
@property (nonatomic,readonly) char allowsPowerNapScheduling; 
@property (assign,nonatomic) char shouldPipelineFetchAllChangesRequests;                                 //@synthesize shouldPipelineFetchAllChangesRequests=_shouldPipelineFetchAllChangesRequests - In the implementation block
@property (nonatomic,readonly) unsigned QOSClass; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) char isExecuting;                                                           //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                                                            //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSError * error;                                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CKDURLRequest * request;                                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CKOperationMetrics * operationMetrics; 
@property (nonatomic,retain) CKDOperationMetrics * cloudKitMetrics;                                      //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKDOperationMetrics * MMCSMetrics;                                          //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
@property (nonatomic,retain) NSDate * metricExecuteStartDate;                                            //@synthesize metricExecuteStartDate=_metricExecuteStartDate - In the implementation block
@property (nonatomic,copy) id requestCompletedBlock;                                                     //@synthesize requestCompletedBlock=_requestCompletedBlock - In the implementation block
@property (nonatomic,readonly) NSString * operationID; 
@property (nonatomic,readonly) char isLongLived; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) CKOperationMMCSRequestOptions * MMCSRequestOptions; 
@property (nonatomic,readonly) NSMutableDictionary * unitTestOverrides; 
@property (nonatomic,readonly) char allowsCellularAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForContainerAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForNetworkAttribution; 
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,readonly) NSString * authPromptReason; 
@property (nonatomic,readonly) char automaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) char preferAnonymousRequests; 
@property (nonatomic,readonly) char allowsBackgroundNetworking; 
@property (nonatomic,readonly) double timeoutIntervalForRequest; 
@property (nonatomic,readonly) double timeoutIntervalForResource; 
@property (nonatomic,readonly) NSString * operationGroupID; 
@property (nonatomic,readonly) NSString * operationGroupName; 
@property (nonatomic,readonly) NSNumber * operationGroupQuantityNumber; 
@property (nonatomic,readonly) char isCloudKitSupportOperation; 
@property (nonatomic,readonly) NSNumber * cacheDeleteAvailableSpaceClass; 
@property (nonatomic,readonly) unsigned long long networkServiceType; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> osActivity; 
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup;                          //@synthesize stateTransitionGroup=_stateTransitionGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * flowControlKey; 
+(id)_globalOperationCallbackQueueForQOS:(long long)arg1 ;
+(long long)isPredominatelyDownload;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)state;
-(NSError *)error;
-(void)setQualityOfService:(long long)arg1 ;
-(int)operationType;
-(void)setError:(NSError *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)_stateFlags;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)start;
-(void)cancel;
-(void)main;
-(CKDURLRequest *)request;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(CKDClientContext *)context;
-(NSDate *)startDate;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientProxy *)proxy;
-(id)containerID;
-(NSString *)deviceIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(CKDOperationMetrics *)cloudKitMetrics;
-(double)timeoutIntervalForResource;
-(void)setIsFinished:(char)arg1 ;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(char)arg1 private:(char)arg2 shouldExpand:(char)arg3 ;
-(CKOperationInfo *)operationInfo;
-(id<CKOperationCallbacks>)clientOperationCallbackProxy;
-(NSString *)operationID;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(char)useClearAssetEncryption;
-(void)setUseClearAssetEncryption:(char)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSObject*<OS_os_activity>)osActivity;
-(NSMutableDictionary *)unitTestOverrides;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isLongLived;
-(NSString *)flowControlKey;
-(unsigned long long)discretionaryNetworkBehavior;
-(void)finishWithError:(id)arg1 ;
-(void)setRequest:(CKDURLRequest *)arg1 ;
-(void)setUseEncryption:(char)arg1 ;
-(char)useEncryption;
-(void)setIsExecuting:(char)arg1 ;
-(void)_setIsExecuting:(char)arg1 ;
-(void)_setIsFinished:(char)arg1 ;
-(char)usesBackgroundSession;
-(unsigned long long)duetPreClearedMode;
-(unsigned long long)discretionaryWhenBackgroundedState;
-(unsigned long long)systemScheduler;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(id)requestCompletedBlock;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(char)automaticallyRetryNetworkFailures;
-(void)setRequestCompletedBlock:(id)arg1 ;
-(char)allowsCellularAccess;
-(double)timeoutIntervalForRequest;
-(char)preferAnonymousRequests;
-(id)additionalRequestHTTPHeaders;
-(NSString *)applicationBundleIdentifierForContainerAccess;
-(NSString *)operationGroupName;
-(CKDOperationMetrics *)MMCSMetrics;
-(void)setCloudKitMetrics:(CKDOperationMetrics *)arg1 ;
-(void)setMMCSMetrics:(CKDOperationMetrics *)arg1 ;
-(NSString *)operationGroupID;
-(NSString *)authPromptReason;
-(CKDOperation *)parentOperation;
-(void)setParentOperation:(CKDOperation *)arg1 ;
-(char)allowsBackgroundNetworking;
-(char)isCloudKitSupportOperation;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(void)setPowerAssertion:(id<NSObject>)arg1 ;
-(id<NSObject>)powerAssertion;
-(unsigned long long)networkServiceType;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(id)_startDateString;
-(char)allowsPowerNapScheduling;
-(NSMutableArray *)requestUUIDs;
-(void)configureRequest:(id)arg1 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 operationConfigurationBlock:(/*^block*/id)arg3 ;
-(void)setClientOperationCallbackProxy:(id<CKOperationCallbacks>)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(CKOperationMetrics *)operationMetrics;
-(id)statusReportWithIndent:(unsigned long long)arg1 ;
-(NSString *)applicationBundleIdentifierForNetworkAttribution;
-(void)_ensureOperationGroup;
-(void)configureQualityOfServiceFromOperationInfo:(id)arg1 ;
-(CKDOperation *)topmostParentOperation;
-(NSObject*<OS_dispatch_group>)stateTransitionGroup;
-(void)_dropPowerAssertion;
-(unsigned)QOSClass;
-(NSString *)clientSuppliedDeviceIdentifier;
-(char)isWaitingOnPCS;
-(id)nameForState:(unsigned long long)arg1 ;
-(NSMutableArray *)finishedChildOperationIDs;
-(NSMutableArray *)childOperations;
-(NSNumber *)operationGroupQuantityNumber;
-(void)combineMetricsWithOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)childOperationsGroup;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(/*^block*/id)arg5 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(/*^block*/id)arg4 ;
-(void)_acquirePowerAssertion;
-(void)_registerAttemptForOperation;
-(char)isLongLivedCallbackRelayOperation;
-(void)_determineNetworkServiceType;
-(void)_continueOperationStart;
-(void)setMetricExecuteStartDate:(NSDate *)arg1 ;
-(NSDate *)metricExecuteStartDate;
-(void)_reallyStart;
-(char)operationShouldBeFlowControlled;
-(char)shouldCheckAppVersion;
-(char)_checkAppVersion;
-(char)isTopLevelDaemonOperation;
-(char)_errorShouldImpactFlowControl:(id)arg1 ;
-(void)sendCoreAnalyticsEventOperationFinished;
-(char)makeStateTransition;
-(void)makeStateTransition:(char)arg1 ;
-(void)_dropPowerAssertionsForSelfAndParent;
-(char)resolvedAutomaticallyRetryNetworkFailures;
-(unsigned long long)resolvedDiscretionaryNetworkBehavior;
-(void)_acquirePowerAssertionsForSelfAndParent;
-(id)_runDurationString;
-(id)CKStatusReportProperties;
-(id)CKStatusReportLogGroups;
-(char)didAttemptDugongKeyRoll;
-(id)dugongKeyRollAnalyticsPayloadWithError:(id)arg1 ;
-(id)analyticsPayload;
-(id)baseOperationAndErrorInfoCoreAnalyticsPayloadWithError:(id)arg1 ;
-(void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3 ;
-(void)requestDidBeginWaitingForUserAuth:(id)arg1 ;
-(void)requestDidEndWaitingForUserAuth:(id)arg1 ;
-(id)createSerialQueue;
-(id)createInactiveSerialQueue;
-(id)createConcurrentQueue;
-(id)createInactiveConcurrentQueue;
-(char)checkAndClearUnitTestOverrides:(id)arg1 ;
-(void)noteOperationWillWaitOnPCS;
-(void)noteOperationDidFinishWaitingOnPCS;
-(char)expectDelayBeforeRequestBegins;
-(char)isNetworkingBehaviorEquivalentForOperation:(id)arg1 ;
-(char)shouldPipelineFetchAllChangesRequests;
-(void)setShouldPipelineFetchAllChangesRequests:(char)arg1 ;
-(void)setOperationInfo:(CKOperationInfo *)arg1 ;
-(void)setStateTransitionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRequestUUIDs:(NSMutableArray *)arg1 ;
-(void)setChildOperations:(NSMutableArray *)arg1 ;
-(void)setFinishedChildOperationIDs:(NSMutableArray *)arg1 ;
-(void)setChildOperationsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setClientSuppliedDeviceIdentifier:(NSString *)arg1 ;
-(Ai)pcsWaitCount;
-(void)setPcsWaitCount:(Ai)arg1 ;
-(void)setDidAttemptDugongKeyRoll:(char)arg1 ;
@end

