/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@interface ISImageSetVariantResourceImage : NSObject {

	CGImageRef _image;
	unsigned long long _size;
	unsigned long long _scale;

}

@property (assign) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign) unsigned long long scale;              //@synthesize scale=_scale - In the implementation block
@property (readonly) CGImageRef image;                    //@synthesize image=_image - In the implementation block
+(id)keyForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 ;
-(unsigned long long)size;
-(void)dealloc;
-(id)description;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)scale;
-(CGImageRef)image;
-(void)setScale:(unsigned long long)arg1 ;
-(id)initWithImage:(CGImageRef)arg1 scale:(unsigned long long)arg2 ;
@end
