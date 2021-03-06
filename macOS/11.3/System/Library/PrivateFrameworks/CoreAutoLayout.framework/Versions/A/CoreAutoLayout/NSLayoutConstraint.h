/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/Versions/A/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSISConstraint.h>

@class _NSConstraintDescriptionLayoutRuleNode, NSLayoutAnchor, NSString, NSSet;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {

	id _container;
	id _firstAnchor;
	id _secondAnchor;
	double _constant;
	double _loweredConstant;
	id _markerAndPositiveExtraVar;
	id _negativeExtraVar;
	unsigned long long _layoutConstraintFlags;
	float _coefficient;
	float _priority;

}

@property (setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode * _associatedRuleNode; 
@property (setter=_setFirstAnchor:,copy) NSLayoutAnchor * firstAnchor;                                                                               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (setter=_setRelation:) long long relation; 
@property (setter=_setMultiplier:) double multiplier; 
@property (setter=_setSecondAnchor:,copy) NSLayoutAnchor * secondAnchor;                                                                             //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (copy) NSString * identifier; 
@property (readonly) char hasBeenLowered; 
@property (assign) id container; 
@property (setter=_setContainerDeclaredConstraint:) char _containerDeclaredConstraint; 
@property (readonly) double unsatisfaction; 
@property (copy) NSString * symbolicConstant; 
@property (assign) double symbolicConstantMultiplier; 
@property (assign,setter=_setLoweredConstantNeedsUpdate:,getter=_loweredConstantNeedsUpdate,nonatomic) char loweredConstantNeedsUpdate; 
@property (copy,readonly) NSSet * _referencedLayoutItems; 
@property (assign) float priority; 
@property (assign) char shouldBeArchived; 
@property (readonly) id firstItem; 
@property (readonly) long long firstAttribute; 
@property (readonly) id secondItem; 
@property (readonly) long long secondAttribute; 
@property (assign) double constant; 
@property (getter=isActive) char active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultAnimationForKey:(id)arg1 ;
+(id)_ns_constraintsWithItem:(id)arg1 attribute:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 inequalityRelation:(long long)arg5 inequalityIdentifier:(id)arg6 inequalityPriority:(float)arg7 inequalityConstant:(double)arg8 equivalencePriority:(float)arg9 equivalenceIdentifier:(id)arg10 equalityConstant:(double)arg11 layoutDirection:(long long)arg12 ;
+(id)_ns_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 layoutDirection:(long long)arg8 priority:(float)arg9 identifier:(id)arg10 ;
+(id)_ns_constraintsWithItem:(id)arg1 attribute:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 constant:(double)arg5 inequalityRelation:(long long)arg6 inequalityIdentifier:(id)arg7 inequalityPriority:(float)arg8 equivalencePriority:(float)arg9 equivalenceIdentifier:(id)arg10 layoutDirection:(long long)arg11 ;
+(id)_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(NSEdgeInsets)arg3 ;
+(id)_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8 ;
+(id)_minimizingConstraintWithItem:(id)arg1 attribute:(long long)arg2 ;
+(id)_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 ;
+(id)_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(NSEdgeInsets)arg3 priority:(float)arg4 ;
+(double)_constraintConstantLimit;
+(id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2 ;
+(void)_setLegacyDecodingOnly:(char)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8 ;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4 ;
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 ;
+(void)activateConstraints:(id)arg1 ;
+(void)deactivateConstraints:(id)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6 ;
+(double)_constraintConstantLimit;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 symbolicConstantMultiplier:(double)arg8 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 ;
-(id)animator;
-(id)animationForKey:(id)arg1 ;
-(void)_setConstant:(double)arg1 animated:(char)arg2 ;
-(int)_orientation;
-(char)_isPrototypingConstraint;
-(CGPoint)_visualCenterInWindowSpace;
-(long long)_geometricCompare:(id)arg1 ;
-(char)_usingConsistentIntegralization;
-(char)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(double)unsatisfaction;
-(double)priorityForVariable:(id)arg1 ;
-(void)_setFirstAnchor:(id)arg1 ;
-(void)_setSecondAnchor:(id)arg1 ;
-(id)_constantDescriptionForDTrace;
-(id)_symbolicConstant;
-(void)_setSymbolicConstant:(id)arg1 ;
-(char)_effectiveConstant:(double*)arg1 error:(id*)arg2 ;
-(id)_descriptionforSymbolicConstant;
-(id)descriptionAccessory;
-(id)_priorityDescription;
-(void)_setRelation:(long long)arg1 ;
-(void)_setActive:(char)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(char)_nsib_isRedundantInEngine:(id)arg1 ;
-(void)_setFirstItem:(id)arg1 attribute:(long long)arg2 ;
-(void)_setSecondItem:(id)arg1 attribute:(long long)arg2 ;
-(void)_setLoweredConstantNeedsUpdate:(char)arg1 ;
-(char)_loweredConstantNeedsUpdate;
-(char)_isIBPrototypingLayoutConstraint;
-(char)_existsInEngine:(id)arg1 ;
-(char)_isFudgeable;
-(double)_fudgeIncrement;
-(double)_allowedMagnitudeForIntegralizationAdjustment;
-(id)_constraintByReplacingView:(id)arg1 withView:(id)arg2 ;
-(char)_describesSameRestrictionAsConstraint:(id)arg1 ;
-(unsigned long long)_constraintValueHashIncludingConstant:(char)arg1 includeOtherMutableProperties:(char)arg2 ;
-(void)_setMutablePropertiesFromConstraint:(id)arg1 ;
-(id)_constraintValueCopy;
-(CGSize)_engineToContainerScalingCoefficients;
-(void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(id)_explainUnsatisfaction;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)container;
-(NSString *)identifier;
-(id)_identifier;
-(char)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)constant;
-(double)multiplier;
-(void)setPriority:(float)arg1 ;
-(id)firstItem;
-(id)secondItem;
-(void)setActive:(char)arg1 ;
-(void)setConstant:(double)arg1 ;
-(void)setShouldBeArchived:(char)arg1 ;
-(void)setAnimations:(id)arg1 ;
-(id)animations;
-(long long)firstAttribute;
-(long long)secondAttribute;
-(float)priority;
-(long long)relation;
-(char)shouldBeArchived;
-(NSSet *)_referencedLayoutItems;
-(void)setContainer:(id)arg1 ;
-(NSLayoutAnchor *)firstAnchor;
-(NSLayoutAnchor *)secondAnchor;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_addToEngine:(id)arg1 ;
-(void)_removeFromEngine:(id)arg1 ;
-(void)_clearWeakContainerReference;
-(void)_containerGeometryDidChange;
-(char)_referencesLayoutItem:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(double)symbolicConstantMultiplier;
-(int)_constraintType;
-(char)_containerDeclaredConstraint;
-(id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2 ;
-(char)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(_NSConstraintDescriptionLayoutRuleNode *)_associatedRuleNode;
-(void)_setAssociatedRuleNode:(id)arg1 ;
-(void)_setContainerDeclaredConstraint:(char)arg1 ;
-(id)_markerAndPositiveExtraVar;
-(char)_nsib_isRedundant;
-(char)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(char*)arg2 ;
-(id)_loweredExpression;
-(void)_setMultiplier:(double)arg1 ;
-(char)_isEqualToConstraintValue:(id)arg1 includingConstant:(char)arg2 includeOtherMutableProperties:(char)arg3 ;
-(char)hasBeenLowered;
-(char)_loweredConstantIsRounded;
-(NSString *)symbolicConstant;
-(void)setSymbolicConstantMultiplier:(double)arg1 ;
-(void)setSymbolicConstant:(NSString *)arg1 ;
@end

