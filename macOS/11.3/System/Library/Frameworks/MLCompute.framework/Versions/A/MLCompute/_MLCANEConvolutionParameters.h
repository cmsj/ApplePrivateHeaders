/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface _MLCANEConvolutionParameters : NSObject {

	NSDictionary* _convolutionParams;
	NSDictionary* _biasParams;
	NSArray* _neuronParams;

}

@property (nonatomic,retain,readonly) NSDictionary * convolutionParams;              //@synthesize convolutionParams=_convolutionParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * biasParams;                     //@synthesize biasParams=_biasParams - In the implementation block
@property (nonatomic,retain,readonly) NSArray * neuronParams;                        //@synthesize neuronParams=_neuronParams - In the implementation block
+(id)convolutionUnitParametersWith:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3 ;
-(NSArray *)neuronParams;
-(id)initWithConvolutionParams:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3 ;
-(NSDictionary *)convolutionParams;
-(NSDictionary *)biasParams;
@end
