/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@class MRImage;

@interface MRPatchworkPatch : NSObject {

	MRImage* _image;
	CGRect rectangle;
	char needsBlend;

}

@property (nonatomic,retain) MRImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect rectangle; 
@property (assign,nonatomic) char needsBlend; 
-(void)dealloc;
-(void)setImage:(MRImage *)arg1 ;
-(MRImage *)image;
-(CGRect)rectangle;
-(void)setRectangle:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 rectangle:(CGRect)arg2 needsBlend:(char)arg3 ;
-(char)needsBlend;
-(void)setNeedsBlend:(char)arg1 ;
@end
