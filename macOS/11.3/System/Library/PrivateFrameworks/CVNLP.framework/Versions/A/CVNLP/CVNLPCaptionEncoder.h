/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/Versions/A/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionModelBase.h>

@interface CVNLPCaptionEncoder : CVNLPCaptionModelBase {

	unsigned long long data_dim[4];

}
-(void)computeCaptionForImage:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
-(unsigned long long)_blob_size:(SCD_Struct_CV2*)arg1 ;
-(void)computeCaptionForPixelBuffer:(CVBufferRef)arg1 outputs:(id*)arg2 ;
-(void)_fill_blob_data:(SCD_Struct_CV2*)arg1 with:(float)arg2 ;
@end

