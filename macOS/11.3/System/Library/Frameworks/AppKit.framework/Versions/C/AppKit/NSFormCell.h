/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSString, NSFont, NSAttributedString;

@interface NSFormCell : NSActionCell {

	double _titleWidth;
	double _titleEndPoint;
	double _preferredTextFieldWidth;
	id _titleCell;

}

@property (assign) double titleWidth; 
@property (copy) NSString * title; 
@property (retain) NSFont * titleFont; 
@property (getter=isOpaque,readonly) char opaque; 
@property (copy) NSString * placeholderString; 
@property (copy) NSAttributedString * placeholderAttributedString; 
@property (assign) long long titleAlignment; 
@property (assign) long long titleBaseWritingDirection; 
@property (assign) double preferredTextFieldWidth; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setAttributedTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)attributedTitle;
-(NSString *)title;
-(char)isOpaque;
-(char)acceptsFirstResponder;
-(id)accessibilityAttributeNames;
-(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)accessibilityChildrenInNavigationOrderAttribute;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)initTextCell:(id)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(NSFont *)titleFont;
-(void)setTitleFont:(NSFont *)arg1 ;
-(void)setTitleWithMnemonic:(id)arg1 ;
-(id)accessibilityTitleUIElementAttribute;
-(char)accessibilityIsTitleUIElementAttributeSettable;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(id)_selectOrEdit:(const CGRect*)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7 ;
-(void)resetCursorRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)setPlaceholderString:(NSString *)arg1 ;
-(void)setTitleWidth:(double)arg1 ;
-(double)titleWidth:(CGSize)arg1 ;
-(void)setTitleAlignment:(long long)arg1 ;
-(void)setPreferredTextFieldWidth:(double)arg1 ;
-(double)preferredTextFieldWidth;
-(void)setTitleBaseWritingDirection:(long long)arg1 ;
-(void)_updateFormAlignmentForUserInterfaceLayoutDirection;
-(CGRect)_titleRectForCellFrame:(CGRect)arg1 ;
-(void)_layoutTitleRect:(CGRect*)arg1 interiorChromeRect:(CGRect*)arg2 interiorTextRect:(CGRect*)arg3 withFrame:(CGRect)arg4 inView:(id)arg5 ;
-(double)titleWidth;
-(long long)titleAlignment;
-(NSString *)placeholderString;
-(void)setPlaceholderAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)placeholderAttributedString;
-(long long)titleBaseWritingDirection;
-(CGRect)_accessibilityTitleRect;
-(id)accessibilityPlaceholderValueAttribute;
-(char)accessibilityIsPlaceholderValueAttributeSettable;
@end

