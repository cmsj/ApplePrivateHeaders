/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/Versions/A/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject {

	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;
	CGPoint _contactPoint;
	CGVector _contactNormal;
	double _impulse;
	char _didBegin;
	char _didEnd;

}

@property (assign) char didBegin; 
@property (assign) char didEnd; 
@property (nonatomic,readonly) PKPhysicsBody * bodyA; 
@property (nonatomic,readonly) PKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGPoint contactPoint; 
@property (nonatomic,readonly) CGVector contactNormal; 
@property (nonatomic,readonly) double collisionImpulse; 
-(id)init;
-(char)didBegin;
-(char)didEnd;
-(void)setDidEnd:(char)arg1 ;
-(void)setContactPoint:(CGPoint)arg1 ;
-(CGPoint)contactPoint;
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
-(CGVector)contactNormal;
-(double)collisionImpulse;
-(void)setDidBegin:(char)arg1 ;
-(void)setContactNormal:(CGVector)arg1 ;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
-(void)setCollisionImpulse:(double)arg1 ;
@end

