/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSAnimation.h>

@class NSWindow;

@interface NSWindowScaleAnimation : NSAnimation {

	NSWindow* _window;
	double _startScale;
	double _endScale;
	long long _tag;

}

@property (retain) NSWindow * window;              //@synthesize window=_window - In the implementation block
@property (assign) double startScale;              //@synthesize startScale=_startScale - In the implementation block
@property (assign) double endScale;                //@synthesize endScale=_endScale - In the implementation block
@property (assign) long long tag;                  //@synthesize tag=_tag - In the implementation block
-(void)dealloc;
-(void)setTag:(long long)arg1 ;
-(NSWindow *)window;
-(long long)tag;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)startAnimation;
-(void)setCurrentProgress:(float)arg1 ;
-(id)_screen;
-(double)startScale;
-(void)setStartScale:(double)arg1 ;
-(double)endScale;
-(void)setEndScale:(double)arg1 ;
@end
