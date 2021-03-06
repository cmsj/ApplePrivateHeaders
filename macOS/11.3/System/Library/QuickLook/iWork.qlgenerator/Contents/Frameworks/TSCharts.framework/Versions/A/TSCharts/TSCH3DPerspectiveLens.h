/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DLens.h>

@interface TSCH3DPerspectiveLens : TSCH3DLens {

	float _FOV;
	float _aspect;

}

@property (assign,nonatomic) float fov;                   //@synthesize FOV=_FOV - In the implementation block
@property (assign,nonatomic) float aspect;                //@synthesize aspect=_aspect - In the implementation block
@property (nonatomic,readonly) float width; 
@property (nonatomic,readonly) float height; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(float)width;
-(float)height;
-(float)aspect;
-(void)setAspect:(float)arg1 ;
-(tmat4x4<float>)matrix;
-(void)setFov:(float)arg1 ;
-(void)calculateCullingPlanes:(vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float>>, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float>>>>*)arg1 ;
-(id)frustumRect;
-(id)narrowedByNormalizedBounds:(box<glm::detail::tvec2<float>>*)arg1 ;
-(id)shiftedByPercentage:(tvec2<float>*)arg1 ;
-(id)frustumRectAtDistance:(float)arg1 ;
-(float)fov;
-(id)asFrustumLens;
-(id)matrixDescription;
@end

