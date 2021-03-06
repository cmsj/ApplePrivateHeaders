/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, NSTimer, NSDate;

@interface LUIProgressBar : NSView {

	NSImage* _emptyLeftCap;
	NSImage* _emptyMiddle;
	NSImage* _emptyRightCap;
	NSImage* _fullLeftCap;
	NSImage* _fullMiddle;
	NSImage* _fullRightCap;
	NSTimer* _updateTimer;
	float _value;
	float _minValue;
	float _maxValue;
	float _currentValue;
	float _step;
	int _progressBarStyle;
	char _drawsBackground;
	char _animates;
	/*^block*/id _animationCompleteBlock;
	NSDate* _endDate;

}

@property (getter=isIndeterminate,readonly) char indeterminate; 
-(void)_updateCurrentValue:(id)arg1 ;
-(int)progressBarStyle;
-(void)setProgressBarStyle:(int)arg1 ;
-(void)dealloc;
-(float)value;
-(void)setValue:(float)arg1 ;
-(char)isIndeterminate;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(float)maxValue;
-(void)setMaxValue:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setDrawsBackground:(char)arg1 ;
-(id)accessibilityRole;
-(char)accessibilityIsIgnored;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(id)accessibilityValue;
-(id)accessibilityValueDescription;
-(id)accessibilityValueAttribute;
-(char)drawsBackground;
-(void)_commonInit;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(void)resetValue;
-(void)setAnimationCompleteCallback:(/*^block*/id)arg1 ;
@end

