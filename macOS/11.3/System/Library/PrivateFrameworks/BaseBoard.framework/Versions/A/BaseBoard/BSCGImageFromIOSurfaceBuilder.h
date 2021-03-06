/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@class IOSurface;

@interface BSCGImageFromIOSurfaceBuilder : NSObject {

	IOSurface* _surface;
	CGImageRef _image;
	char _isDirty;
	char _isOpaque;

}

@property (getter=isOpaque,nonatomic,readonly) char opaque;              //@synthesize isOpaque=_isOpaque - In the implementation block
-(void)dealloc;
-(char)isOpaque;
-(id)setOpaque:(char)arg1 ;
-(CGImageRef)buildCGImage;
@end

