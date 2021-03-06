/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>
#import <libobjc.A.dylib/NSTouchBarColorPickerViewControllerDelegate.h>

@class NSMutableArray, NSString, NSView, NSColor;

@interface NSColorPanel : NSPanel <NSTouchBarColorPickerViewControllerDelegate> {

	id _colorSwatch;
	id _accessoryContainerView;
	id _colorWell;
	NSMutableArray* _pickersWithLoadedViews;
	id _magnifyButton;
	id _middleView;
	id _opacitySlider;
	id _opacityText;
	id _opacityView;
	id _modalButtons;
	id _pickerView;
	id _customViewsList;
	id _customPickerList;
	id _currViewObject;
	id _bottomConstraint;
	id _accessoryView;
	SEL _action;
	CGSize _minColorPanelSize;
	CGSize _maxColorPanelSize;
	id _accessoryContainerViewHeight;
	id _opacityViewHeight;
	unsigned long long _colorSettingSuppressionCount;
	id _resizeDimple;
	char _handlingOpacityMoveAction;
	char _ignoreConstraints;
	char _continuous;
	char _stillInitializing;
	char _hasModalAppearance;
	id _opacityTextController;
	id _observedWindow;
	id _observedAppearanceTarget;
	id _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isUsingModalAppearance) char usingModalAppearance; 
@property (assign) id target; 
@property (assign) SEL action; 
@property (retain) NSView * accessoryView; 
@property (getter=isContinuous) char continuous; 
@property (assign) char showsAlpha; 
@property (assign) long long mode; 
@property (copy) NSColor * color; 
@property (readonly) double alpha; 
+(char)sharedColorPanelExists;
+(id)sharedColorPanel;
+(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
+(char)ignoreModifierKeysWhileDragging;
+(char)dragColor:(id)arg1 withEvent:(id)arg2 fromView:(id)arg3 ;
+(char)loadsExternalColorPickers;
+(void)warmupExternalColorPickersIfNecessary;
+(char)_dragColor:(id)arg1 withEvent:(id)arg2 fromView:(id)arg3 source:(id)arg4 ;
+(void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)setPickerMask:(unsigned long long)arg1 ;
+(void)setPickerMode:(long long)arg1 ;
+(void)setLoadsExternalColorPickers:(char)arg1 ;
+(id)keyPathsForValuesAffectingTouchBar;
-(void)dealloc;
-(char)conformsToProtocol:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setMode:(long long)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)mode;
-(void)_endLiveResize;
-(id)__target;
-(SEL)__action;
-(long long)__numberOfVisibleRowsInColorSwatch;
-(long long)__numberOfRowsToToggleVisibleInColorSwatch;
-(void)__setNumberOfRowsToToggleVisibleInColorSwatch:(long long)arg1 ;
-(void)resignKeyWindow;
-(void)setContinuous:(char)arg1 ;
-(char)isContinuous;
-(id)_startingWindowForSendAction:(SEL)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(void)setHidesOnDeactivate:(char)arg1 ;
-(NSView *)accessoryView;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)becomeKeyWindow;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(double)alpha;
-(void)_selectFirstKeyView;
-(void)_cancelKey:(id)arg1 ;
-(void)_setShowAlpha:(char)arg1 andForce:(char)arg2 ;
-(void)attachColorList:(id)arg1 ;
-(void)detachColorList:(id)arg1 ;
-(id)_toolTipForColorPicker:(id)arg1 ;
-(id)_colorPickers;
-(void)_switchViewForToolbarItem:(id)arg1 ;
-(void)_colorPanelDidLoad;
-(void)_middleViewFrameChanged:(id)arg1 ;
-(void)_storeNewColorInColorWell:(id)arg1 ;
-(void)_loadColorPickers;
-(void)_withColorSettingDisabled:(/*^block*/id)arg1 ;
-(void)_setTitleFixedPointWindowFrame:(CGSize)arg1 display:(char)arg2 animate:(char)arg3 ;
-(void)_validateOpacitySlider;
-(char)_determinesMinSizeFromAccessoryView:(id)arg1 ;
-(CGSize)_newLegalSizeFromSize:(CGSize)arg1 force:(char)arg2 roundDirection:(long long)arg3 ;
-(id)_keyViewPrecedingAccesoryView;
-(id)_keyViewFollowingAccessoryView;
-(char)isViewOfPickerLoaded:(id)arg1 ;
-(void)setViewOfPickerIsLoaded:(id)arg1 ;
-(id)_provideNewViewFor:(id)arg1 initialViewRequest:(char)arg2 ;
-(void)_switchToPicker:(id)arg1 ;
-(void)_saveMode;
-(void)_resetOpacity:(id)arg1 andForceSetColor:(char)arg2 ;
-(void)_changeMinColorPanelSizeByDelta:(CGSize)arg1 compareWithOldMinSize:(char)arg2 oldMinSize:(CGSize)arg3 setWindowFrame:(char)arg4 ;
-(void)_stopModal:(id)arg1 ;
-(id)_keyViewPrecedingModalButtons;
-(id)_keyViewFollowingModalButtons;
-(void)setUsingModalAppearance:(char)arg1 ;
-(char)isUsingModalAppearance;
-(void)_setUtilityWindow:(char)arg1 ;
-(void)_setUseModalAppearance:(char)arg1 ;
-(void)_forceSendAction:(char)arg1 notification:(char)arg2 firstResponder:(char)arg3 ;
-(id)_keyViewFollowingOpacityViews;
-(void)_appendColorPicker:(id)arg1 ;
-(long long)_savedMode;
-(double)_insertionOrderForPicker:(id)arg1 ;
-(char)_isCurrentColorPicker:(id)arg1 ;
-(CGSize)_panelSizeExcludingToolbar;
-(void)_setMinPickerContentSize:(CGSize)arg1 ;
-(void)_sizeWindowForPicker:(id)arg1 ;
-(id)_keyViewPrecedingPickerViews;
-(id)_keyViewFollowingPickerViews;
-(char)_allowsColorSetting;
-(void)_forceSetColor:(id)arg1 ;
-(void)_sendActionAndNotification;
-(void)_switchToAppropriateModeForColorIfNecessary:(id)arg1 ;
-(void)changeWindowFrameSizeByDelta:(CGSize)arg1 display:(char)arg2 animate:(char)arg3 ;
-(id)_pickerView;
-(id)_colorSwatch;
-(long long)colorMask;
-(id)setColorMask:(long long)arg1 ;
-(void)_resetOpacity:(id)arg1 ;
-(void)_changeMinColorPanelSizeByDelta:(CGSize)arg1 setWindowFrame:(char)arg2 ;
-(CGRect)_adjustedFrameFromDefaults:(CGRect)arg1 ;
-(CGRect)_adjustedFrameForSaving:(CGRect)arg1 ;
-(void)insertNewline:(id)arg1 ;
-(void)_timedAdjustTextControl:(id)arg1 ;
-(void)setShowsAlpha:(char)arg1 ;
-(char)showsAlpha;
-(void)_removeColorPicker:(id)arg1 ;
-(void)_setupButtonImageAndToolTips;
-(void)_pinViews:(id)arg1 ;
-(void)_unpinViews:(id)arg1 ;
-(id)_pinViews:(id)arg1 resizeFlagsToLeaveAlone:(long long)arg2 ;
-(void)_unpinViews:(id)arg1 resizeMasks:(id)arg2 ;
-(id)_arrayForPartialPinningFromArray:(id)arg1 ;
-(void)_setNumVisibleSwatchRows:(long long)arg1 ;
-(void)_syncSwatchSizeToSavedNumVisibleRows;
-(void)_magnify:(id)arg1 ;
-(void)_set:(id)arg1 ;
-(void)_colorWellAcceptedColor:(id)arg1 ;
-(id)makeTouchBar;
-(void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 ;
@end

