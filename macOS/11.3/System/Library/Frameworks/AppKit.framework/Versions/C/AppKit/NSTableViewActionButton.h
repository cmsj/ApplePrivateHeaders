/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <libobjc.A.dylib/NSAccessibilityButton.h>

@class NSColor, NSTableViewRowAction, NSTextField, NSImageView, NSString, NSImage;

@interface NSTableViewActionButton : NSControl <NSAccessibilityButton> {

	NSColor* _backgroundColor;
	NSTableViewRowAction* _rowAction;
	CGSize _requiredSize;
	NSTextField* _label;
	NSImageView* _imageView;
	char _isHighlighted;
	double _continuousAlignment;
	unsigned long long _maskedCornersMask;
	double _cornerRadius;

}

@property (getter=isHighlighted) char highlighted;                    //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (copy) NSColor * backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (retain) NSTableViewRowAction * rowAction;                  //@synthesize rowAction=_rowAction - In the implementation block
@property (assign) CGSize requiredSize;                               //@synthesize requiredSize=_requiredSize - In the implementation block
@property (assign) double continuousAlignment;                        //@synthesize continuousAlignment=_continuousAlignment - In the implementation block
@property (copy) NSString * title; 
@property (copy) NSImage * image; 
@property (assign) unsigned long long maskedCornersMask;              //@synthesize maskedCornersMask=_maskedCornersMask - In the implementation block
@property (assign) double cornerRadius;                               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesInvalidatingDisplay;
+(id)keyPathsForValuesInvalidatingLayout;
-(void)dealloc;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)layout;
-(NSString *)title;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)isFlipped;
-(void)updateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(NSImage *)image;
-(NSColor *)backgroundColor;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityRole;
-(id)accessibilityLabel;
-(char)isHighlighted;
-(char)isAccessibilityElement;
-(double)cornerRadius;
-(char)accessibilityPerformPress;
-(char)wantsLayer;
-(char)acceptsFirstMouse:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)maskedCornersMask;
-(SCD_Struct_NS45)layoutStateForBounds:(CGRect)arg1 ;
-(double)_alignedOriginForWidth:(double)arg1 inset:(double)arg2 inRect:(CGRect)arg3 ;
-(double)continuousAlignment;
-(void)setContinuousAlignment:(double)arg1 ;
-(NSTableViewRowAction *)rowAction;
-(void)setRowAction:(NSTableViewRowAction *)arg1 ;
-(CGSize)requiredSize;
-(void)setRequiredSize:(CGSize)arg1 ;
-(void)setMaskedCornersMask:(unsigned long long)arg1 ;
@end

