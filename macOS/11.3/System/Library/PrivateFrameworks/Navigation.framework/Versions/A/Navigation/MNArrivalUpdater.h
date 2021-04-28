/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNArrivalRegionTimerDelegate.h>

@class MNObserverHashTable, GEOComposedRoute, MNLocation, NSDate, NSMutableArray, NSString;

@interface MNArrivalUpdater : NSObject <MNArrivalRegionTimerDelegate> {

	MNObserverHashTable* _safeDelegate;
	GEOComposedRoute* _route;
	MNLocation* _lastLocation;
	char _useLegacyArrival;
	unsigned long long _arrivalState;
	unsigned long long _arrivalLegIndex;
	NSDate* _arrivalDate;
	double _closestDistanceToWaypoint;
	NSMutableArray* _timeoutRegions;

}

@property (nonatomic,readonly) char isInPreArrivalRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)updateForRoute:(id)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)arrivalRegionTimerDidFire:(id)arg1 ;
-(id)initWithRoute:(id)arg1 useLegacyArrival:(char)arg2 ;
-(char)isInPreArrivalRegion;
-(char)allowDepartureForLocation:(id)arg1 ;
-(void)updateForDepartureFromWaypoint;
-(char)_shouldUseNewArrivalLogic;
-(char)_legacyCheckArrivalForLocation:(id)arg1 ;
-(char)_checkArrival:(id)arg1 forLocation:(id)arg2 ;
-(char)_checkPreArrival:(id)arg1 forLocation:(id)arg2 ;
-(double)_distanceToEndOfLeg:(id)arg1 fromLocation:(id)arg2 ;
-(char)_legacyCheckDrivingArrivalForLocation:(id)arg1 ;
-(char)_legacyCheckNonDrivingArrivalForLocation:(id)arg1 ;
@end
