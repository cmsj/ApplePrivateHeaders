/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPRequest.h>

@class VCPImageHumanPoseAnalyzer;

@interface VCPHumanPoseImageRequest : VCPRequest {

	VCPImageHumanPoseAnalyzer* _analyzer;
	int _preferredWidth;
	int _preferredHeight;
	unsigned _preferredFormat;

}
+(int)parseResults:(id)arg1 observations:(id)arg2 ;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(id)processImage:(CVBufferRef)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(unsigned)preferredPixelFormat;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(char)updateWithOptions:(id)arg1 error:(id*)arg2 ;
-(char)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
@end

