/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOpenGLContext;

@interface IKOpenGLRoundedRectRendererCache : NSObject {

	unsigned _glID;
	NSOpenGLContext* _context;
	float _strokeColor[4];
	float _fillColor[4];
	float _radius;
	float _scaleFactor;
	int _mode;
	int _lineWidth;

}
-(id)initWithGLContext:(id)arg1 glID:(unsigned)arg2 radius:(float)arg3 scaleFactor:(float)arg4 strokeColor:(float*)arg5 fillColor:(float*)arg6 mode:(int)arg7 lineWidth:(int)arg8 ;
-(char)match:(float)arg1 scaleFactor:(float)arg2 strokeColor:(float*)arg3 fillColor:(float*)arg4 mode:(int)arg5 lineWidth:(int)arg6 ;
-(void)dealloc;
-(id)context;
-(unsigned)glID;
@end

