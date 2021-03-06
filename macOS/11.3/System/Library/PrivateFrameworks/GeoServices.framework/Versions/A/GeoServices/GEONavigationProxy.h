/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOServerFormattedStepStringFormatter;
#import <GeoServices/GeoServices-Structs.h>
@class NSXPCConnection, NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, NSData, NSArray, GEONameInfo, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEONavigationGuidanceState;

@interface GEONavigationProxy : NSObject {

	NSXPCConnection* _navdConnection;
	int _navigationStartedToken;
	char _hasNavigationStartedToken;
	NSString* _destinationName;
	GEOComposedRoute* _route;
	GEOLocation* _lastLocation;
	char _locationUnreliable;
	GEORouteMatch* _routeMatch;
	NSString* _currentRoadName;
	char _guidancePromptsEnabled;
	NSData* _activeRouteDetailsData;
	NSArray* _rideSelections;
	unsigned long long _stepIndex;
	unsigned long long _displayedStepIndex;
	GEONameInfo* _stepNameInfo;
	GEOCoarseLocationLatLng _positionFromSign;
	GEOCoarseLocationLatLng _positionFromManeuver;
	GEOCoarseLocationLatLng _positionFromDestination;
	unsigned long long _announcementStage;
	unsigned long long _nextAnnouncementStage;
	double _timeUntilNextAnnouncement;
	GEONavigationRouteSummary* _routeSummary;
	GEONavigationRouteTransitSummary* _transitRouteSummary;
	GEONavigationGuidanceState* _guidanceState;
	int _navigationVoiceVolume;
	char _isNavigatingInLowGuidance;
	char _isConnectedToCarplay;
	id<GEOServerFormattedStepStringFormatter> _formatter;

}

@property (nonatomic,retain) id<GEOServerFormattedStepStringFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(void)dealloc;
-(id<GEOServerFormattedStepStringFormatter>)formatter;
-(void)setFormatter:(id<GEOServerFormattedStepStringFormatter>)arg1 ;
-(void)stop;
-(void)setLastLocation:(id)arg1 ;
-(void)setDestinationName:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)setRouteMatch:(id)arg1 ;
-(void)setLocationUnreliable:(char)arg1 ;
-(void)setGuidancePromptsEnabled:(char)arg1 ;
-(void)setIsConnectedToCarplay:(char)arg1 ;
-(void)_closeNavdConnection;
-(void)_clearState;
-(void)_sendRouteSummary;
-(void)_openNavdConnection;
-(void)setNavigationState:(int)arg1 ;
-(void)_sendGuidanceState;
-(void)_sendCurrentRoadName;
-(void)_sendActiveRouteDetailsData;
-(void)_sendRideSelections;
-(void)_sendStepIndex;
-(void)_sendStepNameInfo;
-(void)_sendPositionFromSign;
-(void)_sendPositionFromManeuver;
-(void)_sendPositionFromDestination;
-(void)_sendNavigationVoiceVolume;
-(void)setCurrentRoadName:(id)arg1 ;
-(void)_sendTransitSummary;
-(void)startWithDestinationName:(id)arg1 ;
-(void)setNavigationSessionState:(unsigned long long)arg1 transportType:(int)arg2 navigationType:(int)arg3 ;
-(void)setActiveRouteDetailsData:(id)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setStepNameInfo:(id)arg1 ;
-(void)setClusteredSectionSelectedRideFromRoute:(id)arg1 ;
-(void)setPositionFromSign:(GEOCoarseLocationLatLng)arg1 ;
-(void)setPositionFromManeuver:(GEOCoarseLocationLatLng)arg1 ;
-(void)setPositionFromDestination:(GEOCoarseLocationLatLng)arg1 ;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2 ;
-(void)setNavigationVoiceVolume:(int)arg1 ;
-(void)setIsNavigatingInLowGuidance:(char)arg1 ;
-(void)triggerHaptics:(int)arg1 ;
@end

