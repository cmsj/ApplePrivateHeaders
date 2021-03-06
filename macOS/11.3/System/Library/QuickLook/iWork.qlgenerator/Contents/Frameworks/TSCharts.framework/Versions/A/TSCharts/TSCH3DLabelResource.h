/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DResource.h>
#import <TSCharts/TSCH3DStringIndexableResource.h>

@class TSCH3DLabelResourceAttributes;

@interface TSCH3DLabelResource : TSCH3DResource <TSCH3DStringIndexableResource> {

	char _sizeAndOffsetCalculated;
	tvec2<float> _tightSize;
	tvec2<float> _size;
	tvec2<float> _labelRenderOffset;
	tvec2<float> _bitmapLabelRenderOffset;
	TSCH3DLabelResourceAttributes* _attributes;

}

@property (nonatomic,readonly) tvec2<float> bitmapLabelRenderOffset; 
@property (nonatomic,readonly) tvec2<float> labelSize; 
@property (nonatomic,readonly) tvec2<float> tightSize; 
@property (nonatomic,readonly) tvec2<int> clampedLabelSampledSize; 
@property (nonatomic,readonly) tvec2<float> labelRenderOffset; 
@property (nonatomic,copy) TSCH3DLabelResourceAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)resourceWithLabelAttributes:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(void)setString:(id)arg1 ;
-(TSCH3DLabelResourceAttributes *)attributes;
-(id)get;
-(void)setAttributes:(TSCH3DLabelResourceAttributes *)arg1 ;
-(tvec2<float>)labelSize;
-(tvec2<int>)clampedLabelSampledSize;
-(id)initWithLabelAttributes:(id)arg1 ;
-(tvec2<int>)p_clampedLabelSampledSizeReturningClampedRatio:(float*)arg1 ;
-(tvec2<float>)bitmapLabelRenderOffset;
-(void)p_calculateSizeAndOffset;
-(tvec2<int>)labelSizeWithSamples:(double)arg1 ;
-(tvec2<float>)tightSize;
-(tvec2<float>)labelRenderOffset;
@end

