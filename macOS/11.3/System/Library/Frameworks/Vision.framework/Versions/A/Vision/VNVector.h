/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VNPoint;

@interface VNVector : NSObject <NSCopying, NSSecureCoding> {

	VNPoint* _vectorProjections;

}

@property (readonly) double x; 
@property (readonly) double y; 
@property (readonly) double r; 
@property (readonly) double theta; 
@property (readonly) double length; 
@property (readonly) double squaredLength; 
+(char)supportsSecureCoding;
+(id)zeroVector;
+(id)unitVectorForVector:(id)arg1 ;
+(id)vectorByMultiplyingVector:(id)arg1 byScalar:(double)arg2 ;
+(id)vectorByAddingVector:(id)arg1 toVector:(id)arg2 ;
+(id)vectorBySubtractingVector:(id)arg1 fromVector:(id)arg2 ;
+(double)dotProductOfVector:(id)arg1 vector:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(double)length;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)x;
-(double)y;
-(id)initWithXComponent:(double)arg1 yComponent:(double)arg2 ;
-(id)initWithR:(double)arg1 theta:(double)arg2 ;
-(id)initWithVectorHead:(id)arg1 tail:(id)arg2 ;
-(double)r;
-(double)theta;
-(double)squaredLength;
@end

