/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_voucher, SZExtractor, NSURLSessionAppleIDContext, OS_nw_endpoint, __NSURLSessionTaskGroupForConfiguration, OS_nw_activity;
@class NSProgress, NSString, NSURLRequest, NSURLResponse, NSError, __CFN_TransactionMetrics, NSDictionary, NSArray, NSObject, NSUUID, NSURLSessionTaskHTTPAuthenticator, NSURLSessionTaskDependencyTree, NSURLSessionTaskDependency, NSData, NSURL, NSURLSessionEffectiveConfiguration, NSDate, __CFN_TaskMetrics, NSURLSession;

@interface NSURLSessionTask : NSObject <NSCopying, NSProgressReporting> {

	NSProgress* _uploadProgress;
	NSProgress* _downloadProgress;
	CFDictionaryRef _atsStateCache;
	os_unfair_lock_s _unfair_lock;
	char _isInUpload;
	char _undeterminedUploadProgressState;
	char _undeterminedDownloadProgressState;
	char _progressReportingFinished;
	char _seenFirstResume;
	char _shouldSkipPreferredClientCertificateLookup;
	char _cacheOnly;
	char _preventsSystemHTTPProxyAuthentication;
	char _requiresSecureHTTPSProxyConnection;
	char _preventsAppSSO;
	char _appSSOFallback;
	char _appleIDContextRedirect;
	char _proxyHandshakePending;
	char _shouldPipelineHTTP;
	char _shouldUsePipelineHeuristics;
	char _shouldSkipPipelineProbe;
	char _shouldHandleCookies;
	char _preventsIdleSystemSleep;
	char _allowsCellular;
	char _prohibitAuthUI;
	char _strictContentLength;
	char _connectionIsCellular;
	char _connectionIsCompanionLink;
	char _allowsQUIC;
	char _extractorFinishedDecoding;
	char _extractorPreparedForExtraction;
	char _hasSZExtractor;
	char _doesSZExtractorConsumeExtractedData;
	char _authenticatorConfiguredViaTaskProperty;
	char _isTopLevelNavigation;
	char _disallowCellular;
	char _assumesHTTP3Capable;
	char _preconnect;
	char _prefersIncrementalDeliveryAPIStorage;
	unsigned short __TLSMinimumSupportedProtocolVersion;
	unsigned short __TLSMaximumSupportedProtocolVersion;
	int _cookieAcceptPolicy;
	unsigned _qos;
	unsigned _powerAssertion;
	unsigned _darkWakePowerAssertion;
	unsigned _TLSNegotiatedCipherSuite;
	int _allowsCellularOverride;
	int _allowsExpensiveOverride;
	int _allowsConstrainedOverride;
	int _networkServiceType;
	float _priorityAPIStorage;
	unsigned long long _taskIdentifier;
	NSString* _taskDescription;
	NSString* _loggableDescription;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	long long _countOfBytesClientExpectsToSend;
	long long _countOfBytesClientExpectsToReceive;
	long long _countOfBytesReceived;
	long long __countOfPendingBytesReceivedEncoded;
	long long __countOfBytesReceivedEncoded;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	long long _state;
	NSError* _error;
	double _startTime;
	long long _priorityValue;
	double _loadingPriorityValue;
	__CFN_TransactionMetrics* _backgroundTransactionMetrics;
	NSString* _pathToDownloadTaskFile;
	CFHSTSPolicyRef _cfHSTS;
	const CFURLCacheRef _cfCache;
	CFURLCredentialStorageRef _cfCreds;
	OpaqueCFHTTPCookieStorageRef _cfCookies;
	unsigned long long _cachePolicy;
	double _timeoutInterval;
	double _timeoutIntervalForResource_ivar;
	NSDictionary* _proxySettings;
	NSDictionary* _sslSettings;
	NSArray* _contentDispositionFallbackArray;
	NSObject*<OS_voucher> _voucher;
	long long _suspensionThreshhold;
	unsigned long long _allowedProtocolTypes;
	long long _requestPriority;
	NSUUID* _uniqueIdentifier;
	NSString* _storagePartitionIdentifier;
	id _protocolForTask;
	NSURLSessionTaskHTTPAuthenticator* _authenticator;
	NSDictionary* _dependencyInfo_ivar;
	NSURLSessionTaskDependencyTree* _dependencyTree;
	NSURLSessionTaskDependency* _taskDependency;
	NSDictionary* _DuetActivityProperties;
	NSData* __TCPConnectionMetadata;
	NSDictionary* _trailers;
	long long _discretionaryOverride;
	id<SZExtractor> _extractor;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	NSURL* _publishingURL;
	NSURL* _backgroundPublishingURL;
	NSString* _APSRelayTopic;
	NSURL* _siteForCookies;
	/*^block*/id _httpConnectionInfoCompletionBlock;
	NSObject*<OS_nw_endpoint> _hostOverride;
	id<__NSURLSessionTaskGroupForConfiguration> __taskGroup;
	NSURLSessionEffectiveConfiguration* _effectiveConfiguration;
	NSDate* earliestBeginDate;
	NSProgress* _progress;
	__CFN_TaskMetrics* _metrics;
	NSObject*<OS_nw_activity> _nw_activity;
	NSObject*<OS_nw_activity> _private_nw_activity;
	NSDictionary* _legacySocketStreamProperties;
	NSDictionary* _cachedSocketStreamProperties;
	long long _bytesPerSecondLimitValue;
	unsigned long long _expectedProgressTargetValue;
	long long _expectedWorkload;
	double _timeWindowDelay;
	double _timeWindowDuration;
	NSString* _boundInterfaceIdentifier;
	NSArray* _resolvedCNAMEChain;
	/*^block*/id _cookieTransformCallback;

}

@property (copy,readonly) NSURLSessionEffectiveConfiguration * _effectiveConfiguration; 
@property (assign) unsigned long long taskIdentifier;                                                    //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                                                         //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                                                          //@synthesize currentRequest=_currentRequest - In the implementation block
@property (retain,readonly) NSURL * currentRequest_URL; 
@property (retain,readonly) NSURL * currentRequest_mainDocumentURL; 
@property (copy) NSURLResponse * response;                                                               //@synthesize response=_response - In the implementation block
@property (assign) long long countOfBytesReceived;                                                       //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                                                           //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                                                 //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;                                              //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (assign) long long state;                                                                      //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                                                        //@synthesize error=_error - In the implementation block
@property (assign) double startTime;                                                                     //@synthesize startTime=_startTime - In the implementation block
@property (retain,readonly) id<__NSURLSessionTaskGroupForConfiguration> _taskGroup;                      //@synthesize _taskGroup=__taskGroup - In the implementation block
@property (retain,readonly) NSURLSession * session; 
@property (retain,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (assign) long long _priorityValue;                                                             //@synthesize priorityValue=_priorityValue - In the implementation block
@property (assign) double _loadingPriorityValue;                                                         //@synthesize loadingPriorityValue=_loadingPriorityValue - In the implementation block
@property (nonatomic,readonly) NSString * _description; 
@property (nonatomic,readonly) NSString * _loggableDescription;                                          //@synthesize loggableDescription=_loggableDescription - In the implementation block
@property (retain) __CFN_TransactionMetrics * _backgroundTransactionMetrics;                             //@synthesize backgroundTransactionMetrics=_backgroundTransactionMetrics - In the implementation block
@property (assign) char _shouldSkipPreferredClientCertificateLookup;                                     //@synthesize shouldSkipPreferredClientCertificateLookup=_shouldSkipPreferredClientCertificateLookup - In the implementation block
@property (assign) char _cacheOnly;                                                                      //@synthesize cacheOnly=_cacheOnly - In the implementation block
@property (assign) char _preventsSystemHTTPProxyAuthentication;                                          //@synthesize preventsSystemHTTPProxyAuthentication=_preventsSystemHTTPProxyAuthentication - In the implementation block
@property (assign) char _requiresSecureHTTPSProxyConnection;                                             //@synthesize requiresSecureHTTPSProxyConnection=_requiresSecureHTTPSProxyConnection - In the implementation block
@property (assign) char _preventsAppSSO;                                                                 //@synthesize preventsAppSSO=_preventsAppSSO - In the implementation block
@property (assign) char _appSSOFallback;                                                                 //@synthesize appSSOFallback=_appSSOFallback - In the implementation block
@property (assign) char _appleIDContextRedirect;                                                         //@synthesize appleIDContextRedirect=_appleIDContextRedirect - In the implementation block
@property (copy) NSDictionary * _legacySocketStreamProperties;                                           //@synthesize legacySocketStreamProperties=_legacySocketStreamProperties - In the implementation block
@property (copy) NSDictionary * _cachedSocketStreamProperties;                                           //@synthesize cachedSocketStreamProperties=_cachedSocketStreamProperties - In the implementation block
@property (retain) CFHSTSPolicyRef _cfHSTS;                                                              //@synthesize cfHSTS=_cfHSTS - In the implementation block
@property (retain) const CFURLCacheRef _cfCache;                                                         //@synthesize cfCache=_cfCache - In the implementation block
@property (retain) CFURLCredentialStorageRef _cfCreds;                                                   //@synthesize cfCreds=_cfCreds - In the implementation block
@property (retain) OpaqueCFHTTPCookieStorageRef _cfCookies;                                              //@synthesize cfCookies=_cfCookies - In the implementation block
@property (assign) unsigned long long _cachePolicy;                                                      //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign) double _timeoutInterval;                                                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (copy) NSDictionary * _proxySettings;                                                          //@synthesize proxySettings=_proxySettings - In the implementation block
@property (assign) char _proxyHandshakePending;                                                          //@synthesize proxyHandshakePending=_proxyHandshakePending - In the implementation block
@property (copy) NSDictionary * _sslSettings;                                                            //@synthesize sslSettings=_sslSettings - In the implementation block
@property (assign) char _shouldPipelineHTTP;                                                             //@synthesize shouldPipelineHTTP=_shouldPipelineHTTP - In the implementation block
@property (assign) char _shouldUsePipelineHeuristics;                                                    //@synthesize shouldUsePipelineHeuristics=_shouldUsePipelineHeuristics - In the implementation block
@property (assign) char _shouldSkipPipelineProbe;                                                        //@synthesize shouldSkipPipelineProbe=_shouldSkipPipelineProbe - In the implementation block
@property (assign) char _shouldHandleCookies;                                                            //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (assign) int _cookieAcceptPolicy;                                                              //@synthesize cookieAcceptPolicy=_cookieAcceptPolicy - In the implementation block
@property (assign) char _preventsIdleSystemSleep;                                                        //@synthesize preventsIdleSystemSleep=_preventsIdleSystemSleep - In the implementation block
@property (copy) NSArray * _contentDispositionFallbackArray;                                             //@synthesize contentDispositionFallbackArray=_contentDispositionFallbackArray - In the implementation block
@property (assign) char _allowsCellular;                                                                 //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign) int _networkServiceType;                                                              //@synthesize networkServiceType=_networkServiceType - In the implementation block
@property (assign,nonatomic) unsigned _qos;                                                              //@synthesize qos=_qos - In the implementation block
@property (retain) NSObject*<OS_voucher> _voucher;                                                       //@synthesize voucher=_voucher - In the implementation block
@property (assign) char _prohibitAuthUI;                                                                 //@synthesize prohibitAuthUI=_prohibitAuthUI - In the implementation block
@property (assign) char _strictContentLength;                                                            //@synthesize strictContentLength=_strictContentLength - In the implementation block
@property (assign) long long _suspensionThreshhold;                                                      //@synthesize suspensionThreshhold=_suspensionThreshhold - In the implementation block
@property (copy) NSString * _boundInterfaceIdentifier;                                                   //@synthesize boundInterfaceIdentifier=_boundInterfaceIdentifier - In the implementation block
@property (assign) char _disallowCellular;                                                               //@synthesize disallowCellular=_disallowCellular - In the implementation block
@property (assign) int _allowsExpensiveOverride;                                                         //@synthesize allowsExpensiveOverride=_allowsExpensiveOverride - In the implementation block
@property (assign) int _allowsConstrainedOverride;                                                       //@synthesize allowsConstrainedOverride=_allowsConstrainedOverride - In the implementation block
@property (assign) int _allowsCellularOverride;                                                          //@synthesize allowsCellularOverride=_allowsCellularOverride - In the implementation block
@property (assign) char _assumesHTTP3Capable;                                                            //@synthesize assumesHTTP3Capable=_assumesHTTP3Capable - In the implementation block
@property (assign) unsigned long long _allowedProtocolTypes;                                             //@synthesize allowedProtocolTypes=_allowedProtocolTypes - In the implementation block
@property (assign) long long _requestPriority;                                                           //@synthesize requestPriority=_requestPriority - In the implementation block
@property (assign) long long _expectedWorkload;                                                          //@synthesize expectedWorkload=_expectedWorkload - In the implementation block
@property (assign) double _timeWindowDelay;                                                              //@synthesize timeWindowDelay=_timeWindowDelay - In the implementation block
@property (assign) double _timeWindowDuration;                                                           //@synthesize timeWindowDuration=_timeWindowDuration - In the implementation block
@property (copy) NSUUID * _uniqueIdentifier;                                                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign) unsigned _powerAssertion;                                                             //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (assign) unsigned _darkWakePowerAssertion;                                                     //@synthesize darkWakePowerAssertion=_darkWakePowerAssertion - In the implementation block
@property (setter=_setConnectionIsCellular:) char _connectionIsCellular;                                 //@synthesize connectionIsCellular=_connectionIsCellular - In the implementation block
@property (assign) char _connectionIsCompanionLink;                                                      //@synthesize connectionIsCompanionLink=_connectionIsCompanionLink - In the implementation block
@property (assign,nonatomic) id _protocolForTask;                                                        //@synthesize protocolForTask=_protocolForTask - In the implementation block
@property (copy) NSURLSessionTaskHTTPAuthenticator * authenticator;                                      //@synthesize authenticator=_authenticator - In the implementation block
@property (assign) char _authenticatorConfiguredViaTaskProperty;                                         //@synthesize authenticatorConfiguredViaTaskProperty=_authenticatorConfiguredViaTaskProperty - In the implementation block
@property (nonatomic,retain) NSDictionary * _dependencyInfo;                                             //@synthesize dependencyInfo_ivar=_dependencyInfo_ivar - In the implementation block
@property (copy) NSDictionary * _DuetActivityProperties;                                                 //@synthesize DuetActivityProperties=_DuetActivityProperties - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskDependencyTree * dependencyTree;                            //@synthesize dependencyTree=_dependencyTree - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskDependency * taskDependency;                                //@synthesize taskDependency=_taskDependency - In the implementation block
@property (nonatomic,retain) NSURL * _backgroundPublishingURL;                                           //@synthesize backgroundPublishingURL=_backgroundPublishingURL - In the implementation block
@property (assign) char _extractorFinishedDecoding;                                                      //@synthesize extractorFinishedDecoding=_extractorFinishedDecoding - In the implementation block
@property (assign) char _extractorPreparedForExtraction;                                                 //@synthesize extractorPreparedForExtraction=_extractorPreparedForExtraction - In the implementation block
@property (assign) long long _countOfPendingBytesReceivedEncoded;                                        //@synthesize _countOfPendingBytesReceivedEncoded=__countOfPendingBytesReceivedEncoded - In the implementation block
@property (assign,nonatomic) char _preconnect;                                                           //@synthesize preconnect=_preconnect - In the implementation block
@property (nonatomic,readonly) char _isAVAssetTask; 
@property (retain) NSObject*<OS_nw_activity> _private_nw_activity;                                       //@synthesize private_nw_activity=_private_nw_activity - In the implementation block
@property (retain) __CFN_TaskMetrics * _metrics;                                                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy) id _httpConnectionInfoCompletionBlock;                                        //@synthesize httpConnectionInfoCompletionBlock=_httpConnectionInfoCompletionBlock - In the implementation block
@property (nonatomic,copy) NSURLSessionEffectiveConfiguration * _effectiveConfiguration;                 //@synthesize effectiveConfiguration=_effectiveConfiguration - In the implementation block
@property (retain) NSObject*<OS_nw_activity> _nw_activity;                                               //@synthesize nw_activity=_nw_activity - In the implementation block
@property (assign) long long _priority; 
@property (assign) double _loadingPriority; 
@property (assign) long long _bytesPerSecondLimit;                                                       //@synthesize bytesPerSecondLimitValue=_bytesPerSecondLimitValue - In the implementation block
@property (assign,nonatomic) unsigned long long _expectedProgressTarget;                                 //@synthesize expectedProgressTargetValue=_expectedProgressTargetValue - In the implementation block
@property (assign) double _timeoutIntervalForResource;                                                   //@synthesize timeoutIntervalForResource_ivar=_timeoutIntervalForResource_ivar - In the implementation block
@property (copy) NSString * _storagePartitionIdentifier;                                                 //@synthesize storagePartitionIdentifier=_storagePartitionIdentifier - In the implementation block
@property (retain) NSURL * _siteForCookies;                                                              //@synthesize siteForCookies=_siteForCookies - In the implementation block
@property (assign) char _isTopLevelNavigation;                                                           //@synthesize isTopLevelNavigation=_isTopLevelNavigation - In the implementation block
@property (copy) NSString * _pathToDownloadTaskFile;                                                     //@synthesize pathToDownloadTaskFile=_pathToDownloadTaskFile - In the implementation block
@property (nonatomic,retain) NSDictionary * _trailers;                                                   //@synthesize trailers=_trailers - In the implementation block
@property (copy) NSData * _TCPConnectionMetadata;                                                        //@synthesize _TCPConnectionMetadata=__TCPConnectionMetadata - In the implementation block
@property (assign) unsigned short _TLSMinimumSupportedProtocolVersion;                                   //@synthesize _TLSMinimumSupportedProtocolVersion=__TLSMinimumSupportedProtocolVersion - In the implementation block
@property (assign) unsigned short _TLSMaximumSupportedProtocolVersion;                                   //@synthesize _TLSMaximumSupportedProtocolVersion=__TLSMaximumSupportedProtocolVersion - In the implementation block
@property (readonly) unsigned _TLSNegotiatedCipherSuite;                                                 //@synthesize TLSNegotiatedCipherSuite=_TLSNegotiatedCipherSuite - In the implementation block
@property (assign,nonatomic) char _allowsQUIC;                                                           //@synthesize allowsQUIC=_allowsQUIC - In the implementation block
@property (setter=set_extractor:,nonatomic,retain) id<SZExtractor> _extractor;                           //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) char _hasSZExtractor;                                                       //@synthesize hasSZExtractor=_hasSZExtractor - In the implementation block
@property (assign,nonatomic) char _doesSZExtractorConsumeExtractedData;                                  //@synthesize doesSZExtractorConsumeExtractedData=_doesSZExtractorConsumeExtractedData - In the implementation block
@property (setter=_setAppleIDContext:,copy) id<NSURLSessionAppleIDContext> _appleIDContext;              //@synthesize appleIDContext=_appleIDContext - In the implementation block
@property (nonatomic,retain) NSURL * _publishingURL;                                                     //@synthesize publishingURL=_publishingURL - In the implementation block
@property (assign) long long _countOfBytesReceivedEncoded;                                               //@synthesize _countOfBytesReceivedEncoded=__countOfBytesReceivedEncoded - In the implementation block
@property (nonatomic,copy) NSString * _APSRelayTopic;                                                    //@synthesize APSRelayTopic=_APSRelayTopic - In the implementation block
@property (assign,nonatomic) long long _discretionaryOverride;                                           //@synthesize discretionaryOverride=_discretionaryOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> _hostOverride;                                    //@synthesize hostOverride=_hostOverride - In the implementation block
@property (nonatomic,copy) id _cookieTransformCallback;                                                  //@synthesize cookieTransformCallback=_cookieTransformCallback - In the implementation block
@property (nonatomic,readonly) NSArray * _resolvedCNAMEChain;                                            //@synthesize resolvedCNAMEChain=_resolvedCNAMEChain - In the implementation block
@property (readonly) NSProgress * progress;                                                              //@synthesize progress=_progress - In the implementation block
@property (copy) NSDate * earliestBeginDate; 
@property (assign) long long countOfBytesClientExpectsToSend;                                            //@synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend - In the implementation block
@property (assign) long long countOfBytesClientExpectsToReceive;                                         //@synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive - In the implementation block
@property (copy) NSString * taskDescription;                                                             //@synthesize taskDescription=_taskDescription - In the implementation block
@property (assign) float priority; 
@property (assign) char prefersIncrementalDelivery; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(void)set_protocolForTask:(id)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(void)set_powerAssertion:(unsigned)arg1 ;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(const XCookieStorage*)_createXCookieStorage;
-(id)_protocolForTask;
-(char)_preventsAppSSO;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(char)arg2 ;
-(void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1 ;
-(void)_onqueue_expectedProgressTargetChanged;
-(void)_setConnectionCacheKey:(HTTPConnectionCacheKey*)arg1 ;
-(char)_needSendingMetrics;
-(void)_didSendMetrics;
-(void)_onqueue_releasePowerAsssertion;
-(NSURL *)currentRequest_URL;
-(char)_proxyHandshakePending;
-(NSDictionary *)_proxySettings;
-(long long)computeAdjustedPoolPriority;
-(void)_finishProgressReporting;
-(void)set_extractorFinishedDecoding:(char)arg1 ;
-(void)set_cachedSocketStreamProperties:(NSDictionary *)arg1 ;
-(void)setPrefersIncrementalDelivery:(char)arg1 ;
-(void)set_suspensionThreshhold:(long long)arg1 ;
-(char)_isTopLevelNavigation;
-(NSURL *)_siteForCookies;
-(int)_cookieAcceptPolicy;
-(NSString *)_storagePartitionIdentifier;
-(void)set_appSSOFallback:(char)arg1 ;
-(void)_withXURLCache:(/*^block*/id)arg1 ;
-(void)_consumePendingBytesReceivedEncoded;
-(long long)_suspensionThreshhold;
-(void)set_cachePolicy:(unsigned long long)arg1 ;
-(void)set_timeoutInterval:(double)arg1 ;
-(void)set_shouldPipelineHTTP:(char)arg1 ;
-(void)set_shouldUsePipelineHeuristics:(char)arg1 ;
-(void)set_shouldSkipPipelineProbe:(char)arg1 ;
-(void)set_shouldHandleCookies:(char)arg1 ;
-(void)set_cookieAcceptPolicy:(int)arg1 ;
-(void)set_preventsIdleSystemSleep:(char)arg1 ;
-(void)set_contentDispositionFallbackArray:(NSArray *)arg1 ;
-(void)set_allowsCellular:(char)arg1 ;
-(void)set_networkServiceType:(int)arg1 ;
-(void)set_proxySettings:(NSDictionary *)arg1 ;
-(NSDictionary *)_sslSettings;
-(void)set_sslSettings:(NSDictionary *)arg1 ;
-(void)_setExplicitStorageSession:(CFURLStorageSessionRef)arg1 ;
-(void)set_boundInterfaceIdentifier:(NSString *)arg1 ;
-(void)set_allowsCellularOverride:(int)arg1 ;
-(void)set_allowsConstrainedOverride:(int)arg1 ;
-(void)set_allowsExpensiveOverride:(int)arg1 ;
-(void)set_assumesHTTP3Capable:(char)arg1 ;
-(void)set_allowedProtocolTypes:(unsigned long long)arg1 ;
-(void)set_requestPriority:(long long)arg1 ;
-(void)set_expectedWorkload:(long long)arg1 ;
-(void)set_timeWindowDelay:(double)arg1 ;
-(void)set_timeWindowDuration:(double)arg1 ;
-(unsigned long long)_expectedProgressTarget;
-(char)_isAVAssetTask;
-(void)set_backgroundTransactionMetrics:(__CFN_TransactionMetrics *)arg1 ;
-(void)set_trailers:(NSDictionary *)arg1 ;
-(__CFN_TransactionMetrics *)_backgroundTransactionMetrics;
-(double)_loadingPriorityValue;
-(NSObject*<OS_nw_activity>)_private_nw_activity;
-(NSURL *)_publishingURL;
-(char)_authenticatorConfiguredViaTaskProperty;
-(id)_httpConnectionInfoCompletionBlock;
-(const CFSetRef)_getAuthenticatorStatusCodes;
-(const CFDictionaryRef)_copyATSState;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(const XCredentialStorage*)_createXCredentialStorage;
-(NSString *)_APSRelayTopic;
-(void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)_getAuthenticationHeadersForResponse:(CFURLResponseRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_shouldPipelineHTTP;
-(char)_shouldSkipPipelineProbe;
-(char)_shouldUsePipelineHeuristics;
-(unsigned long long)_allowedProtocolTypes;
-(char)_preventsSystemHTTPProxyAuthentication;
-(char)_prohibitAuthUI;
-(void)set_appleIDContextRedirect:(char)arg1 ;
-(void)set_resolvedCNAMEChain:(NSArray *)arg1 ;
-(char)prefersIncrementalDelivery;
-(void)set_proxyHandshakePending:(char)arg1 ;
-(char)_appleIDContextRedirect;
-(char)_appSSOFallback;
-(char)_strictContentLength;
-(char)_cacheOnly;
-(NSURL *)currentRequest_mainDocumentURL;
-(long long)_expectedWorkload;
-(int)_allowsExpensiveOverride;
-(int)_allowsConstrainedOverride;
-(int)_allowsCellularOverride;
-(id)initWithTaskGroup:(id)arg1 ;
-(NSDictionary *)_cachedSocketStreamProperties;
-(CFHSTSPolicyRef)_cfHSTS;
-(const CFURLCacheRef)_cfCache;
-(CFURLCredentialStorageRef)_cfCreds;
-(OpaqueCFHTTPCookieStorageRef)_cfCookies;
-(NSArray *)_contentDispositionFallbackArray;
-(unsigned)_darkWakePowerAssertion;
-(char)_connectionIsCompanionLink;
-(NSURLSessionTaskDependencyTree *)dependencyTree;
-(NSURLSessionTaskDependency *)taskDependency;
-(long long)_countOfPendingBytesReceivedEncoded;
-(unsigned)_TLSNegotiatedCipherSuite;
-(char)_allowsQUIC;
-(NSObject*<OS_nw_endpoint>)_hostOverride;
-(void)set_TLSNegotiatedCipherSuite:(unsigned)arg1 ;
-(void)setTaskDependency:(NSURLSessionTaskDependency *)arg1 ;
-(void)_completeUploadProgress;
-(void)set_countOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_countOfBytesReceivedEncoded:(long long)arg1 ;
-(void)set_priorityValue:(long long)arg1 ;
-(void)set_loadingPriorityValue:(double)arg1 ;
-(void)set_cacheOnly:(char)arg1 ;
-(void)set_cfHSTS:(CFHSTSPolicyRef)arg1 ;
-(void)set_cfCache:(const CFURLCacheRef)arg1 ;
-(void)set_cfCreds:(CFURLCredentialStorageRef)arg1 ;
-(void)set_cfCookies:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)set_qos:(unsigned)arg1 ;
-(void)set_voucher:(NSObject*<OS_voucher>)arg1 ;
-(void)set_prohibitAuthUI:(char)arg1 ;
-(void)set_strictContentLength:(char)arg1 ;
-(void)set_darkWakePowerAssertion:(unsigned)arg1 ;
-(void)_setConnectionIsCellular:(char)arg1 ;
-(void)set_connectionIsCompanionLink:(char)arg1 ;
-(void)set_dependencyInfo:(NSDictionary *)arg1 ;
-(void)setDependencyTree:(NSURLSessionTaskDependencyTree *)arg1 ;
-(void)set_allowsQUIC:(char)arg1 ;
-(void)set_httpConnectionInfoCompletionBlock:(id)arg1 ;
-(void)set_effectiveConfiguration:(NSURLSessionEffectiveConfiguration *)arg1 ;
-(void)set_private_nw_activity:(NSObject*<OS_nw_activity>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)resume;
-(long long)state;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSUUID *)_uniqueIdentifier;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)cancel;
-(void)suspend;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_voucher>)_voucher;
-(NSProgress *)progress;
-(long long)_priority;
-(unsigned)_qos;
-(NSURLResponse *)response;
-(void)setPriority:(float)arg1 ;
-(NSString *)_description;
-(float)priority;
-(NSDictionary *)_dependencyInfo;
-(__CFN_TaskMetrics *)_metrics;
-(NSURLSession *)session;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(unsigned long long)taskIdentifier;
-(NSURLRequest *)originalRequest;
-(char)_shouldHandleCookies;
-(void)set_nw_activity:(NSObject*<OS_nw_activity>)arg1 ;
-(void)set_APSRelayTopic:(NSString *)arg1 ;
-(NSObject*<OS_nw_activity>)_nw_activity;
-(double)_timeoutIntervalForResource;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(NSURLRequest *)currentRequest;
-(id)_timingData;
-(unsigned)_powerAssertion;
-(char)_disallowCellular;
-(long long)_requestPriority;
-(unsigned long long)_cachePolicy;
-(double)_timeoutInterval;
-(void)setTaskDescription:(NSString *)arg1 ;
-(char)_requiresSecureHTTPSProxyConnection;
-(long long)countOfBytesReceived;
-(long long)countOfBytesSent;
-(long long)_countOfBytesReceivedEncoded;
-(void)set_timeoutIntervalForResource:(double)arg1 ;
-(id)_incompleteTaskMetrics;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(void)set_requiresSecureHTTPSProxyConnection:(char)arg1 ;
-(void)set_preventsSystemHTTPProxyAuthentication:(char)arg1 ;
-(double)_timeWindowDuration;
-(int)_networkServiceType;
-(id)initWithTask:(id)arg1 ;
-(void)set_publishingURL:(NSURL *)arg1 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(NSString *)taskDescription;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(long long)countOfBytesExpectedToReceive;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(id<NSURLSessionAppleIDContext>)_appleIDContext;
-(void)_setAppleIDContext:(id)arg1 ;
-(id<SZExtractor>)_extractor;
-(id<__NSURLSessionTaskGroupForConfiguration>)_taskGroup;
-(NSString *)_boundInterfaceIdentifier;
-(char)_allowsCellular;
-(long long)_priorityValue;
-(void)set_pathToDownloadTaskFile:(NSString *)arg1 ;
-(NSString *)_pathToDownloadTaskFile;
-(NSArray *)_resolvedCNAMEChain;
-(void)set_cookieTransformCallback:(id)arg1 ;
-(void)_setExplicitCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)set_preconnect:(char)arg1 ;
-(void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_preconnect;
-(void)set_preventsAppSSO:(char)arg1 ;
-(void)set_shouldSkipPreferredClientCertificateLookup:(char)arg1 ;
-(id)_cookieTransformCallback;
-(void)set_siteForCookies:(NSURL *)arg1 ;
-(void)set_isTopLevelNavigation:(char)arg1 ;
-(char)_preventsIdleSystemSleep;
-(NSURLSessionEffectiveConfiguration *)_effectiveConfiguration;
-(NSData *)_TCPConnectionMetadata;
-(void)set_TCPConnectionMetadata:(NSData *)arg1 ;
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(void)setAuthenticator:(NSURLSessionTaskHTTPAuthenticator *)arg1 ;
-(NSURLSessionTaskHTTPAuthenticator *)authenticator;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(NSString *)_loggableDescription;
-(NSDate *)earliestBeginDate;
-(NSDictionary *)_trailers;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(long long)_bytesPerSecondLimit;
-(double)_loadingPriority;
-(void)set_priority:(long long)arg1 ;
-(void)set_bytesPerSecondLimit:(long long)arg1 ;
-(void)set_loadingPriority:(double)arg1 ;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(id)_incompleteCurrentTaskTransactionMetrics;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(char)_hasSZExtractor;
-(char)_extractorFinishedDecoding;
-(void)set_doesSZExtractorConsumeExtractedData:(char)arg1 ;
-(char)_doesSZExtractorConsumeExtractedData;
-(void)set_hasSZExtractor:(char)arg1 ;
-(void)set_extractor:(id<SZExtractor>)arg1 ;
-(void)set_legacySocketStreamProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)_legacySocketStreamProperties;
-(const CFDictionaryRef)_copySocketStreamProperties;
-(void)set_discretionaryOverride:(long long)arg1 ;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)set_expectedProgressTarget:(unsigned long long)arg1 ;
-(void)set_storagePartitionIdentifier:(NSString *)arg1 ;
-(void)set_uniqueIdentifier:(NSUUID *)arg1 ;
-(double)_timeWindowDelay;
-(void)set_DuetActivityProperties:(NSDictionary *)arg1 ;
-(NSURL *)_backgroundPublishingURL;
-(void)updateCurrentRequest:(id)arg1 ;
-(void)set_metrics:(__CFN_TaskMetrics *)arg1 ;
-(unsigned short)_TLSMaximumSupportedProtocolVersion;
-(unsigned short)_TLSMinimumSupportedProtocolVersion;
-(long long)countOfBytesClientExpectsToReceive;
-(long long)countOfBytesClientExpectsToSend;
-(char)_shouldSkipPreferredClientCertificateLookup;
-(char)_connectionIsCellular;
-(NSDictionary *)_DuetActivityProperties;
-(char)_extractorPreparedForExtraction;
-(void)set_extractorPreparedForExtraction:(char)arg1 ;
-(void)set_disallowCellular:(char)arg1 ;
-(void)_onqueue_adoptEffectiveConfiguration:(id)arg1 ;
-(void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2 ;
-(void)set_authenticatorConfiguredViaTaskProperty:(char)arg1 ;
-(void)set_backgroundPublishingURL:(NSURL *)arg1 ;
-(void)set_hostOverride:(NSObject*<OS_nw_endpoint>)arg1 ;
-(char)_assumesHTTP3Capable;
-(long long)_discretionaryOverride;
@end

