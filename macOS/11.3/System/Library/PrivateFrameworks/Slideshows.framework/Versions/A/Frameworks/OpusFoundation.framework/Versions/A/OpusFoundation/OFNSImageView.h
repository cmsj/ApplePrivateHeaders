/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFNSView.h>

@class OFNSImage;

@interface OFNSImageView : OFNSView {

	OFNSImage* _image;

}

@property (nonatomic,retain) OFNSImage * image;              //@synthesize image=_image - In the implementation block
-(void)dealloc;
-(void)setImage:(OFNSImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(OFNSImage *)image;
-(id)initWithImage:(id)arg1 ;
@end

