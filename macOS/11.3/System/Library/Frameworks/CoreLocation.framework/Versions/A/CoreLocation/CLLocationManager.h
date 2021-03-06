/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;
	char _allowsAlteredAccessoryLocations;

}

@property (assign,nonatomic) char privateMode; 
@property (nonatomic,readonly) char locationServicesAvailable; 
@property (nonatomic,readonly) char locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) char supportInfo; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,getter=isDynamicAccuracyReductionEnabled,nonatomic) char dynamicAccuracyReductionEnabled; 
@property (assign,nonatomic) char allowsAlteredAccessoryLocations;                                                                         //@synthesize allowsAlteredAccessoryLocations=_allowsAlteredAccessoryLocations - In the implementation block
@property (nonatomic,readonly) char _limitsPrecision; 
@property (nonatomic,readonly) int _authorizationStatus; 
@property (getter=isAuthorizedForPreciseLocation,nonatomic,readonly) char authorizedForPreciseLocation; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) long long accuracyAuthorization; 
@property (getter=isAuthorizedForWidgetUpdates,nonatomic,readonly) char authorizedForWidgetUpdates; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,readonly) char locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) char pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) char allowsBackgroundLocationUpdates; 
@property (assign,nonatomic) char showsBackgroundLocationIndicator; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) char headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,copy,readonly) NSSet * monitoredRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedBeaconConstraints; 
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(void)resetLocationWarningsWithAuthorization:(id)arg1 ;
+(char)locationServicesEnabled:(char)arg1 ;
+(char)significantLocationChangeMonitoringAvailable;
+(char)isMonitoringAvailableForClass:(Class)arg1 ;
+(char)regionMonitoringAvailable;
+(char)regionMonitoringEnabled;
+(char)isRangingAvailable;
+(char)_checkAndExerciseAuthorizationForBundle:(id)arg1 error:(id*)arg2 ;
+(char)deferredLocationUpdatesAvailable;
+(char)isPeerRangingAvailable;
+(id)_archivedAuthorizationDecisionsWithError:(id*)arg1 ;
+(id)_applyArchivedAuthorizationDecisions:(id)arg1 ;
+(void)setAuthorizationStatus:(char)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundle:(id)arg3 ;
+(void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundleIdentifier:(id)arg3 ;
+(void)setTemporaryAuthorizationGranted:(char)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setTemporaryAuthorizationGranted:(char)arg1 forBundle:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(char)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(char)arg1 forBundle:(id)arg2 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(char)dumpLogsWithMessage:(id)arg1 ;
+(char)bundleSupported:(id)arg1 ;
+(unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(void)setStatusBarIconEnabled:(char)arg1 forLocationEntityClass:(unsigned long long)arg2 ;
+(char)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1 ;
+(unsigned long long)entityClassesForLocationDictionary:(id)arg1 ;
+(char)isLocationActiveForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(char)hasUsedBackgroundLocationServices:(id)arg1 ;
+(id)sharedManager;
+(int)authorizationStatus;
+(int)_authorizationStatus;
+(char)locationServicesEnabled;
+(unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(char)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(char)arg1 forLocationDictionary:(id)arg2 ;
+(char)locationServicesCapable;
+(char)headingAvailable;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(void)setAuthorizationStatus:(char)arg1 forBundle:(id)arg2 ;
+(void)setLocationServicesEnabled:(char)arg1 ;
+(char)shutdownDaemon;
+(char)mapCorrectionAvailable;
+(id)appsUsingLocationWithInfo;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2 ;
+(char)_checkAndExerciseAuthorizationForBundleID:(id)arg1 error:(id*)arg2 ;
+(void)setLocationServicesEnabled:(char)arg1 withAuthorization:(id)arg2 ;
-(double)headingFilter;
-(char)allowsAlteredAccessoryLocations;
-(void)setAllowsAlteredAccessoryLocations:(char)arg1 ;
-(char)pausesLocationUpdatesAutomatically;
-(void)setPausesLocationUpdatesAutomatically:(char)arg1 ;
-(char)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(char)arg1 ;
-(char)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(char)arg1 ;
-(char)isAuthorizedForWidgetUpdates;
-(NSSet *)rangedRegions;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 silo:(id)arg4 ;
-(void)onLocationRequestTimeout;
-(void)onRangingRequestTimeout;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)onClientEventLocation:(id)arg1 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(void)onClientEventHeading:(id)arg1 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)onClientEventError:(id)arg1 ;
-(void)onClientEventRegion:(id)arg1 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)onClientEventPeerRanging:(id)arg1 ;
-(void)onClientEventPeerRangingRequestProcessed:(id)arg1 ;
-(void)onClientEventPeerRangingError:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)onClientEventPlaceInferenceError:(id)arg1 ;
-(void)onClientEventPlaceInferenceResult:(id)arg1 ;
-(void)callPlaceInferenceHandlerWithResult:(id)arg1 error:(id)arg2 ;
-(void)resumeLocationUpdates;
-(void)pauseLocationUpdates:(char)arg1 ;
-(void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 limitingBundleIdentifier:(id)arg2 delegate:(id)arg3 onQueue:(id)arg4 ;
-(void)setSupportInfo:(char)arg1 ;
-(char)supportInfo;
-(void)startUpdatingLocationWithPrompt;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)disallowDeferredLocationUpdates;
-(void)onEventAppStatus;
-(void)startAppStatusUpdates;
-(void)stopAppStatusUpdates;
-(void)startTechStatusUpdates;
-(void)stopTechStatusUpdates;
-(void)_startMonitoringSignificantLocationChangesOfDistance:(double)arg1 withPowerBudget:(int)arg2 ;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(double)maximumRegionMonitoringDistance;
-(void)startRangingBeaconsInRegion:(id)arg1 ;
-(void)stopRangingBeaconsInRegion:(id)arg1 ;
-(void)startRangingBeaconsSatisfyingConstraint:(id)arg1 ;
-(void)stopRangingBeaconsSatisfyingConstraint:(id)arg1 ;
-(NSSet *)rangedBeaconConstraints;
-(void)respondToRangingFromPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)startRangingToPeers:(id)arg1 intervalSeconds:(unsigned long long)arg2 ;
-(void)stopRangingToPeers:(id)arg1 ;
-(void)resetApps;
-(id)appsUsingLocation;
-(id)appsUsingLocationWithDetails;
-(id)technologiesInUse;
-(void)_requestTemporaryFullAccuracyWithUsageDescription:(id)arg1 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 ;
-(char)isDynamicAccuracyReductionEnabled;
-(char)_isGroundAltitudeEnabled;
-(void)_setGroundAltitudeEnabled:(char)arg1 ;
-(char)_isFusionInfoEnabled;
-(void)_startLeechingVisits;
-(id)_startPlaceInferencesCommonLogic:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchContinuousPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopFetchingContinuousPlaceInferences;
-(void)_updateVLLocalizationResult:(id)arg1 ;
-(void)_updateARSessionState:(unsigned long long)arg1 ;
-(void)_updateVIOEstimation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(long long)activityType;
-(CLLocation *)location;
-(void)setPurpose:(NSString *)arg1 ;
-(int)authorizationStatus;
-(void)stopMonitoringVisits;
-(void)startMonitoringVisits;
-(void)setDesiredAccuracy:(double)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(int)_authorizationStatus;
-(void)setActivityType:(long long)arg1 ;
-(char)locationServicesEnabled;
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(double)desiredAccuracy;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(NSSet *)monitoredRegions;
-(CLHeading *)heading;
-(NSString *)purpose;
-(double)expectedGpsUpdateInterval;
-(char)isAuthorizedForPreciseLocation;
-(char)headingAvailable;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(void)dismissHeadingCalibrationDisplay;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(id)_initWithDelegate:(id)arg1 onQueue:(id)arg2 ;
-(long long)accuracyAuthorization;
-(int)headingOrientation;
-(void)setHeadingOrientation:(int)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(char)_limitsPrecision;
-(void)setPrivateMode:(char)arg1 ;
-(void)markAsHavingReceivedLocation;
-(void)requestAlwaysAuthorization;
-(char)locationServicesApproved;
-(void)setHeadingFilter:(double)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(void)_setFusionInfoEnabled:(char)arg1 ;
-(void)requestLocation;
-(void)requestWhenInUseAuthorization;
-(void)requestStateForRegion:(id)arg1 ;
-(void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CLClientRef)internalClient;
-(void)startMonitoringSignificantLocationChanges;
-(void)stopMonitoringSignificantLocationChanges;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(char)locationServicesAvailable;
-(char)privateMode;
-(void)_fetchPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)setIsActuallyAWatchKitExtension:(char)arg1 ;
-(void)requestRangingToPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)startRangingFromPeers:(id)arg1 ;
-(void)stopRangingFromPeers:(id)arg1 ;
-(void)registerAsLocationClient;
-(void)setDynamicAccuracyReductionEnabled:(char)arg1 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

