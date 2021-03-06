/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCH3DProjector : NSObject {

	tmat4x4<float> _projection;
	tmat4x4<float> _transform;
	tmat4x4<float> _combined;

}

@property (nonatomic,readonly) const tmat4x4<float>* projection;              //@synthesize projection=_projection - In the implementation block
@property (nonatomic,readonly) const tmat4x4<float>* transform;               //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) const tmat4x4<float>* combined;                //@synthesize combined=_combined - In the implementation block
+(id)projectorWithProjection:(const tmat4x4<float>*)arg1 transform:(const tmat4x4<float>*)arg2 ;
-(const tmat4x4<float>*)transform;
-(const tmat4x4<float>*)projection;
-(const tmat4x4<float>*)combined;
-(line<glm::detail::tvec3<float>>)objectSpaceLineFromPoint:(const tvec2<float>*)arg1 ;
-(id)initWithProjection:(const tmat4x4<float>*)arg1 transform:(const tmat4x4<float>*)arg2 ;
@end

