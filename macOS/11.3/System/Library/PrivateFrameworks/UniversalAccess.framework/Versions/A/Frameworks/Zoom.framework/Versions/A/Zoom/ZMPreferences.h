/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/Frameworks/Zoom.framework/Versions/A/Zoom
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Zoom/Zoom-Structs.h>
@class NSLock, NSTimer, NSMutableSet;

@interface ZMPreferences : NSObject {

	char _isZoomApp;
	char _notificationsDisabled;
	NSLock* _coalesceTimerLock;
	NSTimer* _coalesceSyncTimer;
	NSMutableSet* _coalesceSyncKeys;
	long long _speakItemUnderMouseAfterDelayMode;

}

@property (assign,nonatomic) char notificationsDisabled;                               //@synthesize notificationsDisabled=_notificationsDisabled - In the implementation block
@property (assign,nonatomic) char isZoomApp;                                           //@synthesize isZoomApp=_isZoomApp - In the implementation block
@property (assign,nonatomic) long long uaZoomMode; 
@property (assign,nonatomic) char useKeyboardZoom; 
@property (assign,nonatomic) char useScrollWheelZoom; 
@property (assign,nonatomic) long long scrollWheelModifiers; 
@property (assign,nonatomic) CGPoint windowPosition; 
@property (assign,nonatomic) CGSize windowSize; 
@property (assign,nonatomic) long long windowStyle; 
@property (assign,nonatomic) char followsKeyboardFocus; 
@property (nonatomic,readonly) char windowStaysOnScreen; 
@property (nonatomic,readonly) char cursorMovesInWindow; 
@property (assign,nonatomic) long long cursorType; 
@property (assign,nonatomic) double cursorOpacity; 
@property (assign,nonatomic) double cursorBackgroundColorRed; 
@property (assign,nonatomic) double cursorBackgroundColorGreen; 
@property (assign,nonatomic) double cursorBackgroundColorBlue; 
@property (assign,nonatomic) double cursorForegroundColorRed; 
@property (assign,nonatomic) double cursorForegroundColorGreen; 
@property (assign,nonatomic) double cursorForegroundColorBlue; 
@property (assign,nonatomic) double crosshairSize; 
@property (assign,nonatomic) double crosshairInset; 
@property (assign,nonatomic) double crosshairOpacity; 
@property (assign,nonatomic) double moveStepSize; 
@property (assign,nonatomic) double moveDuration; 
@property (assign,nonatomic) double resizeDuration; 
@property (assign,nonatomic) double resizeStepSize; 
@property (assign,nonatomic) double hotKeyZoomChange; 
@property (assign,nonatomic) double scrollZoomChange; 
@property (assign,nonatomic) long long splitScreenStyle; 
@property (assign,nonatomic) double zoomFactor; 
@property (assign,nonatomic) double desiredZoomFactor; 
@property (assign,nonatomic) double poroZoomFactor; 
@property (assign,nonatomic) char smoothing; 
@property (assign,nonatomic) char invertColors; 
@property (assign,nonatomic) double borderWidth; 
@property (nonatomic,readonly) double refreshThreadHz; 
@property (assign,nonatomic) long long speakItemUnderMouseAfterDelayMode;              //@synthesize speakItemUnderMouseAfterDelayMode=_speakItemUnderMouseAfterDelayMode - In the implementation block
@property (assign,nonatomic) double speakItemUnderMouseAfterDelayTime; 
@property (assign,nonatomic) char pressOnReleaseOffMode; 
@property (assign,nonatomic) char temporaryDetachModeEnabled; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)sync;
-(double)borderWidth;
-(CGSize)windowSize;
-(void)setWindowSize:(CGSize)arg1 ;
-(void)postNotification;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(void)setInvertColors:(char)arg1 ;
-(char)invertColors;
-(void)setCursorType:(long long)arg1 ;
-(CGPoint)windowPosition;
-(long long)cursorType;
-(void)_tryPostNotificationForKey:(id)arg1 ;
-(void)postNotificationForKey:(id)arg1 ;
-(void)coalesceSyncTimerTick:(id)arg1 ;
-(long long)windowStyle;
-(void)setWindowStyle:(long long)arg1 ;
-(long long)splitScreenStyle;
-(void)setSplitScreenStyle:(long long)arg1 ;
-(void)_sanityCheckPrefs;
-(double)moveStepSize;
-(double)moveDuration;
-(double)resizeStepSize;
-(double)resizeDuration;
-(double)refreshThreadHz;
-(double)hotKeyZoomChange;
-(double)scrollZoomChange;
-(long long)uaZoomMode;
-(void)setUaZoomMode:(long long)arg1 ;
-(char)useKeyboardZoom;
-(void)setUseKeyboardZoom:(char)arg1 ;
-(char)useScrollWheelZoom;
-(void)setUseScrollWheelZoom:(char)arg1 ;
-(long long)scrollWheelModifiers;
-(void)setScrollWheelModifiers:(long long)arg1 ;
-(void)setWindowPosition:(CGPoint)arg1 ;
-(double)poroZoomFactor;
-(void)setPoroZoomFactor:(double)arg1 ;
-(double)desiredZoomFactor;
-(void)setDesiredZoomFactor:(double)arg1 ;
-(char)smoothing;
-(void)setSmoothing:(char)arg1 ;
-(char)followsKeyboardFocus;
-(void)setFollowsKeyboardFocus:(char)arg1 ;
-(char)windowStaysOnScreen;
-(char)cursorMovesInWindow;
-(double)cursorOpacity;
-(void)setCursorOpacity:(double)arg1 ;
-(double)cursorBackgroundColorRed;
-(void)setCursorBackgroundRed:(double)arg1 ;
-(double)cursorBackgroundColorGreen;
-(void)setCursorBackgroundGreen:(double)arg1 ;
-(double)cursorBackgroundColorBlue;
-(void)setCursorBackgroundBlue:(double)arg1 ;
-(double)cursorForegroundColorRed;
-(void)setCursorForegroundRed:(double)arg1 ;
-(double)cursorForegroundColorGreen;
-(void)setCursorForegroundGreen:(double)arg1 ;
-(double)cursorForegroundColorBlue;
-(void)setCursorForegroundBlue:(double)arg1 ;
-(double)crosshairSize;
-(void)setCrossshairSize:(double)arg1 ;
-(double)crosshairInset;
-(void)setCrosshairInset:(double)arg1 ;
-(double)crosshairOpacity;
-(void)setCrosshairOpacity:(double)arg1 ;
-(char)pressOnReleaseOffMode;
-(void)setPressOnReleaseOffMode:(char)arg1 ;
-(char)temporaryDetachModeEnabled;
-(void)setTemporaryDetachModeEnabled:(char)arg1 ;
-(double)speakItemUnderMouseAfterDelayTime;
-(void)setSpeakItemUnderMouseAfterDelayTime:(double)arg1 ;
-(void)postPendingNotifications;
-(char)isZoomApp;
-(void)setIsZoomApp:(char)arg1 ;
-(char)notificationsDisabled;
-(void)setNotificationsDisabled:(char)arg1 ;
-(long long)speakItemUnderMouseAfterDelayMode;
-(void)setSpeakItemUnderMouseAfterDelayMode:(long long)arg1 ;
@end

