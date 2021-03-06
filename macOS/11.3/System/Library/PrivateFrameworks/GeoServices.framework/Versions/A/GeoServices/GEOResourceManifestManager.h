/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxyDelegate.h>

@protocol GEOResourceManifestServerProxy, OS_dispatch_source;
@class NSHashTable, GEOActiveTileGroup, NSDictionary, NSSet, NSMutableArray, GEOLocalizationRegionsInfo, geo_isolater, GEOResourceManifestConfiguration, NSObject, NSString;

@interface GEOResourceManifestManager : NSObject <GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate> {

	id<GEOResourceManifestServerProxy> _serverProxy;
	NSHashTable* _serverProxyObservers;
	GEOActiveTileGroup* _activeTileGroup;
	os_unfair_lock_s _activeTileGroupLock;
	NSDictionary* _resourceNamesToPaths;
	NSSet* _allResourceNames;
	NSSet* _allRegionalResourceNames;
	char _needsToLoadTileGroupFromDisk;
	NSMutableArray* _tileGroupObservers;
	os_unfair_recursive_lock_s _tileGroupObserversLock;
	os_unfair_lock_s _closedCountLock;
	long long _closedCount;
	char _constantlyChangeTileGroup;
	double _constantlyChangeTileGroupInterval;
	GEOLocalizationRegionsInfo* _localizationRegionsInfo;
	NSMutableArray* _networkActivityHandlers;
	geo_isolater* _networkActivityHandlersIsolation;
	char _isUpdatingManifest;
	char _isLoadingResources;
	os_unfair_lock_s _resourceNamesToPathsLock;
	GEOResourceManifestConfiguration* _configuration;
	NSObject*<OS_dispatch_source> _cachedResourceInfoPurgeTimer;
	unsigned long long _stateCaptureHandle;

}

@property (nonatomic,readonly) id<GEOResourceManifestServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
@property (nonatomic,readonly) char hasActiveTileGroup; 
@property (nonatomic,readonly) char hasLoadedActiveTileGroup; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)setHiDPI:(char)arg1 ;
+(void)setServerProxyClass:(Class)arg1 ;
+(id)modernManagerForConfiguration:(id)arg1 ;
+(id)modernManager;
+(void)useRemoteProxy;
+(void)useLocalProxy;
+(void)disableServerConnection;
+(id)modernManagerNoCreate;
+(void)configureInProcessSingletonWithConfiguration:(id)arg1 ;
+(id)modernManagerForTileGroupIdentifier:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(id)authToken;
-(id)detailedDescription;
-(void)_localeChanged:(id)arg1 ;
-(void)addTileGroupObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeTileGroupObserver:(id)arg1 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)openServerConnection;
-(void)closeServerConnection;
-(char)isMuninEnabled;
-(char)hasLoadedActiveTileGroup;
-(char)hasActiveTileGroup;
-(char)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const GEOTileKey*)arg2 overrideLocale:(id)arg3 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(id)pathForResourceWithName:(id)arg1 ;
-(id)allResourceNames;
-(void)startObservingDevResources;
-(void)stopObservingDevResources;
-(void)_scheduleCachedResourceInfoPurgeTimer;
-(id)_loadActiveTileGroupIfNecessary:(char)arg1 ;
-(void)closeServerConnection:(char)arg1 ;
-(void)_purgeCachedResourceInfo;
-(int)mapMatchingTileSetStyle;
-(int)requestStyleForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(char)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(char)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(void)_buildResourceNamesToPaths;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1 ;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1 ;
-(void)fakeTileGroupChange;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3 ;
-(void)serverProxy:(id)arg1 didLoadActiveTileGroup:(id)arg2 ;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1 ;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateManifest:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)updateProgress;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2 ;
-(char)hasResourceManifest;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 ;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetActiveTileGroup;
-(void)updateManifest:(/*^block*/id)arg1 ;
-(void)devResourcesFolderDidChange;
-(void)_notifyObserversOfResourcesChange;
-(void)addServerProxyObserver:(id)arg1 ;
-(void)removeServerProxyObserver:(id)arg1 ;
-(unsigned)mapMatchingZoomLevel;
-(id)_activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(char)isDisputedBordersAllowlistedForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(id)disputedBordersQueryItemsForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2 ;
-(id)allRegionalResourceNames;
-(id)allResourcePaths;
-(void)addNetworkActivityHandler:(/*^block*/id)arg1 ;
-(id)bestLocalizedStringForDisplayStringAtIndex:(unsigned long long)arg1 ;
-(void)setConstantlyChangeTileGroup:(char)arg1 ;
-(void)setConstantlyChangeTileGroupInterval:(double)arg1 ;
-(void)updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(unsigned)activeTileGroupIdentifier;
-(void)forceUpdate;
-(void)removeDevResources;
-(id<GEOResourceManifestServerProxy>)serverProxy;
@end

