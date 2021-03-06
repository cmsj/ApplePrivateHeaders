/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSToolbarItem.h>

@protocol NSMenuToolbarItemControl;
@class NSMenu, NSView, NSImage, NSString;

@interface NSMenuToolbarItem : NSToolbarItem {

	NSMenu* _menu;
	char _showsIndicator;
	NSView*<NSMenuToolbarItemControl> _control;
	NSImage* _image;
	NSString* _title;
	id _target;
	SEL _action;

}

@property (retain) NSMenu * menu; 
@property (assign) char showsIndicator; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setImage:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(NSMenu *)menu;
-(id)title;
-(id)initWithItemIdentifier:(id)arg1 ;
-(id)_view;
-(void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2 ;
-(id)image;
-(void)setMenu:(NSMenu *)arg1 ;
-(char)showsIndicator;
-(void)setShowsIndicator:(char)arg1 ;
-(id)_imageToDisplay;
-(void)_performAction:(id)arg1 ;
-(void)_setControlSizeAndFontForDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2 ;
-(void)_configureControlRepresentation;
-(id)menuFormRepresentation;
-(void)validate;
@end

