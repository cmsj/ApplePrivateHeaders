/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <libobjc.A.dylib/AXFMouseDelegate.h>

@class AXFMouseCursorImage, NSTimer, NSString;

@interface _AXFMouseHardware : NSObject <AXFMouseDelegate> {

	CGEventSourceRef __eventSource;
	char _accumulateClickCount;
	char _keepCursorImageSynchronizedWithSystem;
	unsigned __cgsConnectionID;
	unsigned __currentCursorSeed;
	unsigned __currentSystemCursorSeed;
	AXFMouseCursorImage* _cursorImage;
	long long _currentDownButton;
	unsigned long long __currentDownButtonClickCount;
	unsigned long long __currentModifierFlags;
	NSTimer* __cursorTypeUpdateTimer;
	double __cursorScaleCache;
	CGPoint __lastMouseButtonPressLocation;

}

@property (nonatomic,retain) AXFMouseCursorImage * cursorImage;                            //@synthesize cursorImage=_cursorImage - In the implementation block
@property (assign,nonatomic) long long currentDownButton;                                  //@synthesize currentDownButton=_currentDownButton - In the implementation block
@property (assign,nonatomic) unsigned _cgsConnectionID;                                    //@synthesize _cgsConnectionID=__cgsConnectionID - In the implementation block
@property (assign,nonatomic) unsigned long long _currentDownButtonClickCount;              //@synthesize _currentDownButtonClickCount=__currentDownButtonClickCount - In the implementation block
@property (assign,nonatomic) unsigned long long _currentModifierFlags;                     //@synthesize _currentModifierFlags=__currentModifierFlags - In the implementation block
@property (assign,nonatomic) unsigned _currentCursorSeed;                                  //@synthesize _currentCursorSeed=__currentCursorSeed - In the implementation block
@property (assign,nonatomic) unsigned _currentSystemCursorSeed;                            //@synthesize _currentSystemCursorSeed=__currentSystemCursorSeed - In the implementation block
@property (nonatomic,retain) NSTimer * _cursorTypeUpdateTimer;                             //@synthesize _cursorTypeUpdateTimer=__cursorTypeUpdateTimer - In the implementation block
@property (assign,nonatomic) double _cursorScaleCache;                                     //@synthesize _cursorScaleCache=__cursorScaleCache - In the implementation block
@property (assign,nonatomic) CGPoint _lastMouseButtonPressLocation;                        //@synthesize _lastMouseButtonPressLocation=__lastMouseButtonPressLocation - In the implementation block
@property (assign,nonatomic) CGPoint currentLocation; 
@property (assign,nonatomic) double cursorScale; 
@property (assign,nonatomic) char keepCursorImageSynchronizedWithSystem;                   //@synthesize keepCursorImageSynchronizedWithSystem=_keepCursorImageSynchronizedWithSystem - In the implementation block
@property (nonatomic,readonly) CGSize cursorImageSize; 
@property (assign,nonatomic) char accumulateClickCount;                                    //@synthesize accumulateClickCount=_accumulateClickCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_cursorImageIfChanged;
-(void)_mouseSettingsChanged:(id)arg1 ;
-(void)_updateCursorScaleCacheAndPostKVO:(char)arg1 ;
-(double)_cursorScaleCache;
-(void)set_cursorTypeUpdateTimer:(NSTimer *)arg1 ;
-(NSTimer *)_cursorTypeUpdateTimer;
-(void)_updateCursorTimer;
-(void)set_currentDownButtonClickCount:(unsigned long long)arg1 ;
-(unsigned)_currentCursorSeed;
-(void)set_currentCursorSeed:(unsigned)arg1 ;
-(unsigned)_currentSystemCursorSeed;
-(char)accumulateClickCount;
-(unsigned long long)_currentDownButtonClickCount;
-(CGPoint)_lastMouseButtonPressLocation;
-(void)set_lastMouseButtonPressLocation:(CGPoint)arg1 ;
-(void)_pressButton:(long long)arg1 count:(unsigned long long)arg2 withModifiers:(unsigned long long)arg3 markupHandler:(/*^block*/id)arg4 ;
-(void)_releaseButton:(long long)arg1 count:(unsigned long long)arg2 withModifiers:(unsigned long long)arg3 markupHandler:(/*^block*/id)arg4 ;
-(char)_shouldDelayBetweenMouseDownAndUp;
-(void)moveToLocation:(CGPoint)arg1 eventType:(unsigned long long)arg2 markupHandler:(/*^block*/id)arg3 ;
-(void)moveToLocation:(CGPoint)arg1 delta:(CGSize)arg2 eventType:(unsigned long long)arg3 markupHandler:(/*^block*/id)arg4 ;
-(void)_postEventRef:(CGEventRef)arg1 markupHandler:(/*^block*/id)arg2 ;
-(unsigned long long)_buttonPressCountForAction:(long long)arg1 ;
-(void)performMouseAction:(long long)arg1 atPoint:(CGPoint)arg2 markupHandler:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)scrollWheelByDelta:(CGPoint)arg1 unit:(unsigned)arg2 markupHandler:(/*^block*/id)arg3 ;
-(void)set_currentModifierFlags:(unsigned long long)arg1 ;
-(void)setCurrentDownButton:(long long)arg1 ;
-(void)set_cursorScaleCache:(double)arg1 ;
-(void)setSystemCursorType:(unsigned long long)arg1 ;
-(void)pressButton:(long long)arg1 ;
-(void)performMouseAction:(long long)arg1 atPoint:(CGPoint)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)scrollWheelByDelta:(CGPoint)arg1 unit:(unsigned)arg2 ;
-(CGSize)cursorImageSize;
-(void)set_cgsConnectionID:(unsigned)arg1 ;
-(void)set_currentSystemCursorSeed:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(CGEventSourceRef)_eventSource;
-(unsigned long long)_currentModifierFlags;
-(CGPoint)currentLocation;
-(void)setCurrentLocation:(CGPoint)arg1 ;
-(void)setCursorType:(int)arg1 ;
-(void)setKeepCursorImageSynchronizedWithSystem:(char)arg1 ;
-(double)cursorScale;
-(void)setCursorImage:(AXFMouseCursorImage *)arg1 ;
-(AXFMouseCursorImage *)cursorImage;
-(void)setCursorScale:(double)arg1 ;
-(char)keepCursorImageSynchronizedWithSystem;
-(unsigned)_cgsConnectionID;
-(void)hideCursor;
-(void)moveToLocation:(CGPoint)arg1 ;
-(void)moveToLocation:(CGPoint)arg1 delta:(CGSize)arg2 eventType:(unsigned long long)arg3 ;
-(void)showCursor;
-(void)clickButton:(long long)arg1 count:(unsigned long long)arg2 withModifiers:(unsigned long long)arg3 ;
-(void)setAccumulateClickCount:(char)arg1 ;
-(void)pressButton:(long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)releaseButton:(long long)arg1 ;
-(void)clickButton:(long long)arg1 count:(unsigned long long)arg2 ;
-(void)moveToLocation:(CGPoint)arg1 markupHandler:(/*^block*/id)arg2 ;
-(long long)currentDownButton;
-(void)pressButton:(long long)arg1 withModifiers:(unsigned long long)arg2 markupHandler:(/*^block*/id)arg3 ;
-(void)releaseButton:(long long)arg1 markupHandler:(/*^block*/id)arg2 ;
-(void)moveToLocation:(CGPoint)arg1 delta:(CGSize)arg2 markupHandler:(/*^block*/id)arg3 ;
-(void)clickButton:(long long)arg1 count:(unsigned long long)arg2 withModifiers:(unsigned long long)arg3 markupHandler:(/*^block*/id)arg4 ;
-(long long)_buttonForAction:(long long)arg1 ;
-(void)scrollWheelByDelta:(CGPoint)arg1 unit:(unsigned)arg2 atLocation:(CGPoint)arg3 markupHandler:(/*^block*/id)arg4 ;
@end

