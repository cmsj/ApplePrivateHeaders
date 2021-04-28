/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSImageView, NSTextField, NSAlert;

@interface NSSavePanelAlertStyleContentView : NSView {

	NSImageView* iconView;
	NSTextField* messageTextField;
	NSTextField* informativeMessageTextField;
	NSAlert* alert;

}

@property (assign) NSImageView * iconView; 
@property (assign) NSTextField * messageTextField; 
@property (assign) NSTextField * informativeMessageTextField; 
-(void)dealloc;
-(void)setMessage:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)stopTimerForSpeaking;
-(void)startTimerForSpeaking;
-(NSImageView *)iconView;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_windowDidOrderOnScreen;
-(void)cancelAlertSpeaking;
-(NSTextField *)messageTextField;
-(NSTextField *)informativeMessageTextField;
-(void)setIconView:(NSImageView *)arg1 ;
-(void)setMessageTextField:(NSTextField *)arg1 ;
-(void)setInformativeMessageTextField:(NSTextField *)arg1 ;
@end
