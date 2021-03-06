/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSScrubberItemView.h>

@class NSView, NSLayoutConstraint, NSArray;

@interface QLThumbnailScrubberItemView : NSScrubberItemView {

	NSView* _contentView;
	NSView* _dimmingView;
	NSLayoutConstraint* _aspectRatioConstraint;
	NSArray* _fitConstraints;

}

@property (retain) NSView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (retain) NSView * dimmingView;                                    //@synthesize dimmingView=_dimmingView - In the implementation block
@property (retain) NSLayoutConstraint * aspectRatioConstraint;              //@synthesize aspectRatioConstraint=_aspectRatioConstraint - In the implementation block
@property (retain) NSArray * fitConstraints;                                //@synthesize fitConstraints=_fitConstraints - In the implementation block
-(NSArray *)fitConstraints;
-(void)setFitConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(void)setContentAspectRatio:(double)arg1 ;
-(NSView *)dimmingView;
-(void)setDimmingView:(NSView *)arg1 ;
-(NSLayoutConstraint *)aspectRatioConstraint;
-(void)setAspectRatioConstraint:(NSLayoutConstraint *)arg1 ;
@end

