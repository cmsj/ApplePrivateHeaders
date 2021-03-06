/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSButton.h>

@class NSImage;

@interface IKPTSquareButton : NSButton {

	NSImage* _initialImage;

}

@property (assign) long long style; 
@property (assign) char displaysState; 
+(Class)cellClass;
-(void)setDisplaysState:(char)arg1 ;
-(char)displaysState;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setImage:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)commonInit;
-(void)_updateStyle;
-(char)_imageButton;
@end

