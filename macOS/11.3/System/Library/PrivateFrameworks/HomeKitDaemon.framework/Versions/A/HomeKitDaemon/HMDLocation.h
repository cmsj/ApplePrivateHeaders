/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, HMDCLLocationManager;
@class NSObject, NSHashTable, NSMutableSet, NSMapTable, NSString;

@interface HMDLocation : HMFObject <HMFLogging, HMFTimerDelegate, HMDCLLocationManagerDelegate> {

	char _beingConfigured;
	int _locationAuthorized;
	int _authStatus;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	id<HMDCLLocationManager> _locationManager;
	NSHashTable* _singleLocationDelegates;
	NSMutableSet* _batchLocationContexts;
	NSMapTable* _regionStateDelegatesByRegionIdentifier;
	NSMapTable* _pendingRegionMonitoringRequests;
	NSMapTable* _pendingRegionCallbacks;
	NSMapTable* _regionStates;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> handlerQueue;                        //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,readonly) id<HMDCLLocationManager> locationManager;                         //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int authStatus;                                                     //@synthesize authStatus=_authStatus - In the implementation block
@property (assign,nonatomic) int locationAuthorized;                                             //@synthesize locationAuthorized=_locationAuthorized - In the implementation block
@property (nonatomic,readonly) NSHashTable * singleLocationDelegates;                            //@synthesize singleLocationDelegates=_singleLocationDelegates - In the implementation block
@property (nonatomic,readonly) NSMutableSet * batchLocationContexts;                             //@synthesize batchLocationContexts=_batchLocationContexts - In the implementation block
@property (nonatomic,readonly) NSMapTable * regionStateDelegatesByRegionIdentifier;              //@synthesize regionStateDelegatesByRegionIdentifier=_regionStateDelegatesByRegionIdentifier - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingRegionMonitoringRequests;                     //@synthesize pendingRegionMonitoringRequests=_pendingRegionMonitoringRequests - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingRegionCallbacks;                              //@synthesize pendingRegionCallbacks=_pendingRegionCallbacks - In the implementation block
@property (nonatomic,readonly) NSMapTable * regionStates;                                        //@synthesize regionStates=_regionStates - In the implementation block
@property (assign,nonatomic) char beingConfigured;                                               //@synthesize beingConfigured=_beingConfigured - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)logCategory;
+(id)sunriseTimeForLocation:(id)arg1 ;
+(id)sunsetTimeForLocation:(id)arg1 ;
+(id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2 ;
+(id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2 ;
+(id)bundleForLocationManager;
+(char)isAccurateLocation:(id)arg1 ;
+(id)_getAlmanacWithLocation:(id)arg1 ;
+(id)findEvent:(id)arg1 withGeo:(id)arg2 ;
+(id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2 ;
+(void)timeZoneISOCountryCodeForCLLocationAsync:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id<HMDCLLocationManager>)locationManager;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)timerDidFire:(id)arg1 ;
-(int)authStatus;
-(void)setAuthStatus:(int)arg1 ;
-(void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deregisterForRegionUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)locationAuthorized;
-(id)initWithLocationManager:(id)arg1 ;
-(void)_startExtractingBatchLocationsForDelegate:(id)arg1 ;
-(NSMutableSet *)batchLocationContexts;
-(void)_stopExtractingBatchLocationsForContext:(id)arg1 ;
-(void)_extractSingleLocationForDelegate:(id)arg1 ;
-(char)_canLocationBeExtracted;
-(void)_notifySingleLocationDelegate:(id)arg1 withLocation:(id)arg2 ;
-(NSHashTable *)singleLocationDelegates;
-(char)beingConfigured;
-(NSMapTable *)pendingRegionMonitoringRequests;
-(NSMapTable *)regionStateDelegatesByRegionIdentifier;
-(NSMapTable *)regionStates;
-(void)setLocationAuthorized:(int)arg1 ;
-(id)_delegateforRegion:(id)arg1 ;
-(NSMapTable *)pendingRegionCallbacks;
-(void)setBeingConfigured:(char)arg1 ;
-(void)_updateExitForRegion:(id)arg1 ;
-(void)_updateEntryForRegion:(id)arg1 ;
-(void)_updateRegionState:(long long)arg1 forRegion:(id)arg2 ;
-(void)_notifySingleLocationDelegatesWithLocation:(id)arg1 ;
-(void)_updateWithLocationAuthorizationStatus:(int)arg1 ;
-(void)_handleDeterminedState:(long long)arg1 forRegion:(id)arg2 ;
-(void)startExtractingBatchLocationsForDelegate:(id)arg1 ;
-(void)stopExtractingBatchLocationsForDelegate:(id)arg1 ;
-(void)startExtractingSingleLocationForDelegate:(id)arg1 ;
-(id)getCurrentLocation;
-(void)beingConfigured:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
