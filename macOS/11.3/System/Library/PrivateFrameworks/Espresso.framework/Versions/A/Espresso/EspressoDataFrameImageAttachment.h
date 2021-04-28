/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment {

	vImage_Buffer* buffer;
	int _nChannels;

}

@property (assign) int nChannels;              //@synthesize nChannels=_nChannels - In the implementation block
+(CVBufferRef)createCVPixelBufferFromvImage:(vImage_Buffer*)arg1 withPixelFormat:(unsigned)arg2 ;
-(vImage_Buffer*)copyAsImageGrayscaleOrBGRA;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(int)nChannels;
-(void)setNChannels:(int)arg1 ;
@end
