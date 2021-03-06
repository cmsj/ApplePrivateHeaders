/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>
#import <libobjc.A.dylib/MMPinFieldViewDelegate.h>
#import <libobjc.A.dylib/MMLinkTextFieldDelegate.h>
#import <libobjc.A.dylib/MMCSCProgressIndicatorProtocol.h>

@protocol MMCSCSMSTargetRecoveryViewControllerDelegate;
@class MMPinFieldView, NSString, NSImageView, NSTextField, MMLinkTextField, NSView, NSLayoutConstraint, NSButton, NSProgressIndicator, iCloudTouchBarController, NSTouchBar;

@interface MMCSCSMSTargetRecoveryViewController : NSViewController <NSTouchBarProvider, MMPinFieldViewDelegate, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol> {

	MMPinFieldView* _smsTargetPinFieldView;
	NSString* _smsTargetCountryCode;
	NSString* _smsTarget;
	NSString* _smsVerificationToken;
	id<MMCSCSMSTargetRecoveryViewControllerDelegate> _delegate;
	NSImageView* _smsTargetImageView;
	NSTextField* _smsTargetTitle;
	MMLinkTextField* _smsTargetMessage;
	NSView* _smsTargetPinFieldPlaceholder;
	NSLayoutConstraint* _smsTargetPinFieldWidthConstraint;
	NSButton* _smsTargetConfirmButton;
	NSButton* _smsTargetCancelButton;
	NSButton* _smsTargetHelpButton;
	NSProgressIndicator* _smsTargetProgressIndicator;
	iCloudTouchBarController* _touchBarController;

}

@property (retain) MMPinFieldView * smsTargetPinFieldView;                                 //@synthesize smsTargetPinFieldView=_smsTargetPinFieldView - In the implementation block
@property (copy) NSString * smsVerificationToken;                                          //@synthesize smsVerificationToken=_smsVerificationToken - In the implementation block
@property (retain) iCloudTouchBarController * touchBarController;                          //@synthesize touchBarController=_touchBarController - In the implementation block
@property (assign) id<MMCSCSMSTargetRecoveryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSImageView * smsTargetImageView;                                       //@synthesize smsTargetImageView=_smsTargetImageView - In the implementation block
@property (__weak) NSTextField * smsTargetTitle;                                           //@synthesize smsTargetTitle=_smsTargetTitle - In the implementation block
@property (__weak) NSView * smsTargetPinFieldPlaceholder;                                  //@synthesize smsTargetPinFieldPlaceholder=_smsTargetPinFieldPlaceholder - In the implementation block
@property (__weak) NSLayoutConstraint * smsTargetPinFieldWidthConstraint;                  //@synthesize smsTargetPinFieldWidthConstraint=_smsTargetPinFieldWidthConstraint - In the implementation block
@property (__weak) MMLinkTextField * smsTargetMessage;                                     //@synthesize smsTargetMessage=_smsTargetMessage - In the implementation block
@property (__weak) NSButton * smsTargetConfirmButton;                                      //@synthesize smsTargetConfirmButton=_smsTargetConfirmButton - In the implementation block
@property (__weak) NSButton * smsTargetCancelButton;                                       //@synthesize smsTargetCancelButton=_smsTargetCancelButton - In the implementation block
@property (__weak) NSButton * smsTargetHelpButton;                                         //@synthesize smsTargetHelpButton=_smsTargetHelpButton - In the implementation block
@property (__weak) NSProgressIndicator * smsTargetProgressIndicator;                       //@synthesize smsTargetProgressIndicator=_smsTargetProgressIndicator - In the implementation block
@property (copy) NSString * smsTargetCountryCode;                                          //@synthesize smsTargetCountryCode=_smsTargetCountryCode - In the implementation block
@property (copy) NSString * smsTarget;                                                     //@synthesize smsTarget=_smsTarget - In the implementation block
@property (readonly) NSTouchBar * touchBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MMCSCSMSTargetRecoveryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MMCSCSMSTargetRecoveryViewControllerDelegate>)arg1 ;
-(NSTouchBar *)touchBar;
-(iCloudTouchBarController *)touchBarController;
-(void)setTouchBarController:(iCloudTouchBarController *)arg1 ;
-(void)pinFieldViewTextDidChange:(id)arg1 ;
-(void)clickedOnLink:(id)arg1 ;
-(NSButton *)smsTargetConfirmButton;
-(NSButton *)smsTargetCancelButton;
-(NSImageView *)smsTargetImageView;
-(NSTextField *)smsTargetTitle;
-(MMLinkTextField *)smsTargetMessage;
-(NSButton *)smsTargetHelpButton;
-(void)confirmButtonClicked:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(NSString *)smsTarget;
-(void)setSmsTargetImageView:(NSImageView *)arg1 ;
-(void)setSmsTargetTitle:(NSTextField *)arg1 ;
-(void)setSmsTargetMessage:(MMLinkTextField *)arg1 ;
-(void)setSmsTargetCancelButton:(NSButton *)arg1 ;
-(void)setSmsTargetConfirmButton:(NSButton *)arg1 ;
-(void)setSmsTargetHelpButton:(NSButton *)arg1 ;
-(void)setSmsTarget:(NSString *)arg1 ;
-(void)stopCSCProgressIndicator:(id)arg1 ;
-(void)clearSecureEntryView;
-(id)_passphraseFromSecureEntryView;
-(void)startCSCProgressIndicator:(id)arg1 ;
-(NSString *)smsTargetCountryCode;
-(void)setSmsTargetCountryCode:(NSString *)arg1 ;
-(void)setupViewWithPinLength:(long long)arg1 ;
-(NSString *)smsVerificationToken;
-(void)setSmsVerificationToken:(NSString *)arg1 ;
-(MMPinFieldView *)smsTargetPinFieldView;
-(void)setSmsTargetPinFieldView:(MMPinFieldView *)arg1 ;
-(NSView *)smsTargetPinFieldPlaceholder;
-(NSLayoutConstraint *)smsTargetPinFieldWidthConstraint;
-(NSProgressIndicator *)smsTargetProgressIndicator;
-(id)_countryPrefixForCountryCode:(id)arg1 ;
-(void)setSmsTargetPinFieldPlaceholder:(NSView *)arg1 ;
-(void)setSmsTargetPinFieldWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSmsTargetProgressIndicator:(NSProgressIndicator *)arg1 ;
@end

