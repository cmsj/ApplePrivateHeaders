/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSButton.h>

@class NSColor, NSImage;

@interface CNUIColorButton : NSButton {

	NSColor* _color;
	NSImage* _defaultImage;
	NSImage* _selectedImage;
	NSImage* _focusedImage;
	NSImage* _activatedImage;
	double _wellDiamter;

}

@property (retain) NSImage * defaultImage;                //@synthesize defaultImage=_defaultImage - In the implementation block
@property (retain) NSImage * selectedImage;               //@synthesize selectedImage=_selectedImage - In the implementation block
@property (retain) NSImage * focusedImage;                //@synthesize focusedImage=_focusedImage - In the implementation block
@property (retain) NSImage * activatedImage;              //@synthesize activatedImage=_activatedImage - In the implementation block
@property (retain) NSColor * color;                       //@synthesize color=_color - In the implementation block
@property (assign) double wellDiamter;                    //@synthesize wellDiamter=_wellDiamter - In the implementation block
+(id)wellImageWithColor:(id)arg1 diameter:(double)arg2 drawBorder:(char)arg3 ;
+(id)ringedWellImageWithColor:(id)arg1 diameter:(double)arg2 ;
+(id)ringedWellImageWithColor:(id)arg1 shadingFraction:(double)arg2 diameter:(double)arg3 ;
-(id)init;
-(CGSize)intrinsicContentSize;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(id)initWithColor:(id)arg1 size:(double)arg2 ;
-(void)setWellDiamter:(double)arg1 ;
-(double)wellDiamter;
-(void)setDefaultImage:(NSImage *)arg1 ;
-(void)setSelectedImage:(NSImage *)arg1 ;
-(void)setFocusedImage:(NSImage *)arg1 ;
-(void)setActivatedImage:(NSImage *)arg1 ;
-(NSImage *)defaultImage;
-(NSImage *)selectedImage;
-(NSImage *)focusedImage;
-(NSImage *)activatedImage;
@end

