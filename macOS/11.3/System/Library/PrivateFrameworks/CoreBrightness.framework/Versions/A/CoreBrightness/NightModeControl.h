/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSMutableDictionary, SunriseSunsetProvider, NSDictionary, NSMutableArray, NSObject, NSString;

@interface NightModeControl : NSObject {

	NSMutableDictionary* _properties;
	SunriseSunsetProvider* _sunriseSunsetProvider;
	int _sunriseSunsetInfoQueryTimeout;
	NSDictionary* _sunriseSunsetInfo;
	NSMutableArray* _supportObjs;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _nextTransitionTimer;
	NSObject*<OS_dispatch_source> _transitionTimer;
	NSObject*<OS_dispatch_source> _aggdUpdateTimer;
	BLRAggdInfo _aggdKeysInfo;
	int _algoState;
	float _transitionLength;
	float _transitionLengthActual;
	float _transitionsTimesCoeff;
	float _transitionRate;
	float _minFactor;
	float _maxFactor;
	NMFactorState _factorState;
	CFTimeZoneRef _currentTimeZone;
	double _sunsetAbsolute;
	double _sunsetPreviousAbsolute;
	double _sunriseAbsolute;
	double _sunrisePreviousAbsolute;
	double _offTransitionTimeAbsoluteUnrestricted;
	double _offTransitionTimeAbsoluteUnrestrictedPrev;
	char _transitionTimesValid;
	char _isDaylight;
	int _currentScheduledTransitionType;
	double _displayOffTimestamp;
	double _untilNexTransitionTimestamp;
	float _inactivityTimeout;
	char _checkInactivity;
	char _displayOff;
	int _logLevel;
	/*^block*/id _callbackBlock;
	SCD_Struct_Ni26 _status;
	SCD_Struct_Ni25 _backupSchedule;
	char _statusUpdated;
	NSString* _currentSunriseKey;
	NSString* _currentSunsetKey;
	NSString* _previousSunriseKey;
	NSString* _previousSunsetKey;
	NSString* _nextSunriseKey;
	NSString* _nextSunsetKey;
	NSString* _isDaylightKey;
	int _notifyUserAboutScheduleCounter;
	CFUserNotificationRef _enableNotification;
	char _notificationInProgress;
	char _revertToSunriseSunset;
	CFStringRef _userName;

}
-(void)dealloc;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setMode:(int)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(void)switchToUser:(CFStringRef)arg1 ;
-(void)saveStatusToPrefs:(id)arg1 ;
-(void)updateSunriseSunsetInfo:(id)arg1 ;
-(void)reevaluateCurrentState;
-(void)timeZoneChanged;
-(void)clockChanged;
-(id)copyStatusDictionaryFromPrefs;
-(id)copyLowPowerModeState;
-(void)updateLowPowerModeState:(id)arg1 ;
-(char)parseStatusDictionary:(id)arg1 intoStruct:(SCD_Struct_Ni29*)arg2 shouldUpdatePrefs:(char*)arg3 ;
-(id)copyDictionaryFromStatus:(SCD_Struct_Ni29*)arg1 ;
-(void)updateStatusDictionaryWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)getPropertyForKey:(id)arg1 ;
-(void)tearDownAllTimers;
-(void)aggdKeysUpdate;
-(void)scheduleAggdKeysUpdate;
-(void)reevaluateCurrentStateWithFactorFadeOption:(float)arg1 ;
-(void)updateOptionTimestamp:(double)arg1 ;
-(void)setSchedule:(id)arg1 ;
-(void)enableBlueLightReduction:(char)arg1 withOption:(int)arg2 ;
-(void)setNightModeFactor:(float)arg1 ;
-(void)setAlgoState:(int)arg1 ;
-(void)displayAlertInteractive:(char)arg1 ;
-(void)cancelTransition;
-(void)transitionTimerHandler;
-(void)setNightModeFactor:(float)arg1 withFadePeriod:(float)arg2 ;
-(char)updateTransitionTimesFromSunriseSunset:(double)arg1 ;
-(char)updateTransitionTimesFromSchedule:(double)arg1 ;
-(void)initiateTransitionTo:(float)arg1 andRampLength:(float)arg2 ;
-(void)cancelSchedule;
-(void)updateTransitionTimes:(double)arg1 ;
-(void)initiateRestrictedMaxTransition;
-(void)scheduleNextTransition:(double)arg1 withType:(int)arg2 ;
-(void)initiateFullMinTransition;
-(void)setSunPermitted:(char)arg1 ;
-(void)updateSunriseSunsetBackup;
-(void)retrieveSunriseSunsetTimesFromBackup:(double)arg1 ;
-(void)cancelAggdPeriodicUpdate;
-(id)copyTimeStringWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3 ;
-(id)initWithSupportObject:(id)arg1 queue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)addSupportObject:(id)arg1 ;
-(void)removeSupportObject:(id)arg1 ;
-(void)initiateFullMaxTransition;
@end
