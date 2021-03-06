/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSPopUpButtonCell.h>

@interface SafeAutoFillChoicesPopUpButtonCell : NSPopUpButtonCell {

	double _highlightOffset;
	double _menuWidth;

}

@property (assign,nonatomic) double highlightOffset;              //@synthesize highlightOffset=_highlightOffset - In the implementation block
@property (assign,nonatomic) double menuWidth;                    //@synthesize menuWidth=_menuWidth - In the implementation block
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGPoint)_menuLocationForEvent:(id)arg1 inCellFrame:(CGRect)arg2 ofView:(id)arg3 ;
-(double)_menuMinimumWidthForEvent:(id)arg1 inCellFrame:(CGRect)arg2 ofView:(id)arg3 ;
-(double)highlightOffset;
-(void)setHighlightOffset:(double)arg1 ;
-(double)menuWidth;
-(void)setMenuWidth:(double)arg1 ;
@end

