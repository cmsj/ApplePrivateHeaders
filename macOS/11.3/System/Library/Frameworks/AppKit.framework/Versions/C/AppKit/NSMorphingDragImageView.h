/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImageView, NSImage;

@interface NSMorphingDragImageView : NSView {

	NSImageView* _previousImageView;
	NSImageView* _currentImageView;
	NSImage* _image;

}

@property (nonatomic,retain) NSImage * image;              //@synthesize image=_image - In the implementation block
-(void)setImage:(NSImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(id)_createImageView;
-(void)setImage:(id)arg1 animated:(char)arg2 ;
@end
