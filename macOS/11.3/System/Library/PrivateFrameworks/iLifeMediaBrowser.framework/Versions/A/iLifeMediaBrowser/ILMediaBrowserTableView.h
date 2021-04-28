/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AppKit/NSTableView.h>

@class NSMutableArray, NSColor;

@interface ILMediaBrowserTableView : NSTableView {

	NSMutableArray* _ILMBAlternatingRowBackgroundColorsArray;
	NSColor* _ILMBCellHighlightColor;
	Class _tableHeaderCellClass;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)copy:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)needsPanelToBecomeKey;
-(id)menuForEvent:(id)arg1 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(id)_highlightColorForCell:(id)arg1 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(id)arrayWithIndexes:(id)arg1 ;
-(id)_alternatingRowBackgroundColors;
-(void)selectNone:(id)arg1 ;
-(void)setTableHeaderCellClass:(Class)arg1 ;
-(void)setCustomHighlightColor:(id)arg1 ;
-(long long)clickedIndex;
-(void)setAlternatingRowBackgroundColorsArray:(id)arg1 ;
@end
