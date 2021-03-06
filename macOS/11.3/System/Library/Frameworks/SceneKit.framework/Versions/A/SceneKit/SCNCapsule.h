/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNCapsule : SCNGeometry {

	double _capsulecapRadius;
	double _capsuleheight;
	long long _capsuleheightSegmentCount;
	long long _capsuleradialSegmentCount;
	long long _capsulecapSegmentCount;
	long long _capsuleprimitiveType;

}

@property (assign,nonatomic) double capRadius; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) long long radialSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) long long capSegmentCount; 
+(char)supportsSecureCoding;
+(id)capsuleWithCapRadius:(double)arg1 height:(double)arg2 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(long long)primitiveType;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)presentationGeometry;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)heightSegmentCount;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)radialSegmentCount;
-(void)setRadialSegmentCount:(long long)arg1 ;
-(id)presentationCapsule;
-(double)capRadius;
-(void)setCapRadius:(double)arg1 ;
-(long long)capSegmentCount;
-(void)setCapSegmentCount:(long long)arg1 ;
@end

