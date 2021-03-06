/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMiDVDItem.h>

@class NSString, _AMiDVDMenu;

@interface _AMiDVDButton : _AMiDVDItem

@property (copy) NSString * buttonShapeName; 
@property (readonly) int buttonType; 
@property (copy) NSString * customAsset; 
@property (copy) NSString * fontColor; 
@property (copy) NSString * fontDropShadow; 
@property (assign) char fontDropShadowEnabled; 
@property (copy) NSString * fontName; 
@property (assign) double fontSize; 
@property (assign) long long horizontalOffset; 
@property (readonly) char isBack; 
@property (readonly) char isFolder; 
@property (readonly) char isForward; 
@property (assign) char isMotionButton; 
@property (readonly) char isMovie; 
@property (readonly) char isSlideshow; 
@property (copy) NSString * label; 
@property (assign) int labelAlignment; 
@property (assign) int labelPosition; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiDVDMenu * parent; 
@property (assign) double scalingFactor; 
@property (assign) char selectionState; 
@property (copy,readonly) NSString * targetFolder; 
@property (copy,readonly) NSString * targetMovie; 
@property (copy,readonly) NSString * targetSlideshow; 
@property (assign) int transitionDirection; 
@property (readonly) double transitionDuration; 
@property (assign) int transitionType; 
@property (assign) long long verticalOffset; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(_AMiDVDMenu *)parent;
-(NSString *)fontName;
-(void)setScalingFactor:(double)arg1 ;
-(double)scalingFactor;
-(double)fontSize;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(int)buttonType;
-(void)setVerticalOffset:(long long)arg1 ;
-(long long)verticalOffset;
-(char)isFolder;
-(NSString *)targetFolder;
-(char)selectionState;
-(void)setSelectionState:(char)arg1 ;
-(char)isMovie;
-(NSString *)customAsset;
-(void)setCustomAsset:(NSString *)arg1 ;
-(NSString *)fontColor;
-(int)labelAlignment;
-(void)setLabelAlignment:(int)arg1 ;
-(int)labelPosition;
-(void)setLabelPosition:(int)arg1 ;
-(long long)horizontalOffset;
-(double)transitionDuration;
-(void)setFontColor:(NSString *)arg1 ;
-(int)transitionDirection;
-(char)isForward;
-(void)setHorizontalOffset:(long long)arg1 ;
-(int)transitionType;
-(void)setTransitionDirection:(int)arg1 ;
-(NSString *)buttonShapeName;
-(void)setButtonShapeName:(NSString *)arg1 ;
-(NSString *)fontDropShadow;
-(void)setFontDropShadow:(NSString *)arg1 ;
-(char)fontDropShadowEnabled;
-(void)setFontDropShadowEnabled:(char)arg1 ;
-(char)isBack;
-(char)isMotionButton;
-(void)setIsMotionButton:(char)arg1 ;
-(char)isSlideshow;
-(NSString *)targetMovie;
-(NSString *)targetSlideshow;
-(void)setTransitionType:(int)arg1 ;
@end

