/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSData;

@interface AVCVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	CVBufferRef _depthPixelBuffer;
	SCD_Struct_VC87 _time;
	NSData* _imageData;
	NSData* _effectsMetadata;
	float _renderProcessTime;
	id _delegate;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;                   //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef depthPixelBuffer;              //@synthesize depthPixelBuffer=_depthPixelBuffer - In the implementation block
@property (retain) NSData * imageData;                                  //@synthesize imageData=_imageData - In the implementation block
@property (assign) SCD_Struct_VC87 time;                                //@synthesize time=_time - In the implementation block
@property (retain) NSData * effectsMetadata;                            //@synthesize effectsMetadata=_effectsMetadata - In the implementation block
@property (assign) float renderProcessTime;                             //@synthesize renderProcessTime=_renderProcessTime - In the implementation block
-(void)dealloc;
-(id)delegate;
-(SCD_Struct_VC87)time;
-(CVBufferRef)pixelBuffer;
-(void)setTime:(SCD_Struct_VC87)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(NSData *)effectsMetadata;
-(void)setEffectsMetadata:(NSData *)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(float)renderProcessTime;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_VC87)arg2 imageData:(id)arg3 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_VC87)arg3 imageData:(id)arg4 delegate:(id)arg5 ;
-(void)setDepthPixelBuffer:(CVBufferRef)arg1 ;
-(void)setRenderProcessTime:(float)arg1 ;
-(CVBufferRef)depthPixelBuffer;
@end

