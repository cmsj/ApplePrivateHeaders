/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AOSKit/AOSKit-Structs.h>
@interface AOSUtilities : NSObject
+(id)makeAgentRequestWithAccount:(AOSAccountRef)arg1 type:(int)arg2 args:(id)arg3 callback:(AOSCallbackInfo*)arg4 maxRetries:(int)arg5 ;
+(void)addCallStackInfo:(id)arg1 toAccount:(AOSAccountRef)arg2 ;
+(char)validateURL:(id)arg1 forAccount:(AOSAccountRef)arg2 withInfo:(id)arg3 ;
+(id)mailPropsCache;
+(AOSTransactionC*)createTransactionWithResult:(void*)arg1 error:(CFErrorRef)arg2 callbackInfo:(AOSCallbackInfo*)arg3 ;
+(char)setValue:(id)arg1 forKey:(id)arg2 andAccount:(AOSAccountRef)arg3 ;
+(id)valueForKey:(id)arg1 andAccount:(AOSAccountRef)arg2 ;
+(void)setCachedSignUpSessionInfo:(id)arg1 ;
+(id)machineUDID;
+(id)cachedSignUpSessionInfo;
+(char)shouldPerformDeviceRetryForRequest:(id)arg1 ;
+(void)handleHSAErrorsForRequest:(id)arg1 withDSID:(id)arg2 andClientID:(id)arg3 ;
+(id)enteredPasswordFromAccount:(AOSAccountRef)arg1 ;
+(char)doesAppleIDNeedFixing:(id)arg1 ;
+(id)hashBTMMPassword:(id)arg1 usingAccountInfo:(id)arg2 ;
+(char)shouldUpdateAppleAccountForClientID:(id)arg1 ;
+(void)updateAppleAccountInfo:(id)arg1 forAccount:(AOSAccountRef)arg2 ;
+(id)aliasesForAccount:(AOSAccountRef)arg1 withInfo:(id)arg2 ;
+(char)iCloudExperimentalModeIsEnabled;
+(id)appleAccountInfoForAccount:(AOSAccountRef)arg1 ;
+(char)sessionLostKeychainAccess;
+(id)agentSessionInfo;
+(char)_isKnownDomain:(id)arg1 usingAccountInfo:(id)arg2 ;
+(char)_isValidChineseHostname:(id)arg1 ;
+(id)_payloadWithAccount:(AOSAccountRef)arg1 requestType:(int)arg2 requestArgs:(id)arg3 ;
+(char)_isTransactionExpectedForRequestType:(int)arg1 ;
+(id)aosErrorWithCode:(int)arg1 ;
+(void)_handleCompletionForRequestWithType:(int)arg1 result:(id)arg2 andAccount:(AOSAccountRef)arg3 ;
+(char)updateBTMMConfigForAccount:(AOSAccountRef)arg1 ;
+(char)currentUserIsAdmin;
+(id)namedPortForAPSEnvironment:(id)arg1 ;
+(char)_performProvisioningAction:(id)arg1 forRequest:(id)arg2 withDSID:(id)arg3 andClientID:(id)arg4 ;
+(char)_didLoadAppleAccountBundle;
+(char)_didLoadAccountsBundle;
+(char)_didLoadAOSAccountsBundle;
+(char)_areAppleAccountCallsAllowed;
+(id)_existingAppleAccountForAccount:(AOSAccountRef)arg1 ;
+(id)_cachedValidationStatusForDomain:(id)arg1 ;
+(void)_cacheValidationStatus:(id)arg1 forDomain:(id)arg2 ;
+(id)pushLock;
+(void)initialize;
+(char)isDaemon;
+(id)currentProcessName;
+(id)machineSerialNumber;
+(id)stringForRequestType:(int)arg1 ;
+(void)registerForPushNotifications;
+(id)dsidFromPushNotification:(id)arg1 ;
+(void)openICloudPrefsWithAction:(id)arg1 andParams:(id)arg2 ;
+(void)openIAPrefsForDSID:(id)arg1 withAction:(id)arg2 andParams:(id)arg3 ;
+(char)isPrimaryAccount:(AOSAccountRef)arg1 ;
+(id)clientIdentifierFromAccount:(AOSAccountRef)arg1 ;
+(id)adsidForAccount:(AOSAccountRef)arg1 usingInfo:(id)arg2 ;
+(id)notificationCenterLock;
+(char)executeBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 andLock:(id)arg4 ;
+(void)attemptDaemonShutdown;
+(int)checkKeychainAccess:(id*)arg1 ;
+(void)setAgentSessionInfo:(id)arg1 ;
+(id)payloadDescription:(id)arg1 ;
+(id)allDecodableClasses;
+(char)postNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(char)arg4 timeout:(double)arg5 ;
+(id)retrieveOTPHeadersForDSID:(id)arg1 ;
+(id)generateSignUpSessionInfoForClient:(id)arg1 ;
+(id)currentProcessIdentifier;
+(id)xmlStringFromDictionary:(id)arg1 ;
+(id)currentComputerName;
@end

