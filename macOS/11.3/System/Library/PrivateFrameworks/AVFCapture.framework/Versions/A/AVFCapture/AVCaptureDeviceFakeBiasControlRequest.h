/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureDeviceControlRequest.h>

@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest {

	float _fakeBias;
	SCD_Struct_AV0 _fakeBiasCompletionTime;

}

@property (assign,nonatomic) float fakeBias;                                     //@synthesize fakeBias=_fakeBias - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV0 fakeBiasCompletionTime;              //@synthesize fakeBiasCompletionTime=_fakeBiasCompletionTime - In the implementation block
-(float)fakeBias;
-(void)setFakeBias:(float)arg1 ;
-(SCD_Struct_AV0)fakeBiasCompletionTime;
-(void)setFakeBiasCompletionTime:(SCD_Struct_AV0)arg1 ;
@end

