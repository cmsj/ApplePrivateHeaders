/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImagingCore.framework/Versions/A/PAImagingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface IPARenderedImageData : NSObject {

	unsigned long long _histogramA[256];
	unsigned long long _histogramR[256];
	unsigned long long _histogramG[256];
	unsigned long long _histogramB[256];
	unsigned long long* _histograms[4];
	char _histogramCalculated;
	long long _width;
	long long _height;
	long long _rowBytes;
	NSData* _rasterData;

}

@property (assign,nonatomic) long long width;                       //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                      //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long rowBytes;                    //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,retain) NSData * rasterData;                   //@synthesize rasterData=_rasterData - In the implementation block
@property (assign,nonatomic) char histogramCalculated;              //@synthesize histogramCalculated=_histogramCalculated - In the implementation block
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)width;
-(long long)height;
-(long long)rowBytes;
-(void)setRowBytes:(long long)arg1 ;
-(long long)histogramBucketCount;
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 rowBytes:(long long)arg3 rasterData:(id)arg4 ;
-(char)computeHistogram;
-(unsigned long long*)histogramRed;
-(unsigned long long*)histogramGreen;
-(unsigned long long*)histogramBlue;
-(NSData *)rasterData;
-(void)setRasterData:(NSData *)arg1 ;
-(char)histogramCalculated;
-(void)setHistogramCalculated:(char)arg1 ;
@end

