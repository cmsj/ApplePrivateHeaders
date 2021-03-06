/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKStrokeSelectionImageConfig : NSObject <NSCopying> {

	char _invertedColors;
	char _rotated;
	double _scale;
	CGSize _imageSize;
	CGRect _strokeBounds;
	CGRect _imageViewBounds;

}

@property (nonatomic,readonly) CGRect strokeBounds;                 //@synthesize strokeBounds=_strokeBounds - In the implementation block
@property (nonatomic,readonly) CGRect imageViewBounds;              //@synthesize imageViewBounds=_imageViewBounds - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                    //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) char invertedColors;                 //@synthesize invertedColors=_invertedColors - In the implementation block
@property (nonatomic,readonly) char rotated;                        //@synthesize rotated=_rotated - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)scale;
-(CGSize)imageSize;
-(char)rotated;
-(CGRect)strokeBounds;
-(CGRect)imageViewBounds;
-(char)invertedColors;
-(id)initWithStrokeBounds:(CGRect)arg1 imageViewBounds:(CGRect)arg2 scale:(double)arg3 imageSize:(CGSize)arg4 invertedColors:(char)arg5 rotated:(char)arg6 ;
@end

