/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSView;


@protocol QLIndexSheetDelegate <QLIndexSheetViewDelegate>
@property (readonly) unsigned long long indexSheetMaxColumns; 
@property (readonly) unsigned long long indexSheetMaxRows; 
@property (readonly) char indexSheetHasDarkBackground; 
@property (readonly) char indexSheetShowsControls; 
@property (readonly) NSView * indexSheetHostingView; 
@property (readonly) CGRect indexSheetFrame; 
@required
-(CGImageRef)copyIndexSheetTransitionImageWithFrame:(CGRect*)arg1 transitionFrame:(CGRect*)arg2;
-(unsigned long long)indexSheetMaxColumns;
-(unsigned long long)indexSheetMaxRows;
-(char)indexSheetHasDarkBackground;
-(char)indexSheetShowsControls;
-(NSView *)indexSheetHostingView;
-(CGRect)indexSheetFrame;

@end

