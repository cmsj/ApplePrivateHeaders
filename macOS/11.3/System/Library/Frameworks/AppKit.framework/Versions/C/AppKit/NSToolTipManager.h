/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMapTable, NSDate, NSTimer, NSWindow, NSToolTip, NSToolTipPanel, NSCustomToolTipDrawView;

@interface NSToolTipManager : NSObject {

	NSMapTable* _toolTipsByView;
	double _toolTipDelay;
	NSDate* _timeToolTipRemovedFromScreen;
	CFRunLoopTimerRef _toolTipDisplayTimer;
	double _currentFadeValue;
	NSTimer* _fadeTimer;
	NSWindow* _lastToolTipWindow;
	NSToolTip* _currentDisplayedNormalToolTip;
	NSToolTipPanel* _normalToolTipPanel;
	NSCustomToolTipDrawView* _normalToolTipDrawView;
	NSToolTip* _currentDisplayedExpansionToolTip;
	NSToolTipPanel* _expansionToolTipPanel;
	NSCustomToolTipDrawView* _expansionToolTipDrawView;

}
+(id)sharedToolTipManager;
+(char)isCurrentMouseLocationAboveWindow:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)abortToolTip;
-(void)windowDidBecomeKeyNotification:(id)arg1 ;
-(id)toolTipTextColor;
-(char)_shouldInstallToolTip:(void*)arg1 ;
-(void)recomputeToolTipsForView:(id)arg1 remove:(char)arg2 add:(char)arg3 ;
-(void)setToolTip:(id)arg1 forView:(id)arg2 cell:(id)arg3 ;
-(id)toolTipForView:(id)arg1 cell:(id)arg2 ;
-(void)orderOutToolTipsImmediately:(char)arg1 ;
-(void)_displayTemporaryToolTipForView:(id)arg1 withString:(id)arg2 ;
-(void)_menuDidBeginTracking:(id)arg1 ;
-(void)setCurrentDisplayedNormalToolTip:(id)arg1 ;
-(void)setCurrentDisplayedExpansionToolTip:(id)arg1 ;
-(void)mouseEnteredToolTip:(id)arg1 inWindow:(id)arg2 withEvent:(id)arg3 ;
-(long long)_addTrackingRect:(CGRect)arg1 andStartToolTipIfNecessary:(char)arg2 view:(id)arg3 owner:(id)arg4 toolTip:(id)arg5 reuseExistingTrackingNum:(char)arg6 ;
-(void)_stopTimerIfRunningForToolTip:(id)arg1 ;
-(void)displayToolTip:(id)arg1 ;
-(void)addTrackingRectForToolTip:(id)arg1 reuseExistingTrackingNum:(char)arg2 ;
-(void)_removeToolTipsForView:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)_checkDisplayDelegate:(id)arg1 ;
-(long long)_setToolTip:(id)arg1 forView:(id)arg2 cell:(id)arg3 rect:(CGRect)arg4 owner:(id)arg5 ownerIsDisplayDelegate:(char)arg6 userData:(void*)arg7 ;
-(id)_findToolTipForView:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)orderOutToolTipForView:(id)arg1 ;
-(void)_removeTrackingRectsForView:(id)arg1 stopTimerIfNecessary:(char)arg2 ;
-(void)_addTrackingRectsForView:(id)arg1 ;
-(void)stopTimer;
-(double)toolTipYOffset;
-(id)toolTipBackgroundColor;
-(CGSize)toolTipContentMargin;
-(id)toolTipAttributes;
-(id)toolTipContentViewWithAttributedString:(id)arg1 location:(CGPoint)arg2 where:(CGPoint)arg3 windowFrame:(CGRect*)arg4 toolTip:(id)arg5 ;
-(CGPoint)onScreenToolTipWindowFrameOriginForToolTip:(id)arg1 windowFrame:(CGRect)arg2 where:(CGPoint)arg3 location:(CGPoint)arg4 ;
-(void)orderOutOnlyNormalToolTip;
-(void)orderOutOnlyExpansionToolTip;
-(id)_newToolTipWindow;
-(void)installContentView:(id)arg1 forToolTip:(id)arg2 toolTipWindow:(id)arg3 isNew:(char)arg4 ;
-(void)_stopFadeTimer;
-(void)addDrawingSubviewForToolTip:(id)arg1 attributedString:(id)arg2 inView:(id)arg3 ;
-(void)startTimer:(double)arg1 userInfo:(id)arg2 ;
-(char)isNormalToolTipVisible;
-(char)isExpansionToolTipVisible;
-(void)viewDidChangeGeometryInWindow:(id)arg1 ;
-(void)fadeToolTip:(id)arg1 ;
-(char)_inQuickDisplayModeForWindow:(id)arg1 ;
-(void)setInitialToolTipDelay:(double)arg1 ;
-(void)_removeTrackingRectForToolTip:(id)arg1 stopTimerIfNecessary:(char)arg2 ;
-(long long)setToolTipForView:(id)arg1 rect:(CGRect)arg2 displayDelegate:(id)arg3 displayInfo:(id)arg4 ;
-(long long)setToolTipForView:(id)arg1 rect:(CGRect)arg2 owner:(id)arg3 userData:(void*)arg4 ;
-(void)setToolTipWithOwner:(id)arg1 forView:(id)arg2 cell:(id)arg3 ;
-(void)removeToolTipForView:(id)arg1 tag:(long long)arg2 ;
-(char)viewHasToolTips:(id)arg1 ;
-(void)removeAllToolTipsForView:(id)arg1 ;
-(void)removeAllToolTipsForView:(id)arg1 withOwner:(id)arg2 ;
-(void)removeAllToolTipsForView:(id)arg1 withDisplayDelegate:(id)arg2 ;
-(void)_drawToolTipBackgroundInView:(id)arg1 ;
-(void)_toolTipTimerFiredWithToolTip:(id)arg1 ;
-(void)_displayTemporaryToolTipForView:(id)arg1 withDisplayDelegate:(id)arg2 displayInfo:(id)arg3 ;
-(void)_getDisplayDelay:(double*)arg1 inQuickMode:(char*)arg2 forView:(id)arg3 ;
@end

