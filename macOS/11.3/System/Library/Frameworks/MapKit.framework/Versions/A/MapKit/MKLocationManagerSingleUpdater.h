/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKLocationManagerOperation.h>

@class MKLocationManager, NSTimer, NSString;

@interface MKLocationManagerSingleUpdater : NSObject <MKLocationManagerObserver, MKLocationManagerOperation> {

	/*^block*/id _handler;
	char _active;
	double _desiredAccuracy;
	double _timeout;
	MKLocationManagerSingleUpdater* _selfReference;
	MKLocationManager* _locationManager;
	NSTimer* _timeoutTimer;
	double _maxLocationAge;

}

@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double timeout;                        //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)timeout;
-(void)start;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)cancel;
-(void)setTimeout:(double)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(/*^block*/id)arg3 timeout:(double)arg4 ;
-(id)initWithLocationManager:(id)arg1 desiredAccuracy:(double)arg2 handler:(/*^block*/id)arg3 timeout:(double)arg4 maxLocationAge:(double)arg5 ;
-(void)handleTimeout:(id)arg1 ;
@end

