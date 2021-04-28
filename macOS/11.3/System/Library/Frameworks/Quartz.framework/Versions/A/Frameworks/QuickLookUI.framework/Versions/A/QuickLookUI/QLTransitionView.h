/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface QLTransitionView : NSView {

	NSImage* _transitionImage;
	CGRect _transitionFrame;

}

@property (nonatomic,retain) NSImage * transitionImage;              //@synthesize transitionImage=_transitionImage - In the implementation block
@property (assign) CGRect transitionFrame;                           //@synthesize transitionFrame=_transitionFrame - In the implementation block
-(CGRect)transitionFrame;
-(void)setTransitionFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)isOpaque;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTransitionImage:(NSImage *)arg1 ;
-(NSImage *)transitionImage;
@end
