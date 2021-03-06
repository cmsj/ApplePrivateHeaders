/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUHistogramCalculator : NSObject {

	long long _binCount;
	SCD_Struct_NU11 _range;
	SCD_Struct_NU13 _colorMatrix;

}

@property (assign,nonatomic) long long binCount;                       //@synthesize binCount=_binCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU11 range;                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU13 colorMatrix;              //@synthesize colorMatrix=_colorMatrix - In the implementation block
-(id)init;
-(SCD_Struct_NU11)range;
-(void)setRange:(SCD_Struct_NU11)arg1 ;
-(SCD_Struct_NU13)colorMatrix;
-(void)setColorMatrix:(SCD_Struct_NU13)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferRGBAhHLG:(id)arg1 error:(out id*)arg2 ;
-(long long)binCount;
-(void)setBinCount:(long long)arg1 ;
@end

