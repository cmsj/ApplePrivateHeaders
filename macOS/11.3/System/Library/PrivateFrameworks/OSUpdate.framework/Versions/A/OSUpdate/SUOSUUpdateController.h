/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSUpdate.framework/Versions/A/OSUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUOSUServiceClientProtocol.h>

@class NSXPCConnection, NSLock, SUOSUScheduler, SUPowerAssertionManager, NSMutableArray, SUOSUAuthenticationManager, LAContext, NSData;

@interface SUOSUUpdateController : NSObject <SUOSUServiceClientProtocol> {

	char _authorizedForSoftwareInstall;
	/*^block*/id _customInterruptionHandler;
	NSXPCConnection* _legacyServiceConnection;
	NSLock* _legacyServiceConnectionLock;
	NSXPCConnection* _serviceConnection;
	NSLock* _serviceConnectionLock;
	SUOSUScheduler* _scheduler;
	SUPowerAssertionManager* _powerAssertionManager;
	NSMutableArray* _downloadProgressHandlers;
	NSMutableArray* _downloadCompletionHandlers;
	SUOSUAuthenticationManager* _authenticationManager;
	LAContext* _localAuthenticationContext;
	NSData* _clientExternalizedLAContext;

}

@property (retain) NSXPCConnection * legacyServiceConnection;                       //@synthesize legacyServiceConnection=_legacyServiceConnection - In the implementation block
@property (nonatomic,retain) NSLock * legacyServiceConnectionLock;                  //@synthesize legacyServiceConnectionLock=_legacyServiceConnectionLock - In the implementation block
@property (retain) NSXPCConnection * serviceConnection;                             //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (assign) char authorizedForSoftwareInstall;                               //@synthesize authorizedForSoftwareInstall=_authorizedForSoftwareInstall - In the implementation block
@property (nonatomic,retain) NSLock * serviceConnectionLock;                        //@synthesize serviceConnectionLock=_serviceConnectionLock - In the implementation block
@property (retain) SUOSUScheduler * scheduler;                                      //@synthesize scheduler=_scheduler - In the implementation block
@property (retain) SUPowerAssertionManager * powerAssertionManager;                 //@synthesize powerAssertionManager=_powerAssertionManager - In the implementation block
@property (retain) NSMutableArray * downloadProgressHandlers;                       //@synthesize downloadProgressHandlers=_downloadProgressHandlers - In the implementation block
@property (retain) NSMutableArray * downloadCompletionHandlers;                     //@synthesize downloadCompletionHandlers=_downloadCompletionHandlers - In the implementation block
@property (retain) SUOSUAuthenticationManager * authenticationManager;              //@synthesize authenticationManager=_authenticationManager - In the implementation block
@property (retain) LAContext * localAuthenticationContext;                          //@synthesize localAuthenticationContext=_localAuthenticationContext - In the implementation block
@property (retain) NSData * clientExternalizedLAContext;                            //@synthesize clientExternalizedLAContext=_clientExternalizedLAContext - In the implementation block
@property (copy) id customInterruptionHandler;                                      //@synthesize customInterruptionHandler=_customInterruptionHandler - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)updateStatus;
-(id)proxy;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(id)_serviceConnection;
-(SUOSUScheduler *)scheduler;
-(void)setScheduler:(SUOSUScheduler *)arg1 ;
-(SUPowerAssertionManager *)powerAssertionManager;
-(id)mobileSoftwareUpdateProductsToApplyAfterLogout;
-(void)combinedStatusForUpdatesWithProductKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)_authorizeForSoftwareInstall;
-(char)applyMobileSoftwareUpdate;
-(id)_legacyServiceConnection;
-(void)setPowerAssertionManager:(SUPowerAssertionManager *)arg1 ;
-(char)osUpdateDownloadedAndPreparedForProduct:(id)arg1 ;
-(void)disarmLaterObserver;
-(void)restartCountdownDownloadProgress:(float)arg1 status:(id)arg2 ;
-(void)restartCountdownDownloadFinishedWithError:(id)arg1 ;
-(void)armObserverWithMode:(unsigned long long)arg1 ;
-(void)queueAutoUpdatesForLater;
-(unsigned long long)currentLoginCredentialPolicy;
-(SUOSUAuthenticationManager *)authenticationManager;
-(void)setLastCollectedCredentialDate:(id)arg1 ;
-(void)setContextUserID:(id)arg1 ;
-(char)setClientExternalizedLocalAuthenticationContext:(id)arg1 ;
-(void)postMajorOSUpdateMDMRequestedNotification;
-(void)mdmUpdateStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)startInstallingMDMMajorOSUpdateWithBundleId:(id)arg1 orVersion:(id)arg2 ;
-(void)startInstallingUpdatesForKeys:(id)arg1 withOptions:(id)arg2 ;
-(void)postDoItLaterOtherUsersLoggedInNotification;
-(void)startInstallingDoItLaterUpdates;
-(void)postDoItLaterUpdatesFailedNotificationRestartRequired:(char)arg1 offerLater:(char)arg2 ;
-(void)postAndProceedWithAutoUpdateNotification:(/*^block*/id)arg1 ;
-(void)getLaterStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setMobileSoftwareUpdatesToInstallLater;
-(void)restrictMobileSoftwareUpdateToFullReplacements:(char)arg1 ;
-(void)setExternalizedLocalAuthenticationContext:(id)arg1 ;
-(void)getUpdateStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)postMDMRequestedNotificationToAllLoggedInUsers;
-(void)prepareRosettaUpdate;
-(void)queueAutoUpdatesForLaterWithCompletion:(/*^block*/id)arg1 ;
-(void)setAuthenticationManager:(SUOSUAuthenticationManager *)arg1 ;
-(void)setClientExternalizedLocalAuthenticationContextAsync:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSLock *)serviceConnectionLock;
-(id)customInterruptionHandler;
-(NSLock *)legacyServiceConnectionLock;
-(NSXPCConnection *)legacyServiceConnection;
-(void)setLegacyServiceConnection:(NSXPCConnection *)arg1 ;
-(char)authorizedForSoftwareInstall;
-(void)setAuthorizedForSoftwareInstall:(char)arg1 ;
-(id)legacyProxy;
-(void)takeInstallNotificationsOfType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)productKeysToAutomaticallyInstallLaterWithReply:(/*^block*/id)arg1 ;
-(void)adminDeferredAvailableUpdatesWithReply:(/*^block*/id)arg1 ;
-(id)fetchMajorOSInfoForProductKey:(id)arg1 ;
-(id)synchronousProxy;
-(id)synchronousScanForAllMobileSoftwareUpdatesInBackground:(char)arg1 withError:(id*)arg2 ;
-(NSMutableArray *)downloadProgressHandlers;
-(NSMutableArray *)downloadCompletionHandlers;
-(char)synchronousDownloadAndPrepareMobileSoftwareUpdate:(id)arg1 username:(id)arg2 password:(id)arg3 inBackground:(char)arg4 mdmInitiated:(char)arg5 progressCompletion:(/*^block*/id)arg6 withError:(id*)arg7 ;
-(char)commitStashWithDescriptor:(id)arg1 withError:(id*)arg2 ;
-(char)commitStashOnlyForDescriptor:(id)arg1 withError:(id*)arg2 ;
-(char)createAndPersistStashForDescriptor:(id)arg1 withError:(id*)arg2 ;
-(void)_setIdleSleepPowerAssertion;
-(char)queueUpdatesForPostLogoutInstallWithProductKeys:(id)arg1 descriptors:(id)arg2 nowIsLater:(char)arg3 restartingNow:(char)arg4 forceRestart:(char)arg5 ;
-(char)queueUpdatesForPostLogoutInstallWithProductKeys:(id)arg1 descriptors:(id)arg2 options:(id)arg3 ;
-(char)queueUpdatesForPostLogoutInstallWithProductKeys:(id)arg1 descriptors:(id)arg2 overrides:(id)arg3 options:(id)arg4 ;
-(void)_cancelPowerAssertion;
-(void)_stashLoginCredentialsForUpdates;
-(void)setClientExternalizedLAContext:(NSData *)arg1 ;
-(LAContext *)localAuthenticationContext;
-(void)preparationRequiredForLegacyProductKeys:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)availableLegacyUpdates;
-(id)availableMobileSoftwareUpdatesWithoutScan;
-(char)initiateBackgroundScanWithError:(id*)arg1 ;
-(void)scanForAllMobileSoftwareUpdatesInBackground:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)synchronousScanForAllMobileSoftwareUpdatesInBackground:(char)arg1 mdmInitiated:(char)arg2 requestedProductMarketingVersion:(id)arg3 withError:(id*)arg4 ;
-(id)allAvailableMDMUpdates;
-(void)downloadAndPrepareMobileSoftwareUpdate:(id)arg1 inBackground:(char)arg2 progressCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(char)synchronousDownloadAndPrepareMobileSoftwareUpdate:(id)arg1 inBackground:(char)arg2 mdmInitiated:(char)arg3 progressCompletion:(/*^block*/id)arg4 ;
-(char)synchronousDownloadAndPrepareMobileSoftwareUpdate:(id)arg1 inBackground:(char)arg2 mdmInitiated:(char)arg3 progressCompletion:(/*^block*/id)arg4 withError:(id*)arg5 ;
-(char)cancelMobileSoftwareUpdates;
-(char)mobileSoftwareUpdateInProgressForProduct:(id)arg1 ;
-(char)mobileSoftwareUpdateForegroundOperationInProgressForProduct:(id)arg1 ;
-(char)mobileSoftwareUpdateInProgress;
-(char)commitStashWithProduct:(id)arg1 withError:(id*)arg2 ;
-(char)commitStashOnlyWithProduct:(id)arg1 withError:(id*)arg2 ;
-(char)createAndPersistStashWithProduct:(id)arg1 withError:(id*)arg2 ;
-(char)commitStashOnlyWithDescriptor:(id)arg1 withError:(id*)arg2 ;
-(void)flushMobileSoftwareUpdateProductsToApplyAtLogout;
-(char)queueUpdatesForPostLogoutInstall:(id)arg1 nowIsLater:(char)arg2 restartingNow:(char)arg3 forceRestart:(char)arg4 ;
-(char)queueUpdatesForPostLogoutInstallWithProductKeys:(id)arg1 descriptors:(id)arg2 nowIsLater:(char)arg3 restartingNow:(char)arg4 ;
-(char)isSchedulerArmedForLater;
-(id)clientExternalizedLocalAuthenticationContextDaemon;
-(void)setExternalizedLocalAuthenticationContext:(id)arg1 withUserID:(id)arg2 ;
-(char)evaluateAndSetLocalAuthenticationContext;
-(void)triggerBackgroundActionsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAllMobileSoftwareUpdatesFromInstallLater;
-(id)mobileSoftwareUpdatesToInstallLater;
-(id)installedUpdatesJournal;
-(id)softwareUpdateServerConfiguration;
-(char)_shouldStashLoginCredentialsForUpdates:(id)arg1 ;
-(char)requestMDMInstallWithProductKeys:(id)arg1 options:(id)arg2 withError:(id*)arg3 ;
-(char)requestMDMMajorOSDownloadAndUpdateWithBundleID:(id)arg1 orVersion:(id)arg2 withError:(id*)arg3 ;
-(id)_descriptorsFromProducts:(id)arg1 ;
-(void)setCustomInterruptionHandler:(id)arg1 ;
-(void)setLegacyServiceConnectionLock:(NSLock *)arg1 ;
-(void)setServiceConnectionLock:(NSLock *)arg1 ;
-(void)setDownloadProgressHandlers:(NSMutableArray *)arg1 ;
-(void)setDownloadCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setLocalAuthenticationContext:(LAContext *)arg1 ;
-(NSData *)clientExternalizedLAContext;
@end

