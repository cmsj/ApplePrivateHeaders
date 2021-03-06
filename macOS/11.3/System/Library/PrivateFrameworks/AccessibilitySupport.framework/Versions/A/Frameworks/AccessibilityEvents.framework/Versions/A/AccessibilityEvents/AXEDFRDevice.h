/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityEvents/AccessibilityEvents-Structs.h>
#import <libobjc.A.dylib/AXEEventTapListener.h>
#import <libobjc.A.dylib/AXETrackingTouchInputDevice.h>

@protocol AXETrackingTouchInputDeviceDelegate, OS_dispatch_queue;
@class AXETrackingGestureEvent, AXFThrottler, NSObject, NSSet, NSTouch, NSString;

@interface AXEDFRDevice : NSObject <AXEEventTapListener, AXETrackingTouchInputDevice> {

	char _eventCaptureStarted;
	char __changingZoomScale;
	double _synthesizedTapDownUpInterval;
	id<AXETrackingTouchInputDeviceDelegate> _delegate;
	AXETrackingGestureEvent* __previousDFRGestureEvent;
	AXFThrottler* __throttler;
	NSObject*<OS_dispatch_queue> __syntheticEventPostingDispatchQueue;
	NSSet* __currentTouches;
	NSTouch* __currentTrackedTouch;
	double __splitTouchStartDistance;
	CGSize _nativeDisplaySize;

}

@property (assign,nonatomic) CGSize nativeDisplaySize;                                                      //@synthesize nativeDisplaySize=_nativeDisplaySize - In the implementation block
@property (assign,nonatomic) char eventCaptureStarted;                                                      //@synthesize eventCaptureStarted=_eventCaptureStarted - In the implementation block
@property (nonatomic,retain) AXETrackingGestureEvent * _previousDFRGestureEvent;                            //@synthesize _previousDFRGestureEvent=__previousDFRGestureEvent - In the implementation block
@property (nonatomic,retain) AXFThrottler * _throttler;                                                     //@synthesize _throttler=__throttler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _syntheticEventPostingDispatchQueue;              //@synthesize _syntheticEventPostingDispatchQueue=__syntheticEventPostingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSSet * _currentTouches;                                                       //@synthesize _currentTouches=__currentTouches - In the implementation block
@property (nonatomic,retain) NSTouch * _currentTrackedTouch;                                                //@synthesize _currentTrackedTouch=__currentTrackedTouch - In the implementation block
@property (assign,nonatomic) double _splitTouchStartDistance;                                               //@synthesize _splitTouchStartDistance=__splitTouchStartDistance - In the implementation block
@property (assign,nonatomic) char _changingZoomScale;                                                       //@synthesize _changingZoomScale=__changingZoomScale - In the implementation block
@property (nonatomic,readonly) double synthesizedTapDownUpInterval;                                         //@synthesize synthesizedTapDownUpInterval=_synthesizedTapDownUpInterval - In the implementation block
@property (assign,nonatomic,__weak) id<AXETrackingTouchInputDeviceDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<AXETrackingTouchInputDeviceDelegate>)delegate;
-(void)setDelegate:(id<AXETrackingTouchInputDeviceDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSSet *)_currentTouches;
-(AXFThrottler *)_throttler;
-(CGEventRef)eventTapManager:(id)arg1 activelyTappedEvent:(CGEventRef)arg2 type:(unsigned)arg3 withProxy:(CGEventTapProxyRef)arg4 ;
-(id)initWithMinimumEventInterval:(double)arg1 ;
-(void)setNativeDisplaySize:(CGSize)arg1 ;
-(char)eventCaptureStarted;
-(void)setEventCaptureStarted:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)_syntheticEventPostingDispatchQueue;
-(double)synthesizedTapDownUpInterval;
-(char)_isNonSyntheticDFRGestureEvent:(CGEventRef)arg1 ;
-(id)_nonSyntheticDFRGestureNSEventFromCGEvent:(CGEventRef)arg1 ;
-(void)_processNonSyntheticDFRGestureNSEvent:(id)arg1 ;
-(AXETrackingGestureEvent *)_previousDFRGestureEvent;
-(void)set_previousDFRGestureEvent:(AXETrackingGestureEvent *)arg1 ;
-(void)startEventCapture;
-(void)stopEventCapture;
-(void)synthesizeTapAtLocation:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synthesizeTouchDownAtLocation:(CGPoint)arg1 ;
-(void)synthesizeTouchMoveToLocation:(CGPoint)arg1 ;
-(void)synthesizeTouchUpAtLocation:(CGPoint)arg1 ;
-(CGSize)nativeDisplaySize;
-(void)set_throttler:(AXFThrottler *)arg1 ;
-(void)set_syntheticEventPostingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_currentTouches:(NSSet *)arg1 ;
-(NSTouch *)_currentTrackedTouch;
-(void)set_currentTrackedTouch:(NSTouch *)arg1 ;
-(double)_splitTouchStartDistance;
-(void)set_splitTouchStartDistance:(double)arg1 ;
-(char)_changingZoomScale;
-(void)set_changingZoomScale:(char)arg1 ;
@end

