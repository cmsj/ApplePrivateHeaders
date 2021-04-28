/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCaptureOperationDescriptor;
#import <AVFCapture/AVFCapture-Structs.h>
@interface AVCaptureOperationDescriptorQueueItem : NSObject {

	id<AVCaptureOperationDescriptor> _operationDescriptor;
	SCD_Struct_AV0 _operationTime;

}
-(void)dealloc;
-(id)init;
-(id)initWithOperationDescriptor:(id)arg1 operationTime:(SCD_Struct_AV0)arg2 ;
-(id)operationDescriptor;
-(SCD_Struct_AV0)operationTime;
@end
