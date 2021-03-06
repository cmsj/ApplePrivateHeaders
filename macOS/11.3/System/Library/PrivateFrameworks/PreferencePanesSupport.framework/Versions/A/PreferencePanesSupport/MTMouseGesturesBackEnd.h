/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PreferencePanesSupport.framework/Versions/A/PreferencePanesSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PreferencePanesSupport/PreferencePanesSupport-Structs.h>
@interface MTMouseGesturesBackEnd : NSObject {

	long long _updateDelay;
	unsigned long long _updateBSCounter;
	/*^block*/id _updateBSBlock;

}

@property (assign) unsigned long long updateBSCounter;              //@synthesize updateBSCounter=_updateBSCounter - In the implementation block
@property (assign) long long updateDelay;                           //@synthesize updateDelay=_updateDelay - In the implementation block
@property (readonly) unsigned long long mouseType; 
@property (assign) long long oneFingerDoubleTap; 
@property (assign) long long twoFingerSwipe; 
@property (assign) long long twoFingerDoubleTap; 
@property (assign) long long buttonMode; 
@property (assign) long long scrollMode; 
@property (assign) char momentumScroll; 
@property (assign) double scrollSpeedRaw; 
+(id)sharedInstance;
-(id)init;
-(char)hasCapability:(id)arg1 ;
-(long long)buttonMode;
-(void)setButtonMode:(long long)arg1 ;
-(unsigned long long)mouseType;
-(long long)updateDelay;
-(char)momentumScroll;
-(double)scrollSpeedRaw;
-(long long)twoFingerDoubleTap;
-(void)setMomentumScroll:(char)arg1 ;
-(void)setScrollSpeedRaw:(double)arg1 ;
-(void)setTwoFingerDoubleTap:(long long)arg1 ;
-(void)setUpdateDelay:(long long)arg1 ;
-(unsigned long long)updateBSCounter;
-(void)setUpdateBSCounter:(unsigned long long)arg1 ;
-(void)_setMTMouseIntValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(void)_setMTMouseStringValue:(CFStringRef)arg1 forKey:(CFStringRef)arg2 ;
-(long long)oneFingerDoubleTap;
-(void)setOneFingerDoubleTap:(long long)arg1 ;
-(long long)twoFingerSwipe;
-(void)setTwoFingerSwipe:(long long)arg1 ;
-(long long)scrollMode;
-(void)setScrollMode:(long long)arg1 ;
@end

