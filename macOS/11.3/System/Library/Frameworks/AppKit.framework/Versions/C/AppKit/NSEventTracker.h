/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSEvent;

@interface NSEventTracker : NSObject {

	char _wantsEventCoalescing;
	char _wantsPeriodicCallbacks;
	char _wantsKeyboardEvents;
	unsigned long long _deviceID;
	unsigned long long _modifierFlags;
	unsigned long long _phase;
	NSEvent* _currentEvent;

}

@property (retain) NSEvent * currentEvent;                        //@synthesize currentEvent=_currentEvent - In the implementation block
@property (assign) unsigned long long deviceID;                   //@synthesize deviceID=_deviceID - In the implementation block
@property (assign) unsigned long long phase;                      //@synthesize phase=_phase - In the implementation block
@property (assign) unsigned long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (assign) char wantsEventCoalescing;                     //@synthesize wantsEventCoalescing=_wantsEventCoalescing - In the implementation block
@property (assign) char wantsPeriodicCallbacks;                   //@synthesize wantsPeriodicCallbacks=_wantsPeriodicCallbacks - In the implementation block
@property (assign) char wantsKeyboardEvents;                      //@synthesize wantsKeyboardEvents=_wantsKeyboardEvents - In the implementation block
-(void)dealloc;
-(unsigned long long)deviceID;
-(unsigned long long)phase;
-(unsigned long long)modifierFlags;
-(NSEvent *)currentEvent;
-(void)setWantsPeriodicCallbacks:(char)arg1 ;
-(void)setWantsEventCoalescing:(char)arg1 ;
-(void)trackEvent:(id)arg1 usingHandler:(/*^block*/id)arg2 ;
-(char)wantsEventCoalescing;
-(char)wantsPeriodicCallbacks;
-(char)wantsKeyboardEvents;
-(void)setWantsKeyboardEvents:(char)arg1 ;
-(void)setCurrentEvent:(NSEvent *)arg1 ;
-(void)setDeviceID:(unsigned long long)arg1 ;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setModifierFlags:(unsigned long long)arg1 ;
@end

