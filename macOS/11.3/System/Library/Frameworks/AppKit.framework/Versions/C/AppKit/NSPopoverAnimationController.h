/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSImmediateActionAnimationController.h>

@class NSPopover, NSView, NSString;

@interface NSPopoverAnimationController : NSObject <NSImmediateActionAnimationController> {

	NSPopover* _popover;
	unsigned long long _preferredEdge;
	NSView* _anchorView;
	CGRect _positioningRect;
	id _reserved2;
	unsigned _reservedPopoverFlags : 32;

}

@property (readonly) NSPopover * popover;                           //@synthesize popover=_popover - In the implementation block
@property (assign) unsigned long long preferredEdge;                //@synthesize preferredEdge=_preferredEdge - In the implementation block
@property (__weak) NSView * anchorView;                             //@synthesize anchorView=_anchorView - In the implementation block
@property (assign) CGRect positioningRect;                          //@synthesize positioningRect=_positioningRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)popoverAnimationControllerWithPopover:(id)arg1 ;
-(void)dealloc;
-(NSView *)anchorView;
-(unsigned long long)preferredEdge;
-(void)setAnchorView:(NSView *)arg1 ;
-(void)setPreferredEdge:(unsigned long long)arg1 ;
-(NSPopover *)popover;
-(void)recognizerWillBeginAnimation:(id)arg1 ;
-(void)recognizerDidUpdateAnimation:(id)arg1 ;
-(void)recognizerDidCancelAnimation:(id)arg1 ;
-(void)recognizerDidCompleteAnimation:(id)arg1 ;
-(void)recognizerDidDismissAnimation:(id)arg1 ;
-(void)setPositioningRect:(CGRect)arg1 ;
-(CGRect)positioningRect;
@end

