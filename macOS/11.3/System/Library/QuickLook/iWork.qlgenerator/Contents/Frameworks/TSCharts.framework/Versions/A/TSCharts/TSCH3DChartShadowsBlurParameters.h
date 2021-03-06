/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCH3DChartShadowsBlurParameters : NSObject {

	float _quality;
	long long _numPasses;
	long long _shadowSize;
	float _kernelScale;

}

@property (assign,nonatomic) float quality;                     //@synthesize quality=_quality - In the implementation block
@property (assign,nonatomic) long long numPasses;               //@synthesize numPasses=_numPasses - In the implementation block
@property (assign,nonatomic) long long shadowSize;              //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,nonatomic) float kernelScale;                 //@synthesize kernelScale=_kernelScale - In the implementation block
+(id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(float)quality;
-(void)setQuality:(float)arg1 ;
-(long long)shadowSize;
-(void)setShadowSize:(long long)arg1 ;
-(long long)numPasses;
-(float)kernelScale;
-(id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(void)setNumPasses:(long long)arg1 ;
-(void)setKernelScale:(float)arg1 ;
@end

