/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSCGSWindowCornerMask : NSObject {

	CGImageRef _image;
	double _imageScale;
	CGRect _center;
	char _hasTrivialEdges;
	char _clipsWindowContents;
	char _definesShadowShape;

}

@property (readonly) CGImageRef image;                             //@synthesize image=_image - In the implementation block
@property (readonly) double imageScale;                            //@synthesize imageScale=_imageScale - In the implementation block
@property (readonly) CGRect center;                                //@synthesize center=_center - In the implementation block
@property (getter=isNinePart,readonly) char ninePart; 
@property (readonly) char hasTrivialEdges;                         //@synthesize hasTrivialEdges=_hasTrivialEdges - In the implementation block
@property (readonly) char hasUniformSquareCorners; 
@property (readonly) char clipsWindowContents;                     //@synthesize clipsWindowContents=_clipsWindowContents - In the implementation block
@property (readonly) char definesShadowShape;                      //@synthesize definesShadowShape=_definesShadowShape - In the implementation block
-(void)dealloc;
-(CGImageRef)image;
-(CGRect)center;
-(id)initWithImage:(CGImageRef)arg1 scale:(double)arg2 center:(CGRect)arg3 hasTrivialEdges:(char)arg4 clipsWindowContents:(char)arg5 definesShadowShape:(char)arg6 ;
-(char)isNinePart;
-(char)hasUniformSquareCorners;
-(double)imageScale;
-(char)hasTrivialEdges;
-(char)clipsWindowContents;
-(char)definesShadowShape;
@end

