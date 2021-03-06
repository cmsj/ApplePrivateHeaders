/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/_MKWiFiObserverDelegate.h>
#import <libobjc.A.dylib/MKLocationProviderDelegate.h>

@protocol MKLocationProvider, MNLocationRecorder;
@class NSHashTable, CLLocation, NSMutableArray, NSTimer, GEOLocationShifter, CLHeading, NSLock, geo_isolater, _MKWiFiObserver, NSError, GEOLocation, NSBundle, NSString;

@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, _MKWiFiObserverDelegate, MKLocationProviderDelegate> {

	id<MKLocationProvider> _locationProvider;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _headingObservers;
	CLLocation* _lastLocation;
	CLLocation* _lastGoodLocation;
	double _lastLocationUpdateTime;
	char _isLastLocationStale;
	char _lastLocationPushed;
	char _trackingLocation;
	char _trackingHeading;
	id<MNLocationRecorder> _locationRecorder;
	double _applicationResumeTime;
	double _applicationSuspendTime;
	double _headingUpdateTime;
	double _locationAccuracyUpdateTime;
	double _locationUpdateStartTime;
	char _isReceivingAccurateLocations;
	NSMutableArray* _waitForAccurateLocationsHandlers;
	NSTimer* _waitForAccurateLocationsTimer;
	double _lastLocationReportTime;
	GEOLocationShifter* _locationShifter;
	CLHeading* _throttledHeading;
	CLHeading* _heading;
	NSTimer* _headingThrottlingTimer;
	/*^block*/id _networkActivity;
	char _enabled;
	char _useCourseForHeading;
	double _lastVehicleHeading;
	double _lastVehicleSpeed;
	double _lastVehicleHeadingUpdateTime;
	double _lastVehicleSpeedUpdateTime;
	int _consecutiveOutOfCourseCount;
	double _navCourse;
	/*^block*/id _locationCorrector;
	double _minimumLocationUpdateInterval;
	char _continuedAfterBecomingInactive;
	char _suspended;
	NSMutableArray* _recentLocationUpdateIntervals;
	NSLock* _lastLocationLock;
	NSLock* _observersLock;
	int _preciseLocationAuthorizationState;
	char _temporaryPreciseLocationAuthorizationPromptShown;
	geo_isolater* _authorizedForPreciseLocationIsolater;
	_MKWiFiObserver* _wifiObserver;
	char _hasCustomDesiredAccuracy;
	char _continuesWhileInactive;
	char _logStartStopLocationUpdates;
	NSError* _locationError;

}

@property (nonatomic,readonly) int lastLocationSource; 
@property (nonatomic,retain) id<MKLocationProvider> locationProvider; 
@property (nonatomic,copy) id locationCorrector;                                                                                           //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (assign,nonatomic) char logStartStopLocationUpdates;                                                                             //@synthesize logStartStopLocationUpdates=_logStartStopLocationUpdates - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                                                //@synthesize enabled=_enabled - In the implementation block
@property (getter=isLocationServicesAuthorizationNeeded,nonatomic,readonly) char locationServicesAuthorizationNeeded; 
@property (nonatomic,readonly) char isLocationServicesAvailable; 
@property (nonatomic,readonly) char isLocationServicesPossiblyAvailable; 
@property (nonatomic,readonly) char isLocationServicesEnabled; 
@property (nonatomic,readonly) char isLocationServicesApproved; 
@property (nonatomic,readonly) char isLocationServicesDenied; 
@property (nonatomic,readonly) char isLocationServicesRestricted; 
@property (nonatomic,readonly) char isHeadingServicesAvailable; 
@property (nonatomic,readonly) char isAuthorizedForPreciseLocation; 
@property (nonatomic,readonly) char isTemporaryPreciseLocationAuthorizationPromptShown; 
@property (nonatomic,readonly) char isWiFiEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (nonatomic,readonly) double headingUpdateTimeInterval; 
@property (nonatomic,readonly) GEOLocation * currentLocation; 
@property (nonatomic,readonly) GEOLocation * gridSnappedCurrentLocation; 
@property (nonatomic,readonly) GEOLocation * courseCorrectedLocation; 
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (nonatomic,readonly) CLLocation * lastGoodLocation;                                                                              //@synthesize lastGoodLocation=_lastGoodLocation - In the implementation block
@property (nonatomic,readonly) char isLastLocationStale;                                                                                   //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) NSError * locationError;                                                                                    //@synthesize locationError=_locationError - In the implementation block
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) char matchInfoEnabled; 
@property (assign,nonatomic) char fusionInfoEnabled; 
@property (nonatomic,readonly) CLLocation * lastProviderLocation; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) char useCourseForHeading;                                                                                     //@synthesize useCourseForHeading=_useCourseForHeading - In the implementation block
@property (nonatomic,readonly) CLHeading * heading;                                                                                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) CLHeading * throttledHeading;                                                                                 //@synthesize throttledHeading=_throttledHeading - In the implementation block
@property (nonatomic,copy) id networkActivity;                                                                                             //@synthesize networkActivity=_networkActivity - In the implementation block
@property (nonatomic,retain) id<MNLocationRecorder> locationRecorder;                                                                      //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) double navigationCourse;                                                                                    //@synthesize navCourse=_navCourse - In the implementation block
@property (assign,nonatomic) double minimumLocationUpdateInterval;                                                                         //@synthesize minimumLocationUpdateInterval=_minimumLocationUpdateInterval - In the implementation block
@property (assign,nonatomic) char continuesWhileInactive;                                                                                  //@synthesize continuesWhileInactive=_continuesWhileInactive - In the implementation block
@property (getter=wasLastLocationPushed,nonatomic,readonly) char lastLocationPushed;                                                       //@synthesize lastLocationPushed=_lastLocationPushed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLocationManager;
+(void)setCanMonitorWiFiStatus:(char)arg1 ;
+(id)timeoutError;
-(void)dealloc;
-(id)init;
-(void)_suspend;
-(void)setEnabled:(char)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(char)isEnabled;
-(void)reset;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(char)isWiFiEnabled;
-(char)isLocationServicesEnabled;
-(double)desiredAccuracy;
-(CLLocation *)lastLocation;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(CLHeading *)heading;
-(GEOLocation *)currentLocation;
-(char)hasLocation;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(double)expectedGpsUpdateInterval;
-(char)isAuthorizedForPreciseLocation;
-(void)setLocationProvider:(id<MKLocationProvider>)arg1 ;
-(id)initWithCLLocationManager:(id)arg1 ;
-(void)_useDefaultCoreLocationProvider;
-(void)setLocationRecorder:(id<MNLocationRecorder>)arg1 ;
-(id<MKLocationProvider>)locationProvider;
-(char)isLocationServicesApproved;
-(char)isWiFiDisabledBlockingLocation;
-(char)isLocationServicesDenied;
-(char)isLocationServicesRestricted;
-(char)isLocationServicesAvailable;
-(char)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(void)_syncLocationProviderWithTracking;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)setThrottledHeading:(CLHeading *)arg1 ;
-(CLHeading *)throttledHeading;
-(void)_reportHeadingSuccess;
-(char)_isTimeToResetOnResume;
-(void)resetAfterResumeIfNecessary;
-(char)continuesWhileInactive;
-(void)_setTrackingLocation:(char)arg1 ;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(void)_reportLocationReset;
-(void)_setIsReceivingAccurateLocations:(char)arg1 ;
-(char)isLocationServicesPossiblyAvailable;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1 ;
-(char)matchInfoEnabled;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(char)fusionInfoEnabled;
-(void)setFusionInfoEnabled:(char)arg1 ;
-(double)timeScale;
-(void)dismissHeadingCalibrationDisplay;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(int)lastLocationSource;
-(char)_shouldAllowLocationUpdateInterval:(double)arg1 ;
-(id<MNLocationRecorder>)locationRecorder;
-(void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2 ;
-(void)_reportLocationSuccess;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(id)observersDescription;
-(char)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)_waitForAccurateLocationsTimerFired:(id)arg1 ;
-(void)_setTrackingHeading:(char)arg1 ;
-(void)wiFiObserverDidChangeEnabled:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(char)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)setLocationCorrector:(id)arg1 ;
-(char)isLocationServicesAuthorizationNeeded;
-(char)isHeadingServicesAvailable;
-(char)isTemporaryPreciseLocationAuthorizationPromptShown;
-(CLLocation *)lastGoodLocation;
-(CLLocation *)lastProviderLocation;
-(double)headingUpdateTimeInterval;
-(GEOLocation *)gridSnappedCurrentLocation;
-(GEOLocation *)courseCorrectedLocation;
-(void)setContinuesWhileInactive:(char)arg1 ;
-(void)_reportHeadingFailureWithError:(id)arg1 ;
-(void)pushLocation:(id)arg1 ;
-(void)listenForLocationUpdates:(id)arg1 ;
-(void)stopListeningForLocationUpdates:(id)arg1 ;
-(void)waitForAccurateLocationWithTimeout:(double)arg1 handler:(/*^block*/id)arg2 ;
-(id)singleLocationUpdateWithHandler:(/*^block*/id)arg1 ;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 ;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 timeout:(double)arg3 ;
-(id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(/*^block*/id)arg2 timeout:(double)arg3 maxLocationAge:(double)arg4 ;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(void)startVehicleSpeedUpdate;
-(void)stopVehicleSpeedUpdate;
-(void)startVehicleHeadingUpdate;
-(void)stopVehicleHeadingUpdate;
-(char)isLastLocationStale;
-(NSError *)locationError;
-(id)networkActivity;
-(void)setNetworkActivity:(id)arg1 ;
-(char)useCourseForHeading;
-(void)setUseCourseForHeading:(char)arg1 ;
-(double)navigationCourse;
-(id)locationCorrector;
-(char)wasLastLocationPushed;
-(double)minimumLocationUpdateInterval;
-(void)setMinimumLocationUpdateInterval:(double)arg1 ;
-(char)logStartStopLocationUpdates;
-(void)setLogStartStopLocationUpdates:(char)arg1 ;
@end

