/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DNormalDirectionMapper.h>

@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper {

	long long _topMeshOffset;
	long long _angleSteps;
	long long _radiusSteps;
	long long _angleLimit;
	long long _radiusLimit;

}
-(void)mapFromVertexArray:(const tvec3<float>*)arg1 normalArray:(const tvec3<float>*)arg2 normalMatrix:(const tmat3x3<float>*)arg3 numVertices:(long long)arg4 destination:(vector<unsigned char, std::__1::allocator<unsigned char>>*)arg5 ;
-(id)initWithTopMeshOffset:(long long)arg1 angleSteps:(long long)arg2 radiusSteps:(long long)arg3 angleLimit:(long long)arg4 radiusLimit:(long long)arg5 ;
@end

