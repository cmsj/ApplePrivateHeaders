/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <AppKit/NSImage.h>

@interface OFNSImage : NSImage {

	CGRect contentsCenter;

}
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(CGImageRef)CGImage;
-(id)resizableImageWithCapInsets:(NSEdgeInsets)arg1 ;
-(id)imageWithSize:(CGSize)arg1 opaque:(char)arg2 scale:(double)arg3 ;
@end

