/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTunnelLocationProjectorDelegate;
#import <Navigation/Navigation-Structs.h>
@class NSTimer, MNLocation, NSDate;

@interface MNTunnelLocationProjector : NSObject {

	id<MNTunnelLocationProjectorDelegate> _delegate;
	NSTimer* _locationUpdateOverdueTimer;
	MNLocation* _lastLocation;
	NSDate* _lastLocationDate;
	double _locationOverdueTimeoutForTunnel;
	double _locationOverdueTimeoutForNotTunnel;
	double _locationOverdueTimeoutForUnknown;
	char _isProjecting;

}

@property (assign,nonatomic,__weak) id<MNTunnelLocationProjectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isProjecting;                                                //@synthesize isProjecting=_isProjecting - In the implementation block
-(void)dealloc;
-(id)init;
-(id<MNTunnelLocationProjectorDelegate>)delegate;
-(void)setDelegate:(id<MNTunnelLocationProjectorDelegate>)arg1 ;
-(void)stop;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_MN5*)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(char)isProjecting;
-(char)_locationIsGoodEnoughToEndProjection:(id)arg1 ;
-(double)_locationOverdueTimeoutForLocation:(id)arg1 ;
-(void)_resetLocationUpdateOverdueWithTimeout:(double)arg1 ;
-(void)_locationUpdateOverdueTimerFired:(id)arg1 ;
-(id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2 ;
@end
