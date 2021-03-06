/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSActionCell.h>

@interface NSLabelViewCell : NSActionCell {

	long long _selectedParts;
	long long _hoveredPart;
	unsigned long long _imagePosition;
	char _allowsMultipleSelection;
	long long _focusedPart;

}

@property (readonly) long long numParts; 
@property (assign) long long diskLabelValues; 
@property (assign) unsigned long long imagePosition;              //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign) char allowsMultipleSelection;                  //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (assign) long long focusedPart; 
@property (assign) long long hoveredPart;                         //@synthesize hoveredPart=_hoveredPart - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityAttributeNames;
-(void)setImagePosition:(unsigned long long)arg1 ;
-(unsigned long long)imagePosition;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(id)accessibilityChildrenAttribute;
-(void)performClick:(id)arg1 ;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)_commonInit;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(long long)numParts;
-(CGRect)part:(long long)arg1 boundsWithFrame:(CGRect)arg2 ;
-(void)mouseEntered:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)mouseExited:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)setHoveredPart:(long long)arg1 ;
-(long long)focusedPart;
-(void)setFocusedPart:(long long)arg1 ;
-(id)accessibilityVisibleChildrenAttribute;
-(char)accessibilityIsVisibleChildrenAttributeSettable;
-(char)_isSelectedPart:(long long)arg1 ;
-(void)_selectPart:(long long)arg1 ;
-(id)_labelAttributes;
-(void)_drawBackgroundForPartRect:(CGRect)arg1 isPressedOrHovered:(char)arg2 ;
-(char)_isHoveredPart:(long long)arg1 ;
-(id)_nameForLabelPart:(long long)arg1 ;
-(void)_drawPart:(long long)arg1 withFrame:(CGRect)arg2 ;
-(id)_currentLabelName;
-(CGRect)_boundsForLabel:(id)arg1 withFrame:(CGRect)arg2 ;
-(long long)_partAtPoint:(CGPoint)arg1 inFrame:(CGRect)arg2 ;
-(void)_handleMouseMovedForEvent:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 ;
-(void)_deselectPart:(long long)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(long long)diskLabelValues;
-(void)setDiskLabelValues:(long long)arg1 ;
-(long long)hoveredPart;
-(id)accessibilityDescriptionOfChild:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 forChild:(id)arg2 ;
-(CGRect)_rectForPart:(long long)arg1 ;
@end

