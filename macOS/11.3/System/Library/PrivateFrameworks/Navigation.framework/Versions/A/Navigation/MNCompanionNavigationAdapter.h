/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNNavigationServiceObserver.h>
#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@protocol GEOServerFormattedStepStringFormatter, MNCompanionNavigationDelegate;
@class NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, GEONavigationGuidanceState, GEOCompanionRouteDetails, GEOCompanionRouteStatus, NSArray, NSTimer, MNCompanionNavigationXPCConnection;

@interface MNCompanionNavigationAdapter : NSObject <MNNavigationServiceObserver, MNNavigationSessionObserver> {

	NSString* _destinationName;
	GEOComposedRoute* _route;
	GEOLocation* _lastLocation;
	char _locationUnreliable;
	GEORouteMatch* _routeMatch;
	NSString* _currentRoadName;
	char _guidancePromptsEnabled;
	unsigned long long _displayedStepIndex;
	SCD_Struct_MN6 _positionFromManeuver;
	SCD_Struct_MN6 _positionFromDestination;
	unsigned long long _announcementStage;
	unsigned long long _nextAnnouncementStage;
	double _timeUntilNextAnnouncement;
	GEONavigationGuidanceState* _guidanceState;
	char _isNavigatingInLowGuidance;
	char _isConnectedToCarplay;
	GEOCompanionRouteDetails* _companionRouteDetails;
	GEOCompanionRouteStatus* _companionRouteStatus;
	NSArray* _companionRouteUpdates;
	char _shouldSendRouteWithStatus;
	NSTimer* _coalescedRouteStatusTimer;
	NSTimer* _coalescedRouteUpdatesTimer;
	MNCompanionNavigationXPCConnection* _connection;
	id<GEOServerFormattedStepStringFormatter> _formatter;
	id<MNCompanionNavigationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNCompanionNavigationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id<MNCompanionNavigationDelegate>)delegate;
-(void)setDelegate:(id<MNCompanionNavigationDelegate>)arg1 ;
-(void)_reset;
-(id)initWithDelegate:(id)arg1 ;
-(char)_isInvalidated;
-(void)setIsConnectedToCarplay:(char)arg1 ;
-(void)setIsNavigatingInLowGuidance:(char)arg1 ;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(void)_setRouteMatch:(id)arg1 ;
-(void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 ;
-(void)navigationSessionWillReroute:(id)arg1 ;
-(void)navigationSessionDidCancelReroute:(id)arg1 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5 ;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)navigationSession:(id)arg1 triggerHaptics:(int)arg2 ;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(char)arg2 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)navigationServiceDidSynchronize:(id)arg1 ;
-(void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationService:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4 ;
-(void)navigationService:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)navigationService:(id)arg1 didEnableGuidancePrompts:(char)arg2 ;
-(void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(char)arg8 ;
-(void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 ;
-(void)navigationServiceWillReroute:(id)arg1 ;
-(void)navigationService:(id)arg1 didReroute:(id)arg2 ;
-(void)navigationServiceDidCancelReroute:(id)arg1 ;
-(void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4 ;
-(void)navigationService:(id)arg1 triggerHaptics:(int)arg2 ;
-(void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2 ;
-(void)_setRoute:(id)arg1 traffic:(id)arg2 isTrace:(char)arg3 ;
-(void)_cancelScheduledRouteStatus;
-(void)_cancelScheduledRouteUpdates;
-(void)_scheduleCoalescedRouteStatusUpdate;
-(void)_updateCompanionRouteStatus;
-(void)_scheduleCoalescedRouteUpdates;
-(void)_sendRouteStatus;
-(void)_sendRouteUpdates;
-(void)_sendRouteDetailsAndStatus;
-(void)_markCurrentHapticsAsTriggered;
-(void)_setNavigationState:(int)arg1 ;
-(void)_setLastLocation:(id)arg1 ;
-(void)_setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)_setPositionFromDestination:(SCD_Struct_MN6)arg1 ;
-(void)_setDestinationName:(id)arg1 ;
-(void)_setPositionFromManeuver:(SCD_Struct_MN6)arg1 ;
-(void)_setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2 ;
-(void)_triggerHaptics:(int)arg1 ;
-(void)_setAnnouncementStage:(unsigned long long)arg1 ;
-(void)_setGuidancePromptsEnabled:(char)arg1 ;
-(void)_handleNavigationServiceStopped;
-(void)_reloadRouteFromNavigationService:(id)arg1 ;
-(void)_setRealtimeUpdates:(id)arg1 ;
-(void)_setLocationUnreliable:(char)arg1 ;
@end

