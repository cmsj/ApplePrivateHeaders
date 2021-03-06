/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNActionTargetState : NSObject {

	char usesEuler;
	float opacity;
	SCNVector3 position;
	SCNVector3 euler;
	SCNVector3 scale;
	SCNVector4 rotation;

}

@property (assign,nonatomic) SCNVector3 position; 
@property (assign,nonatomic) SCNVector3 euler; 
@property (assign,nonatomic) SCNVector3 scale; 
@property (assign,nonatomic) SCNVector4 rotation; 
@property (assign,nonatomic) char usesEuler; 
@property (assign,nonatomic) float opacity; 
-(SCNVector4)rotation;
-(SCNVector3)scale;
-(SCNVector3)position;
-(void)setPosition:(SCNVector3)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)setScale:(SCNVector3)arg1 ;
-(void)setRotation:(SCNVector4)arg1 ;
-(float)opacity;
-(SCNVector3)euler;
-(void)setEuler:(SCNVector3)arg1 ;
-(char)usesEuler;
-(void)setUsesEuler:(char)arg1 ;
@end

