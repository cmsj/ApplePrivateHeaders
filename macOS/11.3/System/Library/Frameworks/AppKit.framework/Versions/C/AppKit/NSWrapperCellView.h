/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSCell;

@interface NSWrapperCellView : NSView {

	NSCell* _cell;
	char _groupRowStyle;

}

@property (assign,getter=isGroupRowStyle,nonatomic) char groupRowStyle;              //@synthesize groupRowStyle=_groupRowStyle - In the implementation block
@property (nonatomic,retain) NSCell * cell;                                          //@synthesize cell=_cell - In the implementation block
+(Class)cellClass;
-(void)dealloc;
-(void)setObjectValue:(id)arg1 ;
-(char)allowsVibrancy;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)wantsDefaultClipping;
-(Class)_animatorClass;
-(void)mouseDown:(id)arg1 ;
-(NSCell *)cell;
-(void)drawRect:(CGRect)arg1 ;
-(void)setCell:(NSCell *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)_setTrackingAreasDirty:(int)arg1 ;
-(int)_trackingAreasDirty;
-(char)isGroupRowStyle;
-(void)setGroupRowStyle:(char)arg1 ;
-(id)_focusInto:(id)arg1 withClip:(char)arg2 ;
-(id)_enclosingTableView;
@end

