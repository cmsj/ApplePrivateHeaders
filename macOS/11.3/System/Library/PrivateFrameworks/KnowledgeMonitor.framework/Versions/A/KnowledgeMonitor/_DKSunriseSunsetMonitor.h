/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/Versions/A/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_os_log;
@class NSObject, CLLocationManager, NSDictionary, NSString;

@interface _DKSunriseSunsetMonitor : _DKMonitor <CLLocationManagerDelegate> {

	char _enabled;
	char _awaitingLocationAfterDisabledAirplaneMode;
	int _authorizationStatus;
	NSObject*<OS_dispatch_source> _updateTimer;
	unsigned long long _updateInterval;
	CLLocationManager* _manager;
	NSDictionary* _previousDataDictionary;
	NSObject*<OS_os_log> _log;
	SCPreferencesRef _radioPrefs;

}

@property (assign,nonatomic) char enabled;                                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> updateTimer;                   //@synthesize updateTimer=_updateTimer - In the implementation block
@property (assign,nonatomic) unsigned long long updateInterval;                           //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) CLLocationManager * manager;                                 //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSDictionary * previousDataDictionary;                       //@synthesize previousDataDictionary=_previousDataDictionary - In the implementation block
@property (assign,nonatomic) char awaitingLocationAfterDisabledAirplaneMode;              //@synthesize awaitingLocationAfterDisabledAirplaneMode=_awaitingLocationAfterDisabledAirplaneMode - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                     //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
@property (assign) SCPreferencesRef radioPrefs;                                           //@synthesize radioPrefs=_radioPrefs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
-(void)dealloc;
-(id)init;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)start;
-(CLLocationManager *)manager;
-(void)setManager:(CLLocationManager *)arg1 ;
-(void)stop;
-(void)deactivate;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(int)authorizationStatus;
-(void)setAuthorizationStatus:(int)arg1 ;
-(char)isAirplaneModeEnabled;
-(unsigned long long)updateInterval;
-(NSObject*<OS_dispatch_source>)updateTimer;
-(id)loadState;
-(void)saveState;
-(void)setUpdateInterval:(unsigned long long)arg1 ;
-(void)setUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)unprotectedUpdateSunriseSunsetTime:(id)arg1 ;
-(void)respondToTimeChange:(id)arg1 ;
-(id)contextDictionaryWithGeoAlmanac:(id)arg1 authorizationStatus:(int)arg2 ;
-(char)currentSunriseSunsetTimes:(id)arg1 differsFromPreviousTimes:(id)arg2 byInterval:(double)arg3 ;
-(SCPreferencesRef)radioPrefs;
-(char)isAirplaneModeEnabledWithPreferences:(SCPreferencesRef)arg1 ;
-(void)respondToAirplaneModeStatusChanged;
-(NSDictionary *)previousDataDictionary;
-(void)setPreviousDataDictionary:(NSDictionary *)arg1 ;
-(char)awaitingLocationAfterDisabledAirplaneMode;
-(void)setAwaitingLocationAfterDisabledAirplaneMode:(char)arg1 ;
-(void)setRadioPrefs:(SCPreferencesRef)arg1 ;
@end

