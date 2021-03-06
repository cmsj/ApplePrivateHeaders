/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNSphere : SCNGeometry {

	double _sphereradius;
	double _sphereradialSpan;
	long long _spheresegmentCount;
	long long _sphereprimitiveType;
	char _spheregeodesic;
	char _spherehemispheric;

}

@property (assign,nonatomic) double radius; 
@property (assign,getter=isGeodesic,nonatomic) char geodesic; 
@property (assign,nonatomic) long long segmentCount; 
+(char)supportsSecureCoding;
+(id)sphereWithRadius:(double)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSegmentCount:(long long)arg1 ;
-(long long)segmentCount;
-(long long)primitiveType;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)presentationGeometry;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)setGeodesic:(char)arg1 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)presentationSphere;
-(char)isGeodesic;
-(double)radialSpan;
-(void)setRadialSpan:(double)arg1 ;
-(char)isHemispheric;
-(void)setHemispheric:(char)arg1 ;
-(char)geodesic;
@end

