/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImagingCore.framework/Versions/A/PAImagingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PAImagingCore/PAImagingCore-Structs.h>
@interface IPAHistogramDifferencer : NSObject
-(CGImageRef)newImage:(id)arg1 ;
-(id)renderImage:(CGImageRef)arg1 ;
-(id)renderImageAtPath:(id)arg1 ;
-(float)histogramChannelDifference:(unsigned long long*)arg1 channel2:(unsigned long long*)arg2 bucketCount:(long long)arg3 ;
-(void)normalizeHistogram:(id)arg1 scale:(float)arg2 ;
-(void)normalizeHistograms:(id)arg1 data2:(id)arg2 ;
-(float)compareHistograms:(id)arg1 data2:(id)arg2 ;
-(float)computeDifferenceWithPath1:(id)arg1 path2:(id)arg2 ;
-(float)computeDifferenceWithImage1:(CGImageRef)arg1 image2:(CGImageRef)arg2 ;
@end
