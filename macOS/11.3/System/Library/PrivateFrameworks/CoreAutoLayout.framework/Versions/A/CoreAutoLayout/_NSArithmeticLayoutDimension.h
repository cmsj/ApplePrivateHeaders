/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/Versions/A/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <CoreAutoLayout/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSArray, NSLayoutDimension;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutDimension* _rootLayoutDimension;
	double _multiplier;
	double _constant;

}

@property (readonly) NSArray * _childAnchors; 
-(id)_nearestAncestorLayoutItem;
-(id)_expressionInContext:(SCD_Struct_NS14)arg1 ;
-(double)_valueInEngine:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3 ;
-(id)equationDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
@end

