/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString, NSArray, NSImage, NSColor;

@interface NSTabBarItem : NSObject <NSSecureCoding> {

	NSString* _label;
	NSAttributedString* _attributedTitle;
	NSString* _toolTip;
	NSArray* _accessoryViews;
	NSImage* _image;
	NSColor* _themeColor;
	char _pinned;
	char _showIcon;
	char _hideTab;

}

@property (copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (copy) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (copy) NSString * toolTip;                                //@synthesize toolTip=_toolTip - In the implementation block
@property (retain) NSImage * image;                                 //@synthesize image=_image - In the implementation block
@property (copy) NSColor * themeColor;                              //@synthesize themeColor=_themeColor - In the implementation block
@property (getter=isPinned) char pinned;                            //@synthesize pinned=_pinned - In the implementation block
@property (assign) char showIcon;                                   //@synthesize showIcon=_showIcon - In the implementation block
@property (assign) char hideTab;                                    //@synthesize hideTab=_hideTab - In the implementation block
@property (copy) NSArray * accessoryViews;                          //@synthesize accessoryViews=_accessoryViews - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(NSImage *)image;
-(NSString *)toolTip;
-(void)setToolTip:(NSString *)arg1 ;
-(char)isPinned;
-(void)setPinned:(char)arg1 ;
-(char)hideTab;
-(NSArray *)accessoryViews;
-(void)setAccessoryViews:(NSArray *)arg1 ;
-(NSColor *)themeColor;
-(void)setThemeColor:(NSColor *)arg1 ;
-(char)showIcon;
-(void)setShowIcon:(char)arg1 ;
-(void)setHideTab:(char)arg1 ;
@end

