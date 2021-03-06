/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AccessibilityVisuals/AXVView.h>

@class NSColor;

@interface AXVHighlightView : AXVView {

	char _frameSpansAllScreens;

}

@property (nonatomic,retain) NSColor * backgroundColor; 
@property (nonatomic,retain) NSColor * borderColor; 
@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) char frameSpansAllScreens;              //@synthesize frameSpansAllScreens=_frameSpansAllScreens - In the implementation block
-(id)init;
-(NSColor *)borderColor;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)backgroundColor;
-(void)setBorderColor:(NSColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(double)borderWidth;
-(void)setFrameSpansAllScreens:(char)arg1 ;
-(char)frameSpansAllScreens;
@end

