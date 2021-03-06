/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/Versions/A/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRevolute : PKPhysicsJoint {

	unsigned* _jointDef : 2RevoluteJointDef;
	unsigned* _joint : 2RevoluteJoint;
	CGPoint _anchor;

}

@property (assign,nonatomic) char shouldEnableLimits; 
@property (assign,nonatomic) double lowerAngleLimit; 
@property (assign,nonatomic) double upperAngleLimit; 
@property (assign,nonatomic) double frictionTorque; 
@property (assign,nonatomic) double rotationSpeed; 
@property (readonly) CGPoint anchor;                               //@synthesize anchor=_anchor - In the implementation block
+(char)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)create;
-(CGPoint)anchor;
-(void)setShouldEnableLimits:(char)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(void)setFrictionTorque:(double)arg1 ;
-(double)frictionTorque;
-(unsigned*)_joint;
-(char)isEqualToRevoluteJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(char)shouldEnableLimits;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(double)rotationSpeed;
-(void)setRotationSpeed:(double)arg1 ;
@end

