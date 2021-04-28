/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSLayoutSpacingItem.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSUserInterfaceItemIdentification.h>

@class NSString, NSISVariable, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension, NSView;

@interface NSLayoutGuide : NSObject <NSLayoutSpacingItem, NSCoding, NSUserInterfaceItemIdentification> {

	id _owningView;
	NSString* _identifier;
	NSISVariable* _minYVariable;
	NSISVariable* _minXVariable;
	NSISVariable* _widthVariable;
	NSISVariable* _heightVariable;
	NSLayoutXAxisAnchor* _left;
	NSLayoutXAxisAnchor* _right;
	NSLayoutXAxisAnchor* _leading;
	NSLayoutXAxisAnchor* _trailing;
	NSLayoutYAxisAnchor* _top;
	NSLayoutYAxisAnchor* _bottom;
	NSLayoutDimension* _width;
	NSLayoutDimension* _height;
	NSLayoutXAxisAnchor* _centerX;
	NSLayoutYAxisAnchor* _centerY;
	CGRect _frame;
	CGRect _internalFrame;
	id _aux;
	id _systemConstraints;
	unsigned _shouldBeArchived : 1;
	unsigned _frameNeedsUpdate : 1;
	unsigned _frameIsObserved : 1;
	unsigned _lockedToOwner : 1;
	unsigned _internalFrameDiverged : 1;
	unsigned _reservedFlags : 27;

}

@property (readonly) CGRect frame; 
@property (__weak) NSView * owningView; 
@property (copy) NSString * identifier; 
@property (readonly) NSLayoutXAxisAnchor * leadingAnchor; 
@property (readonly) NSLayoutXAxisAnchor * trailingAnchor; 
@property (readonly) NSLayoutXAxisAnchor * leftAnchor; 
@property (readonly) NSLayoutXAxisAnchor * rightAnchor; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * widthAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
@property (readonly) NSLayoutXAxisAnchor * centerXAnchor; 
@property (readonly) NSLayoutYAxisAnchor * centerYAnchor; 
@property (readonly) char hasAmbiguousLayout; 
+(void)_allowingStaleFramesPerformBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setObservationInfo:(void*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)width;
-(id)height;
-(id)left;
-(CGRect)frame;
-(CGRect)bounds;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(NSLayoutDimension *)widthAnchor;
-(void)setShouldBeArchived:(char)arg1 ;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutDimension *)heightAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(id)leading;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(CGRect)_alignmentFrame;
-(id)nsli_widthVariable;
-(id)nsli_heightVariable;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(char)shouldBeArchived;
-(id)nsli_ancestorSharedWithItem:(id)arg1 ;
-(id)layoutRect;
-(char)hasAmbiguousLayout;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)_minXVariable;
-(void)_discardEngine:(id)arg1 ;
-(void)_updateFrameIfNeeded;
-(id)nsli_minXVariable;
-(id)nsli_minYVariable;
-(id)nsli_superitem;
-(id)initAllowingNegativeSize;
-(void)setLockedToOwningView:(char)arg1 ;
-(char)isLockedToOwningView;
-(void)setSystemConstraints:(id)arg1 ;
-(char)allowsNegativeSize;
-(id)systemConstraints;
-(NSView *)owningView;
-(char)nsli_lowersExpressionRelativeToConstraintContainer;
-(void)_updateInternalFrameIfNeeded;
-(void)_snipReferencingConstraints;
-(id)nsli_layoutEngine;
-(void)_didMoveFromLayoutEngine:(id)arg1 toEngine:(id)arg2 ;
-(id)nsli_installedConstraints;
-(char)nsli_removeConstraint:(id)arg1 ;
-(CGSize)nsli_convertSizeToEngineSpace:(CGSize)arg1 ;
-(CGSize)nsli_convertSizeFromEngineSpace:(CGSize)arg1 ;
-(char)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(id)nsli_constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4 ;
-(char)nsli_isRTL;
-(id)nsli_itemDescribingLayoutDirectionForConstraint:(id)arg1 toItem:(id)arg2 ;
-(void)nsli_addConstraint:(id)arg1 ;
-(id)nsli_boundsWidthVariable;
-(id)nsli_boundsHeightVariable;
-(id)nsli_description;
-(void)removeFromOwningView;
-(char)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4 ;
-(char)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4 ;
-(void)setOwningView:(NSView *)arg1 ;
-(id)constraintsAffectingLayoutForOrientation:(long long)arg1 ;
-(id)_referencingConstraints;
-(id)nsli_layoutRect;
-(char)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(char)nsli_descriptionIncludesPointer;
-(unsigned long long)nsli_autoresizingMask;
-(char)nsli_isFlipped;
-(unsigned long long)nsli_piercingToken;
-(void)nsli_setPiercingToken:(unsigned long long)arg1 ;
-(double)nsli_marginOffsetForAttribute:(long long)arg1 ;
-(id)_minYVariable;
-(id)_widthVariable;
-(id)_heightVariable;
-(char)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1 ;
-(char)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(id)trailing;
-(id)right;
-(id)top;
-(id)bottom;
-(id)centerX;
-(id)centerY;
-(id)ns_widgetType;
-(id)ns_containerWidgetType;
@end
