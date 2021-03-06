/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/Versions/A/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InertiaCam/InertiaCam-Structs.h>
@interface ImageHomographyResampler : NSObject {

	double homographyMatrix[9];

}
-(id)init;
-(void)setHomographyMatrix:(double*)arg1 ;
-(void)EraseCVPixelBuffer:(CVBufferRef)arg1 ;
-(CGImageRef)ResampleCGImage:(CGImageRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(void)ClearOutOfBoundsPixels:(WorkingPixmapRecord*)arg1 ;
-(short)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 toPixelBuffer:(CVBufferRef)arg4 ;
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
@end

