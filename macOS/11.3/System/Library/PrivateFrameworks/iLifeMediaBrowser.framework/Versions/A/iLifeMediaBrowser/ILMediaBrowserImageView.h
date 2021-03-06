/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/IKImageBrowserView.h>

@interface ILMediaBrowserImageView : IKImageBrowserView {

	char _shouldDrawOverlays;
	char _displaysToolTips;

}
-(char)validateMenuItem:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(char)wantsLayer;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)setDisplaysToolTips:(char)arg1 ;
-(char)displaysToolTips;
-(void)setShouldDrawOverlays:(char)arg1 ;
-(void)setSelectionIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(char)shouldDrawOverlays;
-(void)scaleCellSizeByFactor:(double)arg1 ;
-(char)_shouldSelectIndex:(long long)arg1 ;
-(char)selectItem:(char)arg1 atIndex:(unsigned long long)arg2 ;
@end

