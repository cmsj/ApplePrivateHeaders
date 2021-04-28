/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSWindow.h>
#import <libobjc.A.dylib/LockableFirstResponder.h>

@interface Window : NSWindow <LockableFirstResponder> {

	char _unresizable;
	unsigned long long _firstResponderLockedCount;
	CGSize _savedMinContentSize;
	CGSize _savedMaxContentSize;

}

@property (__weak) id<ExtendedWindowDelegate> delegate; 
@property (assign,getter=isResizable,nonatomic) char resizable; 
-(void)dealloc;
-(id<ExtendedWindowDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<ExtendedWindowDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(char)makeFirstResponder:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)isResizable;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)becomeKeyWindow;
-(void)setResizable:(char)arg1 ;
-(CGPoint)cascadeTopLeftFromPoint:(CGPoint)arg1 ;
-(void)_setFrameAfterMove:(CGRect)arg1 ;
-(void)lockFirstResponder;
-(void)unlockFirstResponder;
-(id)findFrontmostOtherWindowOfWidth:(float)arg1 ;
-(char)canCycle;
-(char)firstResponderIsLocked;
@end
