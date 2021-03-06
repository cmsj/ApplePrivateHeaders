/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AVCaptureStillImageRequest_Tundra : NSObject {

	/*^block*/id _completionBlock;
	NSDictionary* _outputSettings;
	long long _imageOrientation;
	char _imageMirrored;

}

@property (nonatomic,copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSDictionary * outputSettings;              //@synthesize outputSettings=_outputSettings - In the implementation block
@property (assign,nonatomic) long long imageOrientation;                 //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign,nonatomic) char imageMirrored;                         //@synthesize imageMirrored=_imageMirrored - In the implementation block
+(id)request;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSDictionary *)outputSettings;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(void)setImageOrientation:(long long)arg1 ;
-(void)setImageMirrored:(char)arg1 ;
-(long long)imageOrientation;
-(char)imageMirrored;
@end

