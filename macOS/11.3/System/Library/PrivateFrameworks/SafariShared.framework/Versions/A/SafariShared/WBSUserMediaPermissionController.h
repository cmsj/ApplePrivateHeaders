/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSCoalescedAsynchronousWriterDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, WBSCoalescedAsynchronousWriter, NSObject, NSURL, WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSCoalescedAsynchronousWriterDelegate> {

	NSMutableDictionary* _cachedSettings;
	WBSCoalescedAsynchronousWriter* _saveUserMediaPermissionsWriter;
	NSObject*<OS_dispatch_queue> _internalQueue;
	atomic<LoadingStatus> _savedStateLoadStatus;
	NSURL* _userMediaPermissionsFileURL;
	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSPerSitePreference* _cameraMediaCapturePreference;
	WBSPerSitePreference* _microphoneMediaCapturePreference;
	WBSPerSitePreference* _screenCapturePreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * cameraMediaCapturePreference;                     //@synthesize cameraMediaCapturePreference=_cameraMediaCapturePreference - In the implementation block
@property (nonatomic,readonly) WBSPerSitePreference * microphoneMediaCapturePreference;                 //@synthesize microphoneMediaCapturePreference=_microphoneMediaCapturePreference - In the implementation block
@property (nonatomic,readonly) WBSPerSitePreference * screenCapturePreference;                          //@synthesize screenCapturePreference=_screenCapturePreference - In the implementation block
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore;              //@synthesize perSitePreferencesStore=_perSitePreferencesStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)localizedStringForPerSitePreferenceValue:(id)arg1 ;
-(id)init;
-(id)_init;
-(id)preferences;
-(id)_dictionaryRepresentation;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)savePendingChangesBeforeTermination;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_loadSavedPermissions;
-(id)initWithUserMediaPermissionsFileURL:(id)arg1 perSitePreferencesStore:(id)arg2 ;
-(void)_dispatchAsyncOnInternalQueue:(/*^block*/id)arg1 ;
-(void)_dispatchSyncOnInternalQueue:(/*^block*/id)arg1 ;
-(void)_cachedSettingsDidChange;
-(unsigned long long)_permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2 ;
-(id)_validPolicyForDomainWithOrigin:(id)arg1 topLevelOrigin:(id)arg2 ;
-(unsigned long long)_permissionByApplyingDefaultsForMissingValuesInPermission:(unsigned long long)arg1 ;
-(id)_standardizedURLForDomain:(id)arg1 ;
-(id)_validPolicyForOrigin:(id)arg1 topLevelOrigin:(id)arg2 ;
-(char)_captureDevicesAreAllDefaultsGivenPermission:(unsigned long long)arg1 ;
-(id)_policyForOrigin:(id)arg1 topLevelOrigin:(id)arg2 ;
-(void)_invalidateCachedSettingsForOriginHash:(id)arg1 ;
-(void)_setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4 ;
-(unsigned long long)_permissionByRemovingDefaultPermissionFlagsInPermission:(unsigned long long)arg1 ;
-(id)_saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3 ;
-(id)_saltWithPolicyEntry:(id)arg1 computedPermission:(unsigned long long)arg2 frameIdentifier:(unsigned long long)arg3 ;
-(void)resetOriginPermissionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cachedSettingsDidChangeAndWriteImmediately:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_mediaCaptureTypeForPreference:(id)arg1 ;
-(char)_setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 ;
-(unsigned long long)_permissionMaskForMediaCaptureType:(long long)arg1 ;
-(void)_invalidateAllPermissionsForDomain:(id)arg1 ;
-(long long)_mediaCaptureSettingForMediaCaptureType:(long long)arg1 userMediaPermission:(unsigned long long)arg2 ;
-(unsigned long long)_userMediaPermissionForMediaCaptureType:(long long)arg1 mediaCaptureSetting:(long long)arg2 ;
-(unsigned long long)permissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2 ;
-(char)_removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 ;
-(void)performDelayedLaunchOperations;
-(void)reloadPreferences;
-(void)savePendingChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPermissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)permissionForNonHTTPSOriginFromPermission:(unsigned long long)arg1 ;
-(void)setPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4 ;
-(id)saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3 ;
-(void)removeAllOriginsAddedAfterDate:(id)arg1 ;
-(void)resetOriginPermissions;
-(void)didCommitLoadForFrameWithIdentifier:(unsigned long long)arg1 ;
-(void)checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(unsigned long long)arg3 decisionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)userMediaPermissionForDefaultPreferenceValues;
-(unsigned long long)permissionForDomain:(id)arg1 ;
-(char)_isPreferenceValid:(id)arg1 ;
-(WBSPerSitePreference *)cameraMediaCapturePreference;
-(WBSPerSitePreference *)microphoneMediaCapturePreference;
-(WBSPerSitePreference *)screenCapturePreference;
@end

