/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSPopoverTouchBarItem.h>

@class NSTextInputContext;

@interface __NSTextInputPopoverTouchBarItem : NSPopoverTouchBarItem {

	NSTextInputContext* _inputContext;
	char _postsESCOnClose;
	char _postESCOnNextClose;

}

@property (assign) NSTextInputContext * inputContext;              //@synthesize inputContext=_inputContext - In the implementation block
@property (assign) char postsESCOnClose; 
@property (assign) char postESCOnNextClose;                        //@synthesize postESCOnNextClose=_postESCOnNextClose - In the implementation block
-(void)showPopover:(id)arg1 ;
-(NSTextInputContext *)inputContext;
-(char)_allowsInvisiblePopover;
-(char)postsESCOnClose;
-(void)setPostESCOnNextClose:(char)arg1 ;
-(void)setPostsESCOnClose:(char)arg1 ;
-(void)dismissPopover:(id)arg1 postESCKeyEvent:(char)arg2 ;
-(void)setInputContext:(NSTextInputContext *)arg1 ;
-(char)postESCOnNextClose;
@end

