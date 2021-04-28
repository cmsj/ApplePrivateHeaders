/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetoothUI/AudioOptionsViewController.h>

@class NSTimer, NSButton, NSTextField;

@interface AudioOptionsViewListeningMode : AudioOptionsViewController {

	NSTimer* unlockTimer;
	BOOL buttonsLocked;
	BOOL mReady;
	NSButton* _imageButtonNormal;
	NSButton* _textButtonNormal;
	NSButton* _imageButtonANC;
	NSButton* _textButtonANC;
	NSTextField* _legendANC;
	NSButton* _imageButtonAwareness;
	NSButton* _textButtonAwareness;
	NSTextField* _legendAwareness;

}

@property (assign) NSButton * imageButtonNormal;                 //@synthesize imageButtonNormal=_imageButtonNormal - In the implementation block
@property (assign) NSButton * textButtonNormal;                  //@synthesize textButtonNormal=_textButtonNormal - In the implementation block
@property (assign) NSButton * imageButtonANC;                    //@synthesize imageButtonANC=_imageButtonANC - In the implementation block
@property (assign) NSButton * textButtonANC;                     //@synthesize textButtonANC=_textButtonANC - In the implementation block
@property (assign) NSTextField * legendANC;                      //@synthesize legendANC=_legendANC - In the implementation block
@property (assign) NSButton * imageButtonAwareness;              //@synthesize imageButtonAwareness=_imageButtonAwareness - In the implementation block
@property (assign) NSButton * textButtonAwareness;               //@synthesize textButtonAwareness=_textButtonAwareness - In the implementation block
@property (assign) NSTextField * legendAwareness;                //@synthesize legendAwareness=_legendAwareness - In the implementation block
+(BOOL)deviceHasViews:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(void)loadPrefs;
-(void)hideANC;
-(void)hideAwareness;
-(void)deviceToDisplay;
-(void)setToggleButtonState:(id)arg1 state:(BOOL)arg2 ;
-(void)setListeningStateDisplay:(unsigned char)arg1 ;
-(unsigned char)listeningStateDisplay;
-(void)unlockButtons;
-(void)displayToDevice;
-(void)lockButtons;
-(void)setListeningModeOnDevice:(unsigned char)arg1 ;
-(void)setNormalListeningMode:(id)arg1 ;
-(void)setANCListeningMode:(id)arg1 ;
-(void)setAwarenessListeningMode:(id)arg1 ;
-(void)handleNormalTextButtonClick:(id)arg1 ;
-(void)handleANCTextButtonClick:(id)arg1 ;
-(void)handleAwarenessTextButtonClick:(id)arg1 ;
-(void)handleClose;
-(NSButton *)imageButtonNormal;
-(void)setImageButtonNormal:(NSButton *)arg1 ;
-(NSButton *)textButtonNormal;
-(void)setTextButtonNormal:(NSButton *)arg1 ;
-(NSButton *)imageButtonANC;
-(void)setImageButtonANC:(NSButton *)arg1 ;
-(NSButton *)textButtonANC;
-(void)setTextButtonANC:(NSButton *)arg1 ;
-(NSTextField *)legendANC;
-(void)setLegendANC:(NSTextField *)arg1 ;
-(NSButton *)imageButtonAwareness;
-(void)setImageButtonAwareness:(NSButton *)arg1 ;
-(NSButton *)textButtonAwareness;
-(void)setTextButtonAwareness:(NSButton *)arg1 ;
-(NSTextField *)legendAwareness;
-(void)setLegendAwareness:(NSTextField *)arg1 ;
@end
