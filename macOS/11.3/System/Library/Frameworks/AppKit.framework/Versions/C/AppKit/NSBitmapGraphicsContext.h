/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindowGraphicsContext.h>

@class NSBitmapImageRep;

@interface NSBitmapGraphicsContext : NSWindowGraphicsContext {

	NSBitmapImageRep* _imageRep;
	struct {
		unsigned _isFlipped : 1;
		unsigned _isDrawingToScreen : 1;
		unsigned _unused : 30;
	}  _bgcFlags;

}
-(void)dealloc;
-(char)isFlipped;
-(id)_initWithBitmapImageRep:(id)arg1 ;
-(char)isDrawingToScreen;
-(id)_initWithGraphicsPort:(void*)arg1 flipped:(char)arg2 ;
-(id)_initWithGraphicsPort:(void*)arg1 flipped:(char)arg2 drawingToScreen:(char)arg3 ;
-(CGImageRef)retainedCGImage;
@end

