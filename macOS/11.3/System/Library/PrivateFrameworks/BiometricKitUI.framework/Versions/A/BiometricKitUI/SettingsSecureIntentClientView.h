/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Versions/A/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/SecureIntentClientView.h>

@class BKMesaSecureIntentProvider, BKUIDeviceImageView, NSImage, NSTextField, NSView, NSButton, NSString;

@interface SettingsSecureIntentClientView : NSView <SecureIntentClientView> {

	BKMesaSecureIntentProvider* _secureIntentProvider;
	BKUIDeviceImageView* _mesaEnrollTutorDeviceView;
	NSImage* _deviceImage;
	NSTextField* _securePromptMessageTitle;
	NSTextField* _securePromptMessageSubTitle;
	NSView* _mesaEnrollTextContainer;
	NSButton* _cancelButton;

}

@property (nonatomic,retain) BKUIDeviceImageView * mesaEnrollTutorDeviceView;                       //@synthesize mesaEnrollTutorDeviceView=_mesaEnrollTutorDeviceView - In the implementation block
@property (nonatomic,retain) NSImage * deviceImage;                                                 //@synthesize deviceImage=_deviceImage - In the implementation block
@property (nonatomic,retain) NSTextField * securePromptMessageTitle;                                //@synthesize securePromptMessageTitle=_securePromptMessageTitle - In the implementation block
@property (nonatomic,retain) NSTextField * securePromptMessageSubTitle;                             //@synthesize securePromptMessageSubTitle=_securePromptMessageSubTitle - In the implementation block
@property (nonatomic,retain) NSView * mesaEnrollTextContainer;                                      //@synthesize mesaEnrollTextContainer=_mesaEnrollTextContainer - In the implementation block
@property (nonatomic,retain) NSButton * cancelButton;                                               //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) BKMesaSecureIntentProvider * secureIntentProvider;              //@synthesize secureIntentProvider=_secureIntentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(NSButton *)cancelButton;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(NSImage *)deviceImage;
-(void)setDeviceImage:(NSImage *)arg1 ;
-(BKUIDeviceImageView *)mesaEnrollTutorDeviceView;
-(void)setMesaEnrollTutorDeviceView:(BKUIDeviceImageView *)arg1 ;
-(BKMesaSecureIntentProvider *)secureIntentProvider;
-(void)setSecureIntentProvider:(BKMesaSecureIntentProvider *)arg1 ;
-(void)_setupLabel:(id)arg1 ;
-(void)layoutSecureIntentImageView;
-(void)layoutSecureIntentEnrollTextContainer;
-(NSTextField *)securePromptMessageTitle;
-(NSView *)mesaEnrollTextContainer;
-(NSTextField *)securePromptMessageSubTitle;
-(void)showRetryOnErrorUI;
-(void)showInitialUI;
-(void)setSecurePromptMessageTitle:(NSTextField *)arg1 ;
-(void)setSecurePromptMessageSubTitle:(NSTextField *)arg1 ;
-(void)setMesaEnrollTextContainer:(NSView *)arg1 ;
@end

