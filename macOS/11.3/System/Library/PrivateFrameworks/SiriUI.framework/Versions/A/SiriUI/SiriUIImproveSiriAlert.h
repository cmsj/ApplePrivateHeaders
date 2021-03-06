/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class SiriUIOrbView, NSTextField, NSButton, NSTimer;

@interface SiriUIImproveSiriAlert : NSWindowController {

	SiriUIOrbView* _orbView;
	NSTextField* _messageText;
	NSTextField* _informativeText;
	NSButton* _aboutLinkButton;
	NSButton* _firstButton;
	NSButton* _secondButton;
	NSTimer* _animationTimer;

}

@property (__weak) SiriUIOrbView * orbView;                         //@synthesize orbView=_orbView - In the implementation block
@property (__weak) NSTextField * messageText;                       //@synthesize messageText=_messageText - In the implementation block
@property (__weak) NSTextField * informativeText;                   //@synthesize informativeText=_informativeText - In the implementation block
@property (__weak) NSButton * aboutLinkButton;                      //@synthesize aboutLinkButton=_aboutLinkButton - In the implementation block
@property (__weak) NSButton * firstButton;                          //@synthesize firstButton=_firstButton - In the implementation block
@property (__weak) NSButton * secondButton;                         //@synthesize secondButton=_secondButton - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;              //@synthesize animationTimer=_animationTimer - In the implementation block
-(id)init;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)runModal;
-(NSTextField *)informativeText;
-(void)setInformativeText:(NSTextField *)arg1 ;
-(void)setMessageText:(NSTextField *)arg1 ;
-(NSTextField *)messageText;
-(void)windowDidLoad;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(void)setFirstButton:(NSButton *)arg1 ;
-(NSButton *)firstButton;
-(void)setSecondButton:(NSButton *)arg1 ;
-(NSButton *)secondButton;
-(SiriUIOrbView *)orbView;
-(void)setOrbView:(SiriUIOrbView *)arg1 ;
-(NSButton *)aboutLinkButton;
-(void)siriUIBeginModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clickedFirstButton:(id)arg1 ;
-(void)clickedSecondButton:(id)arg1 ;
-(void)clickedAboutLink:(id)arg1 ;
-(void)setAboutLinkButton:(NSButton *)arg1 ;
@end

