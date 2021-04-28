/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class NSArray;

@interface MLCReshapeLayer : MLCLayer {

	NSArray* _shape;

}

@property (nonatomic,copy,readonly) NSArray * shape;              //@synthesize shape=_shape - In the implementation block
+(char)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
+(id)layerWithShape:(id)arg1 ;
-(id)description;
-(NSArray *)shape;
-(char)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(char)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2 ;
-(unsigned long long)deviceMemorySizeForForward;
-(char)isStaticBatchSize;
-(id)initWithShape:(id)arg1 ;
@end
