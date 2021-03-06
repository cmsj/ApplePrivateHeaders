/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSButton.h>
#import <libobjc.A.dylib/NSPopoverDelegate.h>

@class NSWindow, NSError, NSPopover, NSString;

@interface NSDocumentAutosaveButton : NSButton <NSPopoverDelegate> {

	NSWindow* _representedWindow;
	NSError* _nonModalError;
	char _needsShowAlertPopover;
	char _userIsIdleForAlertPopover;
	char _isPopoverVisible;
	NSPopover* _documentPopover;
	NSPopover* _documentErrorPopover;

}

@property (getter=isPopoverVisible,readonly) char popoverVisible; 
@property (copy) NSError * nonModalDocumentError; 
@property (__weak) NSWindow * representedWindow;                               //@synthesize representedWindow=_representedWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)popoverWillShow:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(NSError *)nonModalDocumentError;
-(void)setNonModalDocumentError:(NSError *)arg1 ;
-(void)showPopover;
-(void)dismissPopover;
-(void)setRepresentedWindow:(NSWindow *)arg1 ;
-(char)isPopoverVisible;
-(NSWindow *)representedWindow;
-(void)_setupAlertPopoverAutohideIgnoringRecentEvents:(char)arg1 ;
-(void)_userBecameIdleForAlertPopover;
-(void)_delayedHideAlertPopover;
-(void)_showAlertPopoverIgnoringRecentEvents:(char)arg1 ;
-(void)_windowDidOrderOnScreen:(id)arg1 ;
-(void)_handleClick:(id)arg1 ;
-(void)_dismissDocumentErrorPopover;
@end

