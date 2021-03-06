/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/Versions/A/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldNoise : PKPhysicsField

@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
+(id)field;
-(id)init;
-(float)smoothness;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(float)animationSpeed;
-(id)initWithField:(shared_ptr<PKCField>*)arg1 ;
@end

