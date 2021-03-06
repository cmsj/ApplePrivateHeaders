/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKScaleConstraint : SKConstraint {

	SKRange* _xRange;
	SKRange* _yRange;

}

@property (copy) SKRange * xRange;              //@synthesize xRange=_xRange - In the implementation block
@property (copy) SKRange * yRange;              //@synthesize yRange=_yRange - In the implementation block
+(char)supportsSecureCoding;
+(id)constraintWithXRange:(id)arg1 ;
+(id)constraintWithYRange:(id)arg1 ;
+(id)constraintWithXRange:(id)arg1 YRange:(id)arg2 ;
+(id)constraintWithScaleRange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)xRange;
-(void)setXRange:(SKRange *)arg1 ;
-(SKRange *)yRange;
-(char)isEqualToScaleConstraint:(id)arg1 ;
-(void)setYRange:(SKRange *)arg1 ;
-(id)initWithXRange:(id)arg1 YRange:(id)arg2 ;
@end

