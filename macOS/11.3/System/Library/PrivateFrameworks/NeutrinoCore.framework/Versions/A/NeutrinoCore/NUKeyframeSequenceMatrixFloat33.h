/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence {

	SCD_Struct_NU17* _values;

}
-(void)dealloc;
-(SCD_Struct_NU17)valueOfKeyframeAtIndex:(long long)arg1 ;
-(SCD_Struct_NU17)sampleAtTime:(SCD_Struct_NU7)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 times:(SCD_Struct_NU7*)arg2 values:(SCD_Struct_NU17*)arg3 ;
@end

