/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class NSString;

@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {

	inner_product_uniforms params;
	shared_ptr<Espresso::blob<float, 2>>* weights_blob;
	shared_ptr<Espresso::blob<unsigned short, 2>>* weights_f16_blob;
	shared_ptr<Espresso::blob<unsigned char, 2>>* quantized_weights_blob;
	shared_ptr<Espresso::blob<float, 1>>* biases_blob;
	shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1>>* quantization_ranges;
	shared_ptr<Espresso::blob<float, 1>>* quantization_lut;
	unsigned data_type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)load;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(char)ready;
-(void*)weights;
-(float*)biasTerms;
-(void)purge;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(id)initWithParams:(inner_product_uniforms)arg1 ;
@end

