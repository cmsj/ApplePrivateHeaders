/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/RolloverTrackingButton.h>

@class NSColor, NSImage;

@interface RolloverImageButton : RolloverTrackingButton {

	char _allowsVibrancy;
	NSColor* _rolloverColor;
	NSColor* _alternateColor;
	NSColor* _rolloverBackgroundColor;
	NSColor* _alternateBackgroundColor;
	NSImage* _rolloverImage;
	NSImage* _focusRingMask;

}

@property (nonatomic,retain) NSColor * backgroundColor; 
@property (nonatomic,retain) NSColor * rolloverColor;                         //@synthesize rolloverColor=_rolloverColor - In the implementation block
@property (nonatomic,retain) NSColor * alternateColor;                        //@synthesize alternateColor=_alternateColor - In the implementation block
@property (nonatomic,retain) NSColor * rolloverBackgroundColor;               //@synthesize rolloverBackgroundColor=_rolloverBackgroundColor - In the implementation block
@property (nonatomic,retain) NSColor * alternateBackgroundColor;              //@synthesize alternateBackgroundColor=_alternateBackgroundColor - In the implementation block
@property (nonatomic,retain) NSImage * rolloverImage;                         //@synthesize rolloverImage=_rolloverImage - In the implementation block
@property (nonatomic,retain) NSImage * focusRingMask;                         //@synthesize focusRingMask=_focusRingMask - In the implementation block
@property (assign,nonatomic) char allowsVibrancy;                             //@synthesize allowsVibrancy=_allowsVibrancy - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)allowsVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)backgroundColor;
-(void)setCornerRadius:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(double)cornerRadius;
-(void)_windowChangedKeyState;
-(void)setAllowsVibrancy:(char)arg1 ;
-(void)drawFocusRingMask;
-(void)_setAttributes;
-(id)_modifierColor;
-(id)_modifierBackgroundColor;
-(char)shouldUseRolloverAppearance;
-(void)setRolloverImage:(NSImage *)arg1 ;
-(void)setFocusRingMask:(NSImage *)arg1 ;
-(NSColor *)rolloverColor;
-(void)setRolloverColor:(NSColor *)arg1 ;
-(NSColor *)alternateColor;
-(void)setAlternateColor:(NSColor *)arg1 ;
-(NSColor *)rolloverBackgroundColor;
-(void)setRolloverBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)alternateBackgroundColor;
-(void)setAlternateBackgroundColor:(NSColor *)arg1 ;
-(NSImage *)rolloverImage;
-(NSImage *)focusRingMask;
@end

