/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup {

	double _scale;
	cuintproperties _textureProperties;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,readonly) char isAlphaCropped; 
-(CGSize)size;
-(id)description;
-(double)scale;
-(char)isOpaque;
-(id)textureWithBufferAllocator:(id)arg1 ;
-(int)exifOrientation;
-(char)isAlphaCropped;
-(CGRect)alphaCroppedRect;
-(char)_cacheRenditionProperties;
@end
