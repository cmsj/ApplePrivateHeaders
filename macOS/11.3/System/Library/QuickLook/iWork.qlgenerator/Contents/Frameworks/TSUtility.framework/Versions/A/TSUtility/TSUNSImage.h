/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@class NSImage;

@interface TSUNSImage : TSUImage {

	NSImage* mNSImage;
	double mScale;

}
+(id)imageNamed:(id)arg1 ;
-(id)compositedImageWithColor:(id)arg1 alpha:(double)arg2 blendMode:(int)arg3 ;
-(id)compositeImageWithOverlayImage:(id)arg1 overlayTintColor:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(double)scale;
-(CGImageRef)CGImage;
-(id)NSImage;
-(id)initWithNSImage:(id)arg1 ;
-(int)imageOrientation;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(CGImageRef)p_CGImageForGraphicsContext:(id)arg1 size:(CGSize)arg2 ;
-(id)stretchedImageOfSize:(CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5 ;
-(CGImageRef)CGImageForContentsScale:(double)arg1 ;
@end

