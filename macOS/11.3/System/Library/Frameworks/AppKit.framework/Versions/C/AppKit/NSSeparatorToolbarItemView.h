/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSTrackingSeparatorToolbarItem, CALayer;

@interface NSSeparatorToolbarItemView : NSView {

	NSTrackingSeparatorToolbarItem* _item;
	char _alignmentSatisfied;
	char _fullHeightDividersDisabled;
	unsigned long long _controlSize;
	unsigned long long _displayMode;
	CALayer* _divider;

}

@property (__weak) NSTrackingSeparatorToolbarItem * item;                     //@synthesize item=_item - In the implementation block
@property (getter=isAlignmentSatisfied) char alignmentSatisfied; 
@property (assign) char fullHeightDividersDisabled; 
@property (assign) unsigned long long controlSize; 
@property (assign) unsigned long long displayMode; 
@property (readonly) double _dividerHeight; 
-(void)dealloc;
-(void)layout;
-(void)setItem:(NSTrackingSeparatorToolbarItem *)arg1 ;
-(NSTrackingSeparatorToolbarItem *)item;
-(void)resetCursorRects;
-(void)_updateDividerRect;
-(double)_dividerHeight;
-(char)isAlignmentSatisfied;
-(void)setAlignmentSatisfied:(char)arg1 ;
-(char)fullHeightDividersDisabled;
-(void)setFullHeightDividersDisabled:(char)arg1 ;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(char)allowsVibrancy;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(char)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2 ;
-(void)pan:(id)arg1 ;
@end

