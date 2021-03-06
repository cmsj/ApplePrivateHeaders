/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSBannerView;

@interface _NSCornerView : NSView {

	NSBannerView* _backgroundView;

}
-(id)initWithCoder:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(char)allowsVibrancy;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)enclosingScrollView;
-(void)viewDidMoveToSuperview;
-(void)_finishedMakingConnections;
-(int)_vibrancyBlendMode;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(unsigned long long)_vibrantBlendingStyleForSubtree;
-(char)_drawingEndSeparator;
-(void)_addOrRemoveBlurViewIfNecessary;
-(CGRect)fillRect;
-(void)_invalidateHeaderDependentDrawing;
@end

