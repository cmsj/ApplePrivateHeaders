/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSISEngine, NSISVariable, NSObservation, NSArray, NSMutableArray, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension, NSLayoutGuide, _NSViewLayoutInvalidator, NSNumber;

@interface _NSViewLayoutAux : NSObject {

	NSISEngine* _engine;
	NSISVariable* _minXVariable;
	NSISVariable* _minYVariable;
	NSISVariable* _widthVariable;
	NSISVariable* _heightVariable;
	NSObservation* _minXVariableObservation;
	NSObservation* _minYVariableObservation;
	NSObservation* _widthVariableObservation;
	NSObservation* _heightVariableObservation;
	NSArray* _internalConstraints;
	NSArray* _hostingPreferredSizeConstraints;
	NSArray* _constraintsExceptingSubviewAutoresizingConstraints;
	NSMutableArray* _declaredConstraints;
	NSMutableArray* _allActiveRuleNodes;
	NSMutableArray* _childRuleNodes;
	NSMutableArray* _layoutGuides;
	CGSize _oldSizeDuringLayoutDescent;
	NSLayoutXAxisAnchor* _leadingAnchor;
	NSLayoutXAxisAnchor* _trailingAnchor;
	NSLayoutXAxisAnchor* _leftAnchor;
	NSLayoutXAxisAnchor* _rightAnchor;
	NSLayoutYAxisAnchor* _topAnchor;
	NSLayoutYAxisAnchor* _bottomAnchor;
	NSLayoutDimension* _widthAnchor;
	NSLayoutDimension* _heightAnchor;
	NSLayoutXAxisAnchor* _centerXAnchor;
	NSLayoutYAxisAnchor* _centerYAnchor;
	NSLayoutYAxisAnchor* _firstBaselineAnchor;
	NSLayoutYAxisAnchor* _lastBaselineAnchor;
	NSLayoutGuide* _safeAreaLayoutGuide;
	NSLayoutGuide* _layoutMarginsGuide;
	CGPoint _cachedRootOffset;
	unsigned long long _cachedOffsetChangeCount;
	NSISEngine* _cachedRootOffsetEngine;
	_NSViewLayoutInvalidator* _layoutInvalidator;
	unsigned long long _piercingToken;
	NSNumber* _layoutEngineWidth;
	double _firstPassWidth;
	unsigned char _updateConstraintsPassCounter;
	unsigned char _updateConstraintsInProgressCounter;
	struct {
		unsigned _potentiallyHasDanglyConstraints : 1;
		unsigned _mightBePiercedByConstraint : 1;
		unsigned _doesNotTranslateAutoresizingMaskIntoConstraints : 1;
		unsigned _wantsToHostAutolayoutEngine : 1;
		unsigned _hostsAutolayoutEngine : 1;
		unsigned _resizingFromLayout : 1;
		unsigned _recursionGuard : 1;
		unsigned _baselineOffsetMayBeReferenced : 1;
		unsigned _constraintsReferencingBaselineOffsetNeedUpdating : 1;
		unsigned _onlyNeedsUpdateConstraintsBecauseDeclaredConstraintRemoved : 1;
		unsigned _preferredSizeConstraintsNeedUpdating : 1;
		unsigned _allowsEngineHostPreferredSizeConstraints : 1;
		unsigned _viewWasAdjustedToRetinaResolution : 1;
		unsigned _indexOfFinishedConstraintsUpdatePass : 2;
	}  _flags;

}
-(void)dealloc;
-(id)init;
@end

