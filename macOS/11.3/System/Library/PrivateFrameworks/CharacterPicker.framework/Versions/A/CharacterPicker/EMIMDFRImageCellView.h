/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, NSString;

@interface EMIMDFRImageCellView : NSView {

	char _enabled;
	NSImage* _image;
	NSString* _stringValue;

}

@property (copy) NSImage * image;                     //@synthesize image=_image - In the implementation block
@property (copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign) char enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(NSString *)stringValue;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(char)allowsVibrancy;
-(NSImage *)image;
-(void)drawRect:(CGRect)arg1 ;
@end
