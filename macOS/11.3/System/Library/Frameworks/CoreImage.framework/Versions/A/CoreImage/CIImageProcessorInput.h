/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <libobjc.A.dylib/CIImageProcessorInput.h>

@protocol CIImageProcessorInput
@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@required
-(unsigned long long)bytesPerRow;
-(IOSurfaceRef)surface;
-(int)format;
-(CVBufferRef)pixelBuffer;
-(const void*)baseAddress;
-(CGRect)region;
-(id<MTLTexture>)metalTexture;

@end


@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
-(void)dealloc;
-(const void*)baseAddress;
-(id<MTLTexture>)metalTexture;
@end

