/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCTestingContext.h>
#import <libobjc.A.dylib/FCCKDatabaseEncryptionDelegate.h>
#import <libobjc.A.dylib/FCAssetKeyManagerDelegate.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCContentContext.h>
#import <libobjc.A.dylib/FCPrivateDataContext.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@protocol FCAppActivityMonitor, FCNewsletterManager, FCOfflineArticleManagerType, FCPurchaseProviderType, FCPurchaseManagerType, FCBundleSubscriptionManagerType, FCCurrentIssuesChecker, FCPaidAccessCheckerType, FCFavoritesPersonalizer, FCPersonalizedGrouping, FCLocalRegionManager, FCBackgroundTaskable, FCPPTContext, FCContentContext, FCPrivateDataContext;
@class NSString, FCAssetManager, FCArticleController, FCTagController, FCFlintResourceManager, FCNetworkBehaviorMonitor, NSURL, FCIssueReadingHistory, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCAudioPlaylist, FCSubscriptionList, FCUserInfo, FCTagSettings, FCSubscriptionController, FCFeedManager, FCClientEndpointConnection, FCCommandQueue, FCNewsletterEndpointConnection, FCNotificationsEndpointConnection, FCNotificationController, FCPurchaseController, FCTranslationManager, FCLocalAreasManager, FCUserVectorManager, FCAccessChecker;

@interface FCCloudContext : NSObject <FCTestingContext, FCCKDatabaseEncryptionDelegate, FCAssetKeyManagerDelegate, FCBundleSubscriptionChangeObserver, FCContentContext, FCPrivateDataContext, FCCacheFlushing> {

	char _deviceIsiPad;
	FCSubscriptionController* _subscriptionController;
	FCFeedManager* _feedManager;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCAppActivityMonitor> _appActivityMonitor;
	FCClientEndpointConnection* _endpointConnection;
	FCCommandQueue* _endpointCommandQueue;
	id<FCNewsletterManager> _newsletterManager;
	FCNewsletterEndpointConnection* _newsletterEndpointConnection;
	FCCommandQueue* _newsletterEndpointCommandQueue;
	FCNotificationsEndpointConnection* _notificationsEndpointConnection;
	FCCommandQueue* _notificationsEndpointCommandQueue;
	FCNotificationController* _notificationController;
	id<FCOfflineArticleManagerType> _offlineArticleManager;
	FCPurchaseController* _purchaseController;
	id<FCPurchaseProviderType> _purchaseProvider;
	id<FCPurchaseManagerType> _purchaseManager;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	FCTranslationManager* _translationManager;
	FCLocalAreasManager* _localAreasManager;
	FCUserVectorManager* _userVectorManager;
	id<FCCurrentIssuesChecker> _currentIssuesChecker;
	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCAccessChecker* _issueAccessChecker;
	FCAccessChecker* _articleAccessChecker;
	id<FCFavoritesPersonalizer> _favoritesPersonalizer;
	id<FCPersonalizedGrouping> _groupingPersonalizer;
	id<FCLocalRegionManager> _localRegionProvider;
	id<FCBackgroundTaskable> _backgroundTaskable;
	/*^block*/id _offlineArticleManagerProvider;
	id<FCPPTContext> _pptContext;
	id<FCContentContext> _contentContext;
	id<FCPrivateDataContext> _privateDataContext;
	long long _options;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                                                      //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) id<FCAppActivityMonitor> appActivityMonitor;                                              //@synthesize appActivityMonitor=_appActivityMonitor - In the implementation block
@property (nonatomic,retain) id<FCPrivateDataContext> privateDataContext;                                              //@synthesize privateDataContext=_privateDataContext - In the implementation block
@property (nonatomic,retain) FCTranslationManager * translationManager;                                                //@synthesize translationManager=_translationManager - In the implementation block
@property (nonatomic,retain) FCLocalAreasManager * localAreasManager;                                                  //@synthesize localAreasManager=_localAreasManager - In the implementation block
@property (nonatomic,retain) FCUserVectorManager * userVectorManager;                                                  //@synthesize userVectorManager=_userVectorManager - In the implementation block
@property (nonatomic,retain) id<FCCurrentIssuesChecker> currentIssuesChecker;                                          //@synthesize currentIssuesChecker=_currentIssuesChecker - In the implementation block
@property (nonatomic,retain) id<FCPaidAccessCheckerType> paidAccessChecker;                                            //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (nonatomic,retain) FCAccessChecker * issueAccessChecker;                                                     //@synthesize issueAccessChecker=_issueAccessChecker - In the implementation block
@property (nonatomic,retain) FCAccessChecker * articleAccessChecker;                                                   //@synthesize articleAccessChecker=_articleAccessChecker - In the implementation block
@property (assign,nonatomic) long long options;                                                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FCSubscriptionController * subscriptionController;                                      //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,readonly) FCNotificationController * notificationController;                                      //@synthesize notificationController=_notificationController - In the implementation block
@property (nonatomic,readonly) FCPurchaseController * purchaseController;                                              //@synthesize purchaseController=_purchaseController - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider;                                            //@synthesize purchaseProvider=_purchaseProvider - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseManagerType> purchaseManager;                                              //@synthesize purchaseManager=_purchaseManager - In the implementation block
@property (nonatomic,readonly) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;                          //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,readonly) FCFeedManager * feedManager;                                                            //@synthesize feedManager=_feedManager - In the implementation block
@property (nonatomic,readonly) id<FCFeedPersonalizing> feedPersonalizer; 
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;                                      //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,retain) id<FCFavoritesPersonalizer> favoritesPersonalizer;                                        //@synthesize favoritesPersonalizer=_favoritesPersonalizer - In the implementation block
@property (nonatomic,retain) id<FCPersonalizedGrouping> groupingPersonalizer;                                          //@synthesize groupingPersonalizer=_groupingPersonalizer - In the implementation block
@property (nonatomic,retain) id<FCLocalRegionManager> localRegionProvider;                                             //@synthesize localRegionProvider=_localRegionProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FCBackgroundTaskable> backgroundTaskable;                                       //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,copy) id offlineArticleManagerProvider;                                                           //@synthesize offlineArticleManagerProvider=_offlineArticleManagerProvider - In the implementation block
@property (nonatomic,readonly) id<FCOfflineArticleManagerType> offlineArticleManager;                                  //@synthesize offlineArticleManager=_offlineArticleManager - In the implementation block
@property (nonatomic,readonly) id<FCNewsletterManager> newsletterManager;                                              //@synthesize newsletterManager=_newsletterManager - In the implementation block
@property (nonatomic,readonly) char deviceIsiPad;                                                                      //@synthesize deviceIsiPad=_deviceIsiPad - In the implementation block
@property (nonatomic,readonly) id<FCPPTContext> pptContext;                                                            //@synthesize pptContext=_pptContext - In the implementation block
@property (nonatomic,readonly) char isPrivateDataEncryptionEnabled; 
@property (nonatomic,readonly) char isPrivateDatabaseStartingUp; 
@property (nonatomic,readonly) char isPrivateDatabaseOnline; 
@property (nonatomic,readonly) char isPrivateDatabaseTemporarilySuspended; 
@property (nonatomic,readonly) FCClientEndpointConnection * endpointConnection;                                        //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,readonly) FCNotificationsEndpointConnection * notificationsEndpointConnection;                    //@synthesize notificationsEndpointConnection=_notificationsEndpointConnection - In the implementation block
@property (nonatomic,readonly) FCNewsletterEndpointConnection * newsletterEndpointConnection;                          //@synthesize newsletterEndpointConnection=_newsletterEndpointConnection - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * endpointCommandQueue;                                                  //@synthesize endpointCommandQueue=_endpointCommandQueue - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * notificationsEndpointCommandQueue;                                     //@synthesize notificationsEndpointCommandQueue=_notificationsEndpointCommandQueue - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * newsletterEndpointCommandQueue;                                        //@synthesize newsletterEndpointCommandQueue=_newsletterEndpointCommandQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,copy,readonly) NSString * supportedContentStoreFrontID; 
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager; 
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager; 
@property (nonatomic,readonly) FCAssetManager * assetManager; 
@property (nonatomic,readonly) id<FCAVAssetPrewarming> avAssetPrewarmer; 
@property (nonatomic,readonly) FCArticleController * articleController; 
@property (nonatomic,readonly) FCTagController * tagController; 
@property (nonatomic,readonly) FCFlintResourceManager * flintResourceManager; 
@property (nonatomic,copy,readonly) NSString * contentDirectory; 
@property (nonatomic,readonly) NSURL * assetCacheDirectoryURL; 
@property (nonatomic,readonly) id<FCContentContextInternal> internalContentContext; 
@property (nonatomic,copy,readonly) NSString * contentEnvironmentToken; 
@property (nonatomic,readonly) FCIssueReadingHistory * issueReadingHistory; 
@property (nonatomic,readonly) FCPersonalizationData * personalizationData; 
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController; 
@property (nonatomic,readonly) FCReadingHistory * readingHistory; 
@property (nonatomic,readonly) FCReadingList * readingList; 
@property (nonatomic,readonly) FCAudioPlaylist * audioPlaylist; 
@property (nonatomic,readonly) FCSubscriptionList * subscriptionList; 
@property (nonatomic,readonly) FCUserInfo * userInfo; 
@property (nonatomic,readonly) FCTagSettings * tagSettings; 
@property (nonatomic,readonly) id<FCPushNotificationHandling> privatePushNotificationHandler; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) char privateDataSyncingEnabled; 
@property (nonatomic,copy,readonly) NSString * privateDataDirectory; 
@property (nonatomic,readonly) id<FCPrivateDataContextInternal> internalPrivateDataContext; 
+(void)initialize;
+(id)testingContext;
+(id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1 ;
-(id)init;
-(FCUserInfo *)userInfo;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(FCAssetManager *)assetManager;
-(FCClientEndpointConnection *)endpointConnection;
-(char)deviceIsiPad;
-(FCSubscriptionController *)subscriptionController;
-(id)initForTesting;
-(id<FCCoreConfigurationManager>)configurationManager;
-(NSString *)contentStoreFrontID;
-(id<FCContentContextInternal>)internalContentContext;
-(FCPersonalizationData *)personalizationData;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchShouldSecureSubscriptionsForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FCNotificationsEndpointConnection *)notificationsEndpointConnection;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(NSString *)privateDataDirectory;
-(id<FCAppActivityMonitor>)appActivityMonitor;
-(FCTagSettings *)tagSettings;
-(FCTagController *)tagController;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(FCReadingHistory *)readingHistory;
-(FCSubscriptionList *)subscriptionList;
-(FCPurchaseController *)purchaseController;
-(id<FCPPTContext>)pptContext;
-(FCArticleController *)articleController;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(NSString *)supportedContentStoreFrontID;
-(FCAccessChecker *)articleAccessChecker;
-(FCAccessChecker *)issueAccessChecker;
-(FCReadingList *)readingList;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(id<FCPrivateDataContextInternal>)internalPrivateDataContext;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 deviceIsiPad:(char)arg10 backgroundTaskable:(id)arg11 privateDataSyncAvailability:(id)arg12 pptContext:(id)arg13 options:(long long)arg14 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(void)setAppActivityMonitor:(id<FCAppActivityMonitor>)arg1 ;
-(id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3 options:(long long)arg4 ;
-(id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1 ;
-(void)_purchaseControllerDidAddALaCarteSubscription;
-(id<FCPrivateDataContext>)privateDataContext;
-(FCIssueReadingHistory *)issueReadingHistory;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(id)offlineArticleManagerProvider;
-(FCFeedManager *)feedManager;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id<FCContentContext>)contentContext;
-(void)ppt_overrideFeedEndpoint:(long long)arg1 ;
-(void)ppt_prewarmFeedDatabase;
-(NSString *)contentEnvironmentToken;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 exceptForFlusher:(id)arg2 ;
-(id<FCAVAssetPrewarming>)avAssetPrewarmer;
-(FCFlintResourceManager *)flintResourceManager;
-(id)news_core_ConfigurationManager;
-(id)magazinesConfigurationManager;
-(NSString *)contentDirectory;
-(NSURL *)assetCacheDirectoryURL;
-(id)recordSourceWithSchema:(id)arg1 ;
-(id)recordTreeSourceWithRecordSources:(id)arg1 ;
-(id)interestTokenForContentManifest:(id)arg1 ;
-(FCAudioPlaylist *)audioPlaylist;
-(char)isPrivateDataSyncingEnabled;
-(id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id<FCPushNotificationHandling>)privatePushNotificationHandler;
-(id)insertTestArticle;
-(id)insertTestArticlesWithCount:(unsigned long long)arg1 ;
-(char)shouldAssetKeyManagerSimulateUnauthorizedAssetKeys:(id)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(char)arg10 deviceIsiPad:(char)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14 ;
-(id<FCOfflineArticleManagerType>)offlineArticleManager;
-(id)notificationsController;
-(FCCommandQueue *)endpointCommandQueue;
-(FCCommandQueue *)notificationsEndpointCommandQueue;
-(char)isPrivateDataEncryptionEnabled;
-(char)isPrivateDatabaseStartingUp;
-(char)isPrivateDatabaseOnline;
-(char)isPrivateDatabaseTemporarilySuspended;
-(id<FCNewsletterManager>)newsletterManager;
-(FCNewsletterEndpointConnection *)newsletterEndpointConnection;
-(FCCommandQueue *)newsletterEndpointCommandQueue;
-(FCNotificationController *)notificationController;
-(id<FCPurchaseManagerType>)purchaseManager;
-(FCTranslationManager *)translationManager;
-(void)setTranslationManager:(FCTranslationManager *)arg1 ;
-(FCLocalAreasManager *)localAreasManager;
-(void)setLocalAreasManager:(FCLocalAreasManager *)arg1 ;
-(FCUserVectorManager *)userVectorManager;
-(void)setUserVectorManager:(FCUserVectorManager *)arg1 ;
-(id<FCCurrentIssuesChecker>)currentIssuesChecker;
-(void)setCurrentIssuesChecker:(id<FCCurrentIssuesChecker>)arg1 ;
-(void)setIssueAccessChecker:(FCAccessChecker *)arg1 ;
-(void)setArticleAccessChecker:(FCAccessChecker *)arg1 ;
-(id<FCFavoritesPersonalizer>)favoritesPersonalizer;
-(void)setFavoritesPersonalizer:(id<FCFavoritesPersonalizer>)arg1 ;
-(id<FCPersonalizedGrouping>)groupingPersonalizer;
-(void)setGroupingPersonalizer:(id<FCPersonalizedGrouping>)arg1 ;
-(id<FCLocalRegionManager>)localRegionProvider;
-(void)setLocalRegionProvider:(id<FCLocalRegionManager>)arg1 ;
-(void)setBackgroundTaskable:(id<FCBackgroundTaskable>)arg1 ;
-(void)setOfflineArticleManagerProvider:(id)arg1 ;
-(void)setPrivateDataContext:(id<FCPrivateDataContext>)arg1 ;
@end

