/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSString, NSFont, NSColor;

@interface TextCell : NSTextFieldCell {

	NSString* _truncationAlternateString;
	NSString* _secondTruncationAlternateString;
	double _leftMargin;
	double _rightMargin;
	double _topMargin;
	NSFont* _baselineFont;
	char _drawsEngraved;
	char _engravedTextAttributesDirty;
	NSColor* _engravedTextColor;

}
+(id)updateCellForColumn:(id)arg1 inView:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)editWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5 ;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
-(double)topMargin;
-(double)leftMargin;
-(double)rightMargin;
-(void)setLeftMargin:(double)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(id)baselineFont;
-(void)setBaselineFont:(id)arg1 ;
-(void)setTruncationAlternateString:(id)arg1 ;
-(void)setSecondTruncationAlternateString:(id)arg1 ;
-(void)_addOrRemoveEngravedTextAttributesIfNeeded;
-(CGRect)_adjustFrameToVerticallyCenterText:(CGRect)arg1 inView:(id)arg2 ;
-(void)_drawInteriorWithoutBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)secondTruncationAlternateString;
-(void)setTextColorForEnabledState;
-(id)truncationAlternateString;
-(char)drawsEngraved;
-(void)setDrawsEngraved:(char)arg1 ;
-(id)engravedTextColor;
-(void)setEngravedTextColor:(id)arg1 ;
@end
