/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@interface MLCGramMatrixLayer : MLCLayer {

	float _scale;

}

@property (nonatomic,readonly) float scale;              //@synthesize scale=_scale - In the implementation block
+(id)layerWithScale:(float)arg1 ;
-(id)description;
-(float)scale;
-(char)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(unsigned long long)resultSizeFromSourceSizes:(id)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithScaleFactor:(float)arg1 ;
@end

