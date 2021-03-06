/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSURLSessionEffectiveConfiguration_Base.h>

@class NSDictionary, NSHTTPCookieStorage, NSURLCache, NSURLCredentialStorage, NSArray, NSSet, NSString, NSData, NSNumber, NSURL;

@interface NSURLSessionEffectiveConfiguration : __NSURLSessionEffectiveConfiguration_Base

@property (assign) double _connectionCacheCellPurgeTimeout; 
@property (copy) NSDictionary * _socketStreamProperties; 
@property (retain) NSHTTPCookieStorage * HTTPCookieStorage; 
@property (retain) NSURLCache * URLCache; 
@property (copy) NSDictionary * HTTPAdditionalHeaders; 
@property (retain) NSURLCredentialStorage * URLCredentialStorage; 
@property (copy) NSArray * protocolClasses; 
@property (assign) double timeoutIntervalForResource; 
@property (assign) char allowsCellularAccess; 
@property (getter=isDiscretionary) char discretionary; 
@property (assign) char shouldUseExtendedBackgroundIdleMode; 
@property (assign) char waitsForConnectivity; 
@property (assign) char allowsExpensiveNetworkAccess; 
@property (assign) char allowsConstrainedNetworkAccess; 
@property (assign) unsigned long long _forcedNetworkServiceType; 
@property (copy) NSSet * _authenticatorStatusCodes; 
@property (copy) NSString * _companionAppBundleIdentifier; 
@property (copy) NSString * _tcpConnectionPoolName; 
@property (assign) char _forcesNewConnections; 
@property (assign) char _preventsIdleSleepOnceConnected; 
@property (assign) char _requiresPowerPluggedIn; 
@property (assign) char _shouldSkipPreferredClientCertificateLookup; 
@property (copy) NSString * _sourceApplicationBundleIdentifier; 
@property (copy) NSString * _sourceApplicationSecondaryIdentifier; 
@property (assign) unsigned long long _TCPAdaptiveReadTimeout; 
@property (assign) unsigned long long _TCPAdaptiveWriteTimeout; 
@property (assign) char _allowsExpensiveAccess; 
@property (assign) char _allowsPowerNapScheduling; 
@property (copy) id<NSURLSessionAppleIDContext> _appleIDContext; 
@property (copy) NSData * _sourceApplicationAuditTokenData; 
@property (assign) long long _timingDataOptions; 
@property (assign) char _allowsIndefiniteConnections; 
@property (assign) char _allowsMultipathTCP; 
@property (assign) char _allowsResponseMonitoringDuringBodyTranmission; 
@property (assign) char _allowsTCPFastOpen; 
@property (assign) char _allowsTLSSessionTickets; 
@property (assign) char _onBehalfOfPairedDevice; 
@property (assign) unsigned long long _customReadBufferSize; 
@property (assign) double _customReadBufferTimeout; 
@property (assign) char _preventsSystemHTTPProxyAuthentication; 
@property (assign) char _allowsTLSSessionResumption; 
@property (assign) char _requiresSustainedDataDelivery; 
@property (assign) char _duetPreauthorized; 
@property (assign) char _clientIsNotExplicitlyDiscretionary; 
@property (copy) NSString * _tlsTrustPinningPolicyName; 
@property (copy) NSSet * _suppressedAutoAddedHTTPHeaders; 
@property (assign) char _requiresSecureHTTPSProxyConnection; 
@property (assign) long long _expiredDNSBehavior; 
@property (assign) char _alwaysPerformDefaultTrustEvaluation; 
@property (assign) char _preventsAppSSO; 
@property (assign) char _allowsConstrainedNetworkAccess; 
@property (assign) unsigned long long _multipathAlternatePort; 
@property (assign) char _reportsDataStalls; 
@property (assign) char _allowsWCA; 
@property (copy) NSNumber * _maximumWatchCellularTransferSize; 
@property (assign) char _respectsAllowsCellularAccessForDiscretionaryTasks; 
@property (copy) NSString * _connectionPoolName; 
@property (copy) NSURL * _directoryForDownloadedFiles; 
+(id)immutableEffectiveConfigurationFromConfig:(id)arg1 ;
+(id)immutableEffectiveConfigurationFromSessionConfig:(id)arg1 ;
-(double)_connectionCacheCellPurgeTimeout;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)set_connectionCacheCellPurgeTimeout:(double)arg1 ;
-(void)set_socketStreamProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)_socketStreamProperties;
@end

