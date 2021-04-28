/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNReplicatorConstraint : SCNConstraint {

	SCNNode* _target;
	char _replicateOrientation;
	char _replicatePosition;
	char _replicateScale;
	SCNVector4 _orientationOffset;
	SCNVector3 _positionOffset;
	SCNVector3 _scaleOffset;

}

@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) char replicatesOrientation; 
@property (assign,nonatomic) char replicatesPosition; 
@property (assign,nonatomic) char replicatesScale; 
@property (assign,nonatomic) SCNVector4 orientationOffset; 
@property (assign,nonatomic) SCNVector3 positionOffset; 
@property (assign,nonatomic) SCNVector3 scaleOffset; 
+(char)supportsSecureCoding;
+(id)replicatorConstraint;
+(id)replicatorConstraintWithTarget:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(char)replicatesOrientation;
-(void)setReplicatesOrientation:(char)arg1 ;
-(char)replicatesPosition;
-(void)setReplicatesPosition:(char)arg1 ;
-(char)replicatesScale;
-(void)setReplicatesScale:(char)arg1 ;
-(SCNVector4)orientationOffset;
-(void)setOrientationOffset:(SCNVector4)arg1 ;
-(SCNVector3)positionOffset;
-(void)setPositionOffset:(SCNVector3)arg1 ;
-(SCNVector3)scaleOffset;
-(void)setScaleOffset:(SCNVector3)arg1 ;
-(void)_customEncodingOfSCNReplicatorConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNReplicatorConstraint:(id)arg1 ;
@end
