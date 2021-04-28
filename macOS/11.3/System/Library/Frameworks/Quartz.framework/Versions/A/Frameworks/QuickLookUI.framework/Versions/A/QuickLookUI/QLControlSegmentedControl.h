/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSSegmentedControl.h>

@class NSMutableArray;

@interface QLControlSegmentedControl : NSSegmentedControl {

	NSMutableArray* _controlSegments;

}
-(void)updateSegment:(id)arg1 forWindow:(id)arg2 ;
-(id)segmentForEvent:(id)arg1 ;
-(double)MediaUI_slice;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(void)addSegment:(id)arg1 ;
-(void)removeSegment:(id)arg1 ;
-(void)segmentedControlPressed:(id)arg1 ;
@end
