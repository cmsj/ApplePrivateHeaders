/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSafariExtension.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WBSWebExtensionDataForwarding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSExtension, NSString, NSMutableArray, WBSDispatchSourceTimer, WKWebView, NSPointerArray, NSMutableDictionary, WBSWebExtensionContextMenuItemManager, WBSWebExtensionAlarmState, NSMapTable, NSBundle, NSDictionary, NSMutableOrderedSet, NSSet, NSArray, NSImage, WBSWebExtensionLocalization, WBSWebExtensionSQLiteStore, NSUUID, WBSWebExtensionToolbarItem, WKContentWorld, NSCountedSet;

@interface WBSWebExtensionData : WBSSafariExtension <WKNavigationDelegate, WKUIDelegate, WBSWebExtensionDataForwarding, NSSecureCoding, NSCopying> {

	NSURL* _resourcesDirectoryURL;
	NSExtension* _extension;
	NSString* _composedIdentifier;
	NSMutableArray* _actionsToPerformAfterBackgroundPageLoads;
	WBSDispatchSourceTimer* _timerToUnloadBackgroundPage;
	WKWebView* _backgroundWebView;
	NSPointerArray* _relatedWebViewPool;
	NSMutableDictionary* _injectedScriptsPerOriginPattern;
	NSMutableDictionary* _injectedStyleSheetsPerOriginPattern;
	WBSWebExtensionContextMenuItemManager* _contextMenuItemManager;
	WBSWebExtensionAlarmState* _alarmState;
	NSMapTable* _temporaryTabPermissionOrigins;
	NSMutableArray* _websiteRequestsPendingApproval;
	NSBundle* _extensionBundle;
	NSDictionary* _manifestDictionary;
	char _parsedManifestDictionary;
	NSMutableDictionary* _grantedPermissions;
	NSMutableDictionary* _grantedPermissionOrigins;
	NSMutableDictionary* _revokedPermissions;
	NSMutableDictionary* _revokedPermissionOrigins;
	NSMutableOrderedSet* _manifestErrors;
	NSSet* _manifestPermissions;
	NSSet* _manifestOptionalPermissions;
	NSSet* _manifestPermissionOrigins;
	NSSet* _manifestOptionalPermissionOrigins;
	char _didPopulatePermissionsAndOriginsPropertiesFromManifest;
	NSArray* _backgroundScriptPaths;
	NSString* _backgroundPagePath;
	NSString* _generatedBackgroundPageContent;
	char _backgroundPageIsPersistent;
	char _parsedBackgroundManifest;
	char _isExtensionBeingLoadedAsPartOfSafariLaunch;
	NSArray* _injectedContentData;
	char _parsedContentScriptsManifest;
	NSArray* _webAccessibleResources;
	char _parsedWebAccessibleResources;
	NSString* _displayName;
	NSString* _displayShortName;
	NSString* _version;
	NSString* _displayVersion;
	NSString* _displayDescription;
	char _parsedManifestDisplayStrings;
	char _hasCachedPreferencesIcon;
	NSImage* _preferencesIcon;
	char _hasCachedIcon;
	NSImage* _icon;
	char _hasCachedToolbarImage;
	NSImage* _toolbarImage;
	NSDictionary* _commands;
	WBSWebExtensionLocalization* _localization;
	WBSWebExtensionSQLiteStore* _localStorage;
	WBSWebExtensionSQLiteStore* _syncedStorage;
	NSDictionary* _queuedInstallEventDetails;
	char _shouldFireStartupEvent;
	char _hasFirstNativeMessagePort;
	NSMutableArray* _queuedNativeMessages;
	char _requestedOptionalAccessToAllHosts;
	char _hasLoadedPermissionsFromStorage;
	NSString* _extensionIdentifier;
	NSUUID* _uniqueIdentifier;
	NSUUID* _baseURIHost;
	WBSWebExtensionToolbarItem* _toolbarItem;
	WKContentWorld* _extensionWorldForInjectedContent;
	NSCountedSet* _backgroundPageEventListeners;

}

@property (assign,nonatomic) char hasLoadedPermissionsFromStorage;                                          //@synthesize hasLoadedPermissionsFromStorage=_hasLoadedPermissionsFromStorage - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * composedIdentifier;                                               //@synthesize composedIdentifier=_composedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * extensionIdentifier;                                              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * runtimeIdentifier; 
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSUUID * baseURIHost;                                                        //@synthesize baseURIHost=_baseURIHost - In the implementation block
@property (nonatomic,readonly) char manifestParsedSuccessfully; 
@property (nonatomic,copy,readonly) NSDictionary * manifest; 
@property (nonatomic,readonly) WBSWebExtensionLocalization * localization; 
@property (nonatomic,retain) WBSWebExtensionToolbarItem * toolbarItem;                                      //@synthesize toolbarItem=_toolbarItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * toolbarLabel; 
@property (nonatomic,copy,readonly) NSString * toolbarPopupPath; 
@property (nonatomic,readonly) NSURL * backgroundPageURL; 
@property (nonatomic,readonly) WBSWebExtensionSQLiteStore * localStorage; 
@property (nonatomic,readonly) WBSWebExtensionSQLiteStore * syncedStorage; 
@property (nonatomic,readonly) WKWebView * backgroundWebView;                                               //@synthesize backgroundWebView=_backgroundWebView - In the implementation block
@property (nonatomic,readonly) WKWebView * relatedWebView; 
@property (nonatomic,readonly) NSArray * allRelatedWebViews; 
@property (nonatomic,retain) WKContentWorld * extensionWorldForInjectedContent;                             //@synthesize extensionWorldForInjectedContent=_extensionWorldForInjectedContent - In the implementation block
@property (nonatomic,readonly) WBSWebExtensionContextMenuItemManager * contextMenuItemManager;              //@synthesize contextMenuItemManager=_contextMenuItemManager - In the implementation block
@property (nonatomic,readonly) WBSWebExtensionAlarmState * alarmState;                                      //@synthesize alarmState=_alarmState - In the implementation block
@property (nonatomic,readonly) NSURL * optionsPageURL; 
@property (nonatomic,copy,readonly) NSArray * corsDisablingPatterns; 
@property (nonatomic,readonly) NSDictionary * userVisiblePermissions; 
@property (nonatomic,readonly) char shouldShowInWebsitePreferences; 
@property (nonatomic,readonly) NSSet * urlsPendingApproval; 
@property (nonatomic,readonly) NSSet * apiNamesPendingApproval; 
@property (nonatomic,readonly) NSCountedSet * backgroundPageEventListeners;                                 //@synthesize backgroundPageEventListeners=_backgroundPageEventListeners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * displayShortName; 
@property (nonatomic,readonly) NSString * displayVersion; 
@property (nonatomic,readonly) NSString * displayDescription; 
@property (nonatomic,readonly) NSString * processDisplayName; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSImage * preferencesIcon; 
@property (nonatomic,readonly) NSImage * icon; 
@property (nonatomic,readonly) NSImage * toolbarImage; 
@property (nonatomic,readonly) NSString * generatedBackgroundPageContent; 
@property (nonatomic,readonly) char backgroundPageIsPersistent; 
@property (nonatomic,readonly) NSArray * injectedContentData; 
@property (nonatomic,readonly) NSURL * newTabOverridePageURL; 
@property (nonatomic,readonly) char hasBrowserAction; 
@property (nonatomic,readonly) char hasPageAction; 
@property (nonatomic,readonly) char hasCommands; 
@property (nonatomic,readonly) long long manifestVersion; 
@property (nonatomic,readonly) char requestsAccessToAllHosts; 
@property (assign,nonatomic) char requestedOptionalAccessToAllHosts;                                        //@synthesize requestedOptionalAccessToAllHosts=_requestedOptionalAccessToAllHosts - In the implementation block
@property (nonatomic,readonly) NSSet * currentPermissions; 
@property (nonatomic,readonly) NSSet * currentPermissionOrigins; 
@property (nonatomic,readonly) NSSet * currentAccessibleOrigins; 
@property (nonatomic,readonly) NSDictionary * configuredPermissions; 
@property (nonatomic,readonly) NSDictionary * configuredPermissionOrigins; 
@property (nonatomic,readonly) NSSet * requestedPermissionsNotAlreadyConfigured; 
@property (nonatomic,readonly) NSSet * requestedPermissionOriginsNotAlreadyConfigured; 
@property (nonatomic,copy) NSDictionary * grantedPermissions; 
@property (nonatomic,copy) NSDictionary * grantedPermissionOrigins; 
@property (nonatomic,copy) NSDictionary * revokedPermissions; 
@property (nonatomic,copy) NSDictionary * revokedPermissionOrigins; 
@property (nonatomic,readonly) NSSet * manifestPermissions; 
@property (nonatomic,readonly) NSSet * manifestOptionalPermissions; 
@property (nonatomic,readonly) NSSet * manifestPermissionOrigins; 
@property (nonatomic,readonly) NSSet * manifestOptionalPermissionOrigins; 
@property (nonatomic,readonly) NSSet * manifestAccessibleOrigins; 
@property (nonatomic,readonly) NSString * contentSecurityPolicy; 
@property (nonatomic,readonly) NSArray * webAccessibleResources; 
@property (nonatomic,readonly) NSDictionary * commands; 
@property (nonatomic,readonly) NSArray * manifestErrors; 
+(char)supportsSecureCoding;
+(id)generatedBackgroundPageFilename;
+(id)supportedPermissions;
+(id)supportedWebExtensionPatternSchemes;
+(id)createWebExtensionError:(long long)arg1 customLocalizedDescription:(id)arg2 ;
+(id)supportedPermissionsForExtensionConverter;
+(id)createWebExtensionError:(long long)arg1 underlyingError:(id)arg2 ;
+(id)createWebExtensionError:(long long)arg1 ;
+(id)unlocalizedManifestDictionaryFromData:(id)arg1 withExtensionIdentifier:(id)arg2 error:(id*)arg3 ;
+(/*^block*/id)_originPatternMatchesAnyPatternInAllowedPatterns:(id)arg1 ;
+(id)_manifestKeySupportForDictionary:(id)arg1 withSupportedFeatures:(id)arg2 currentSafariShortVersion:(id)arg3 ;
+(id)_unsupportedKeysFromKeySupportDictionary:(id)arg1 ;
+(char)_isShortVersion:(id)arg1 supportedInSafariVersion:(id)arg2 ;
+(void)_mergeKeySupportDictionary:(id)arg1 intoDictionary:(id)arg2 ;
+(id)_unsupportedValuesInArray:(id)arg1 withSupportedFeatures:(id)arg2 currentSafariShortVersion:(id)arg3 ;
+(id)supportedWebExtensionFeaturesForManifestVersion:(unsigned long long)arg1 ;
+(id)unsupportedManifestKeysInDictionary:(id)arg1 withSupportedFeatures:(id)arg2 currentSafariShortVersion:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)load;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSUUID *)uniqueIdentifier;
-(NSString *)version;
-(NSString *)displayName;
-(void)unload;
-(NSExtension *)extension;
-(NSImage *)icon;
-(NSDictionary *)commands;
-(char)_applicationIsActive;
-(void)addListener:(unsigned long long)arg1 ;
-(void)removeListener:(unsigned long long)arg1 ;
-(NSString *)extensionIdentifier;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(WBSWebExtensionAlarmState *)alarmState;
-(id)initWithExtension:(id)arg1 ;
-(WBSWebExtensionLocalization *)localization;
-(NSDictionary *)manifest;
-(NSString *)displayDescription;
-(long long)manifestVersion;
-(NSDictionary *)grantedPermissions;
-(void)setGrantedPermissions:(NSDictionary *)arg1 ;
-(void)messageReceivedFromContainingAppWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)displayVersion;
-(id)_actionDictionary;
-(char)hasPendingWebsiteRequests;
-(long long)permissionStateForURL:(id)arg1 inTab:(id)arg2 ;
-(char)hasPermissionToAccessURL:(id)arg1 inTab:(id)arg2 ;
-(void)userGesturePerformedInTab:(id)arg1 ;
-(WKWebView *)relatedWebView;
-(NSString *)processDisplayName;
-(void)addWebViewToRelatedWebViewPool:(id)arg1 ;
-(char)hasBrowserAction;
-(char)hasPageAction;
-(WKWebView *)backgroundWebView;
-(void)fireEvent:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)revokePermissions:(id)arg1 origins:(id)arg2 expirationDate:(id)arg3 ;
-(void)grantPermissions:(id)arg1 origins:(id)arg2 expirationDate:(id)arg3 ;
-(char)requestsAccessToAllHosts;
-(NSSet *)requestedPermissionOriginsNotAlreadyConfigured;
-(void)dispatchAllPendingWebsiteRequests;
-(NSSet *)urlsPendingApproval;
-(WKContentWorld *)extensionWorldForInjectedContent;
-(NSURL *)newTabOverridePageURL;
-(NSArray *)corsDisablingPatterns;
-(NSURL *)backgroundPageURL;
-(char)backgroundPageIsPersistent;
-(NSUUID *)baseURIHost;
-(void)loadBackgroundPageIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)displayShortName;
-(NSURL *)optionsPageURL;
-(NSString *)composedIdentifier;
-(NSImage *)preferencesIcon;
-(char)canLoad;
-(NSDictionary *)userVisiblePermissions;
-(NSArray *)manifestErrors;
-(WBSWebExtensionToolbarItem *)toolbarItem;
-(char)hasPermission:(id)arg1 ;
-(void)dispatchExpiredPendingWebsiteRequests;
-(void)_validateToolbarItemInAllWindows;
-(char)hasMoreThanOneRequestedOriginNotAlreadyConfigured;
-(NSImage *)toolbarImage;
-(NSString *)toolbarPopupPath;
-(NSString *)toolbarLabel;
-(void)setToolbarItem:(WBSWebExtensionToolbarItem *)arg1 ;
-(id)_defaultWebsiteDataStore;
-(void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)arg1 inTab:(id)arg2 options:(unsigned long long)arg3 callingAPIName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_backgroundWebViewConfiguration;
-(void)_loadToolbarItem;
-(void)_unloadToolbarItem;
-(void)setRequestedOptionalAccessToAllHosts:(char)arg1 ;
-(id)extensionStateWithPreviousState:(id)arg1 ;
-(long long)extensionSupportsSafariShortVersion:(id)arg1 ;
-(void)fireEvents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkPermissionAndPromptIfNecessaryToAccessURL:(id)arg1 inTab:(id)arg2 callingAPIName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)requestedOptionalAccessToAllHosts;
-(void)removeGrantedPermissions:(id)arg1 origins:(id)arg2 exactPatternMatchesOnly:(char)arg3 ;
-(char)hasPermissionToAccessURL:(id)arg1 ;
-(void)removeTemporaryPermissionsForTab:(id)arg1 ;
-(void)updateBackgroundPageClipboardPermission;
-(void)invalidateStorage;
-(char)shouldShowInWebsitePreferences;
-(void)removeGrantedAndRevokedPermissions:(id)arg1 origins:(id)arg2 exactPatternMatchesOnly:(char)arg3 ;
-(NSDictionary *)configuredPermissionOrigins;
-(NSDictionary *)grantedPermissionOrigins;
-(NSDictionary *)revokedPermissionOrigins;
-(NSSet *)manifestAccessibleOrigins;
-(char)hasPermissionToAccessAllHosts;
-(NSSet *)apiNamesPendingApproval;
-(char)hasCommands;
-(void)queueStartupEvent;
-(void)setQueuedInstallEventDetails:(id)arg1 ;
-(NSString *)runtimeIdentifier;
-(NSArray *)allRelatedWebViews;
-(NSCountedSet *)backgroundPageEventListeners;
-(NSString *)generatedBackgroundPageContent;
-(WBSWebExtensionContextMenuItemManager *)contextMenuItemManager;
-(void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)arg1 inTab:(id)arg2 callingAPIName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)nativePortConnectionOpened;
-(void)scheduleBackgroundPageToUnload;
-(char)hasLoadedPermissionsFromStorage;
-(void)setGrantedPermissionOrigins:(NSDictionary *)arg1 ;
-(void)setRevokedPermissions:(NSDictionary *)arg1 ;
-(void)setRevokedPermissionOrigins:(NSDictionary *)arg1 ;
-(void)setHasLoadedPermissionsFromStorage:(char)arg1 ;
-(NSDictionary *)revokedPermissions;
-(void)addInjectedContentForGrantedOriginPatterns:(id)arg1 ;
-(void)dispatchPendingWebsiteRequestsMatchingOriginPatterns:(id)arg1 ;
-(void)removeInjectedContentForRemovedOriginPatterns:(id)arg1 ;
-(void)updateInjectedContentForChangedRevokedOriginPatterns:(id)arg1 ;
-(WBSWebExtensionSQLiteStore *)localStorage;
-(WBSWebExtensionSQLiteStore *)syncedStorage;
-(void)checkPermissionAndPromptIfNecessaryToAccessURL:(id)arg1 inTab:(id)arg2 options:(unsigned long long)arg3 callingAPIName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)bestIconSizeKeyInIconsDictionary:(id)arg1 idealPixelSize:(long long)arg2 ;
-(id)imageForBestIconInIconsDictionary:(id)arg1 idealPointSize:(long long)arg2 ;
-(char)hasInjectedContentDataForURL:(id)arg1 ;
-(char)hasPermissions:(id)arg1 origins:(id)arg2 ;
-(long long)permissionStateForURL:(id)arg1 ;
-(char)hasPermissionToAccessAllURLs;
-(void)removeRevokedPermissions:(id)arg1 origins:(id)arg2 exactPatternMatchesOnly:(char)arg3 ;
-(char)verifyRequestedPermissions:(id)arg1 origins:(id)arg2 errorMessage:(id*)arg3 ;
-(NSArray *)injectedContentData;
-(NSSet *)currentPermissions;
-(NSSet *)currentPermissionOrigins;
-(NSSet *)currentAccessibleOrigins;
-(NSDictionary *)configuredPermissions;
-(NSSet *)requestedPermissionsNotAlreadyConfigured;
-(NSSet *)manifestPermissions;
-(NSSet *)manifestOptionalPermissions;
-(NSSet *)manifestPermissionOrigins;
-(NSSet *)manifestOptionalPermissionOrigins;
-(NSString *)contentSecurityPolicy;
-(NSArray *)webAccessibleResources;
-(id)initWithExtension:(id)arg1 extensionBundle:(id)arg2 extensionIdentifier:(id)arg3 uniqueIdentifier:(id)arg4 baseURIHost:(id)arg5 ;
-(id)manifestDictionary;
-(void)_recordManifestErrorIfNecessary:(id)arg1 ;
-(char)manifestParsedSuccessfully;
-(void)_populateDisplayStringsIfNeeded;
-(/*^block*/id)_validateAndReadResourceBlock;
-(id)extensionIconWithBaseURI:(id)arg1 idealPointSize:(long long)arg2 validateAndReadResourceHandler:(/*^block*/id)arg3 ;
-(id)_containingAppIcon;
-(id)toolbarImageWithBaseURI:(id)arg1 idealPointSize:(long long)arg2 validateAndReadResourceHandler:(/*^block*/id)arg3 ;
-(void)_populateBackgroundPropertiesIfNeeded;
-(void)_populateContentScriptPropertiesIfNeeded;
-(void)_loadBackgroundWebViewDuringExtensionLoad;
-(void)_loadContentScriptsAndStyleSheets;
-(void)_addInjectedContentForAllGrantedOrigins;
-(void)moveLocalStorage:(/*^block*/id)arg1 ;
-(void)_unloadBackgroundWebView;
-(id)imageForBestIconInIconsDictionary:(id)arg1 idealPointSize:(long long)arg2 withBaseURI:(id)arg3 validateAndReadResourceHandler:(/*^block*/id)arg4 ;
-(id)imageForPath:(id)arg1 withBaseURI:(id)arg2 validateAndReadResourceHandler:(/*^block*/id)arg3 ;
-(id)pathForBestIconInIconsDictionary:(id)arg1 idealPixelSize:(long long)arg2 ;
-(id)urlForOptionsPageWithBaseURI:(id)arg1 ;
-(id)initWithManifestDictionary:(id)arg1 extensionIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(void)_removePermissions:(id)arg1 origins:(id)arg2 exactPatternMatchesOnly:(char)arg3 fromPermissions:(id)arg4 fromOrigins:(id)arg5 notificationName:(id)arg6 ;
-(id)_configuredDictionaryWithRequested:(id)arg1 granted:(id)arg2 revoked:(id)arg3 ;
-(void)_populatePermissionsAndOriginsPropertiesIfNeeded;
-(void)_removeExpiredPermissions:(id)arg1 origins:(id)arg2 notificationName:(id)arg3 ;
-(void)_removeExpiredGrantedPermissionsAndPostNotification:(char)arg1 ;
-(void)_removeExpiredRevokedPermissionsAndPostNotification:(char)arg1 ;
-(id)_minimumSafariVersionString;
-(id)_maximumSafariVersionString;
-(id)urlForBackgroundPageWithBaseURI:(id)arg1 ;
-(void)_loadBackgroundWebView;
-(double)_delayForNonPersistentBackgroundPageBeforeUnloading;
-(void)_queueEventToFireAfterBackgroundPageLoads:(/*^block*/id)arg1 ;
-(void)_removeInjectedContentForOriginPattern:(id)arg1 ;
-(void)_addInjectedContentForGrantedOriginPattern:(id)arg1 ;
-(void)_updateInjectedContentForRevokedOriginPattern:(id)arg1 ;
-(char)hasActiveUserGestureInTab:(id)arg1 ;
-(void)_fireStartupAndInstallEventsIfNecessaryForWebView:(id)arg1 ;
-(char)hasPermission:(id)arg1 inTab:(id)arg2 ;
-(void)setExtensionWorldForInjectedContent:(WKContentWorld *)arg1 ;
@end

