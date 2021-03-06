/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSSliderAccessoryContainer.h>
#import <libobjc.A.dylib/NSUserInterfaceCompression.h>

@class NSSlider, NSStackView, NSString, NSSliderAccessory, NSLayoutConstraint, NSUserInterfaceCompressionOptions;

@interface _NSSliderTouchBarItemView : NSView <NSSliderAccessoryContainer, NSUserInterfaceCompression> {

	id _autounbinder;
	NSSlider* _slider;
	id _target;
	SEL _action;
	NSStackView* _layoutView;
	NSString* _label;
	NSSliderAccessory* _minimumValueAccessory;
	NSSliderAccessory* _maximumValueAccessory;
	double _valueAccessoryWidth;
	double _minimumSliderWidth;
	double _maximumSliderWidth;
	char _modelCollapsed;
	char _presentationCollapsed;
	char _showsValueAccessories;
	char _showsLabel;
	NSLayoutConstraint* _minimumSliderWidthConstraint;
	NSLayoutConstraint* _maximumSliderWidthConstraint;

}

@property (assign) double value; 
@property (assign) double minimumValue; 
@property (assign) double maximumValue; 
@property (assign) double incrementValue; 
@property (readonly) NSSliderAccessory * minimumValueAccessory; 
@property (readonly) NSSliderAccessory * maximumValueAccessory; 
@property (readonly) char _hasStepBehaviorContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSStackView * _layoutView;                                                      //@synthesize layoutView=_layoutView - In the implementation block
@property (assign) char _modelCollapsed;                                                             //@synthesize modelCollapsed=_modelCollapsed - In the implementation block
@property (assign) char _presentationCollapsed;                                                      //@synthesize presentationCollapsed=_presentationCollapsed - In the implementation block
@property (assign) char _showsLabel;                                                                 //@synthesize showsLabel=_showsLabel - In the implementation block
@property (assign) char _showsValueAccessories;                                                      //@synthesize showsValueAccessories=_showsValueAccessories - In the implementation block
@property (readonly) NSEdgeInsets _layoutEdgeInsets; 
@property (readonly) char _labelIsHidden; 
@property (readonly) char _minValueAccessoryIsHidden; 
@property (readonly) char _sliderIsHidden; 
@property (readonly) char _maxValueAccessoryIsHidden; 
@property (retain) NSSlider * slider; 
@property (__weak) id target;                                                                        //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                                                       //@synthesize action=_action - In the implementation block
@property (copy) NSString * label;                                                                   //@synthesize label=_label - In the implementation block
@property (retain) NSSliderAccessory * minimumValueAccessory;                                        //@synthesize minimumValueAccessory=_minimumValueAccessory - In the implementation block
@property (retain) NSSliderAccessory * maximumValueAccessory;                                        //@synthesize maximumValueAccessory=_maximumValueAccessory - In the implementation block
@property (assign) double valueAccessoryWidth;                                                       //@synthesize valueAccessoryWidth=_valueAccessoryWidth - In the implementation block
@property (assign) double minimumSliderWidth;                                                        //@synthesize minimumSliderWidth=_minimumSliderWidth - In the implementation block
@property (assign) double maximumSliderWidth;                                                        //@synthesize maximumSliderWidth=_maximumSliderWidth - In the implementation block
@property (getter=isCollapsed) char collapsed; 
@property (copy,readonly) NSUserInterfaceCompressionOptions * activeCompressionOptions; 
+(id)keyPathsForValuesAffecting_layoutEdgeInsets;
+(id)keyPathsForValuesAffecting_labelIsHidden;
+(id)keyPathsForValuesAffecting_minValueAccessoryIsHidden;
+(id)keyPathsForValuesAffecting_sliderIsHidden;
+(id)keyPathsForValuesAffecting_maxValueAccessoryIsHidden;
+(id)keyPathsForValuesAffectingCollapsed;
+(char)automaticallyNotifiesObserversOfCollapsed;
+(id)keyPathsForValuesAffecting_hasStepBehaviorContext;
-(oneway void)release;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(double)value;
-(void)setAction:(SEL)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setValue:(double)arg1 ;
-(char)isCollapsed;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(Class)_animatorClass;
-(void)setSlider:(NSSlider *)arg1 ;
-(NSSlider *)slider;
-(id)_autounbinder;
-(void)sendAction;
-(id)animationForKey:(id)arg1 ;
-(void)compressWithPrioritizedCompressionOptions:(id)arg1 ;
-(CGSize)minimumSizeWithPrioritizedCompressionOptions:(id)arg1 ;
-(NSUserInterfaceCompressionOptions *)activeCompressionOptions;
-(void)_commonInit;
-(void)setCollapsed:(char)arg1 ;
-(NSSliderAccessory *)minimumValueAccessory;
-(void)setMinimumValueAccessory:(NSSliderAccessory *)arg1 ;
-(NSSliderAccessory *)maximumValueAccessory;
-(void)setMaximumValueAccessory:(NSSliderAccessory *)arg1 ;
-(void)_incrementValue:(char)arg1 ;
-(void)_sliderWillBeginTracking;
-(void)_sliderDidEndTracking;
-(void)set_showsLabel:(char)arg1 ;
-(void)set_showsValueAccessories:(char)arg1 ;
-(void)_loadViewHierarchy;
-(char)_labelIsHidden;
-(char)_minValueAccessoryIsHidden;
-(char)_maxValueAccessoryIsHidden;
-(void)_sliderDidChange:(id)arg1 ;
-(void)_sliderDidCancelTracking;
-(id)_displayImageForImage:(id)arg1 ;
-(void)_minValueAccessoryDidFire:(id)arg1 ;
-(void)_maxValueAccessoryDidFire:(id)arg1 ;
-(void)set_modelCollapsed:(char)arg1 ;
-(void)set_presentationCollapsed:(char)arg1 ;
-(NSEdgeInsets)_layoutEdgeInsets;
-(char)_sliderIsHidden;
-(double)valueAccessoryWidth;
-(void)setValueAccessoryWidth:(double)arg1 ;
-(char)_modelCollapsed;
-(char)_presentationCollapsed;
-(NSStackView *)_layoutView;
-(char)_showsLabel;
-(char)_showsValueAccessories;
-(double)minimumSliderWidth;
-(void)setMinimumSliderWidth:(double)arg1 ;
-(double)maximumSliderWidth;
-(void)setMaximumSliderWidth:(double)arg1 ;
-(char)_hasStepBehaviorContext;
-(double)minimumValue;
-(void)setMinimumValue:(double)arg1 ;
-(double)maximumValue;
-(void)setMaximumValue:(double)arg1 ;
-(double)incrementValue;
-(void)setIncrementValue:(double)arg1 ;
@end

