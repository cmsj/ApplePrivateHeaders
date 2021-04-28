/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <LaunchServices/LaunchServices-Structs.h>
@class NSObject, NSURL, NSData, NSMutableDictionary, NSArray;

@interface _LSDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSURL* _systemContainerURL;
	NSURL* _systemGroupContainerURL;
	NSURL* _userContainerURL;
	NSData* _hmacSecret;
	NSMutableDictionary* _darwinNotificationNames;
	unsigned _darwinNotificationNamesUID;
	os_unfair_lock_s _darwinNotificationNamesLock;
	char _inSyncBubble;
	char _inXCTestRigInsecure;
	char _appleInternal;
	char _isServer;
	char _hasServer;
	char _inEducationMode;
	char _hasPersistentPreferences;
	long long _currentDisplayGamut;

}

@property (readonly) unsigned currentSchemaVersion; 
@property (readonly) NSURL * systemContainerURL; 
@property (readonly) NSURL * systemGroupContainerURL; 
@property (readonly) NSURL * userContainerURL; 
@property (readonly) unsigned short databaseStoreFileMode; 
@property (readonly) NSURL * databaseStoreFileURL; 
@property (readonly) NSURL * queriedSchemesMapFileURL; 
@property (readonly) NSURL * identifiersFileURL; 
@property (readonly) NSURL * preferencesFileURL; 
@property (readonly) NSURL * securePeferencesFileURL; 
@property (readonly) NSURL * dbSentinelFileURL; 
@property (readonly) NSURL * installJournalDirectoryURL; 
@property (readonly) NSURL * dbRecoveryFileURL; 
@property (readonly) NSURL * dbSyncInterruptedFileURL; 
@property (getter=isServer) char server;                                                           //@synthesize isServer=_isServer - In the implementation block
@property (getter=isSystemServer,readonly) char systemServer; 
@property (assign) char hasServer;                                                                 //@synthesize hasServer=_hasServer - In the implementation block
@property (getter=isInEducationMode,readonly) char inEducationMode;                                //@synthesize inEducationMode=_inEducationMode - In the implementation block
@property (readonly) char hasPersistentPreferences;                                                //@synthesize hasPersistentPreferences=_hasPersistentPreferences - In the implementation block
@property (getter=isInSyncBubble,readonly) char inSyncBubble;                                      //@synthesize inSyncBubble=_inSyncBubble - In the implementation block
@property (getter=isInXCTestRigInsecure,nonatomic,readonly) char inXCTestRigInsecure;              //@synthesize inXCTestRigInsecure=_inXCTestRigInsecure - In the implementation block
@property (getter=isAppleInternal,nonatomic,readonly) char appleInternal;                          //@synthesize appleInternal=_appleInternal - In the implementation block
@property (nonatomic,readonly) char allowsAlternateIcons; 
@property (nonatomic,readonly) char abortIfMayNotMapDatabase; 
@property (nonatomic,readonly) char issueSandboxExceptionsIfMayNotMapDatabase; 
@property (readonly) double databaseSaveInterval; 
@property (readonly) double databaseSaveLatency; 
@property (readonly) long long concurrentInstallOperations; 
@property (readonly) NSArray * preferredLocalizations; 
@property (readonly) char markLocalizationsStoredInDatabase; 
@property (readonly) char alwaysUseDebugOpenWithMenus; 
@property (getter=isRegionChina,readonly) char regionChina; 
@property (readonly) char surrogatesOnlyFindBundleContainerizedBundles; 
@property (readonly) NSData * HMACSecret; 
@property (nonatomic,readonly) NSURL * trustedSignatureDatabaseURL; 
+(id)sharedInstance;
+(id)userContainerURL;
+(id)systemContainerURL;
+(char)appleInternal;
+(char)inSyncBubble;
+(char)inXCTestRigInsecure;
+(char)hasServer;
+(char)hasPersistentPreferences;
+(id)systemGroupContainerURL;
-(id)debugDescription;
-(id)init;
-(char)isInXCTestRigInsecure;
-(id)serviceNameForConnectionType:(unsigned short)arg1 ;
-(void)setServer:(char)arg1 ;
-(unsigned)currentSchemaVersion;
-(NSURL *)userContainerURL;
-(NSURL *)systemContainerURL;
-(NSURL *)dbRecoveryFileURL;
-(char)hasServer;
-(char)hasPersistentPreferences;
-(NSURL *)systemGroupContainerURL;
-(unsigned)proxyUIDForCurrentEffectiveUID;
-(id)databaseStoreFileURLWithUID:(unsigned)arg1 ;
-(id)dataVaultURLWithUID:(unsigned)arg1 ;
-(id)userPreferencesURL;
-(char)isServer;
-(id)_launchServicesPreferencesFolderURL;
-(char)isAppleInternal;
-(unsigned)proxyUIDForUID:(unsigned)arg1 ;
-(id)darwinNotificationNameForCurrentUser:(id)arg1 userID:(const unsigned*)arg2 ;
-(NSArray *)preferredLocalizations;
-(unsigned short)databaseStoreFileMode;
-(NSURL *)databaseStoreFileURL;
-(NSURL *)queriedSchemesMapFileURL;
-(NSURL *)identifiersFileURL;
-(NSURL *)preferencesFileURL;
-(NSURL *)securePeferencesFileURL;
-(char)isInEducationMode;
-(char)allowsAlternateIcons;
-(char)abortIfMayNotMapDatabase;
-(char)isInSyncBubble;
-(double)databaseSaveInterval;
-(double)databaseSaveLatency;
-(NSURL *)dbSentinelFileURL;
-(NSURL *)installJournalDirectoryURL;
-(NSURL *)dbSyncInterruptedFileURL;
-(id)simulatorRootURL;
-(id)simulatorRuntimeVersion;
-(id)simulatorRuntimeBuildVersion;
-(id)classesWithNameForXCTests:(const char*)arg1 ;
-(void)setHasServer:(char)arg1 ;
-(char)isSystemServer;
-(char)issueSandboxExceptionsIfMayNotMapDatabase;
-(id)databaseUpdateNotificationName;
-(id)databaseUpdateNotificationNameForUserID:(unsigned)arg1 ;
-(id)preferencesUpdateNotificationName;
-(id)preferencesFileChangeNotificationName;
-(long long)concurrentInstallOperations;
-(char)markLocalizationsStoredInDatabase;
-(char)alwaysUseDebugOpenWithMenus;
-(char)isRegionChina;
-(char)surrogatesOnlyFindBundleContainerizedBundles;
-(NSData *)HMACSecret;
-(NSURL *)trustedSignatureDatabaseURL;
@end
