/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/AKPinFieldViewDelegate.h>

@protocol AKSecondFactorCodeEntryDelegate;
@class NSObject, NSView, NSTextField, NSButton, NSProgressIndicator, NSLayoutConstraint, NSNumber, AKPinFieldView, NSString;

@interface AKInAssistantSecondFactorCodeEntry : NSViewController <AKPinFieldViewDelegate> {

	char _isCodeEditable;
	NSObject*<AKSecondFactorCodeEntryDelegate> _delegate;
	/*^block*/id _pinEnteredBlock;
	/*^block*/id _cancelBlock;
	/*^block*/id _noCodeBlock;
	NSView* _pinContainerView;
	NSTextField* _instructionLabel;
	NSTextField* _errorLabel;
	NSButton* _didntGetCodeButton;
	NSProgressIndicator* _progressIndicator;
	NSLayoutConstraint* _widthOfPinViewConstraint;
	NSNumber* _codeLength;
	AKPinFieldView* _pinView;
	NSString* _code;
	NSString* _message;

}

@property (retain) AKPinFieldView * pinView;                                         //@synthesize pinView=_pinView - In the implementation block
@property (retain) NSString * code;                                                  //@synthesize code=_code - In the implementation block
@property (retain) NSString * message;                                               //@synthesize message=_message - In the implementation block
@property (retain) NSObject*<AKSecondFactorCodeEntryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) id pinEnteredBlock;                                                 //@synthesize pinEnteredBlock=_pinEnteredBlock - In the implementation block
@property (copy) id cancelBlock;                                                     //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (copy) id noCodeBlock;                                                     //@synthesize noCodeBlock=_noCodeBlock - In the implementation block
@property (retain) NSView * pinContainerView;                                        //@synthesize pinContainerView=_pinContainerView - In the implementation block
@property (retain) NSTextField * instructionLabel;                                   //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (retain) NSTextField * errorLabel;                                         //@synthesize errorLabel=_errorLabel - In the implementation block
@property (retain) NSButton * didntGetCodeButton;                                    //@synthesize didntGetCodeButton=_didntGetCodeButton - In the implementation block
@property (retain) NSProgressIndicator * progressIndicator;                          //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (retain) NSLayoutConstraint * widthOfPinViewConstraint;                    //@synthesize widthOfPinViewConstraint=_widthOfPinViewConstraint - In the implementation block
@property (readonly) NSNumber * enteredPin; 
@property (setter=setCodeEditable:) char isCodeEditable;                             //@synthesize isCodeEditable=_isCodeEditable - In the implementation block
@property (retain) NSNumber * codeLength;                                            //@synthesize codeLength=_codeLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)code;
-(NSObject*<AKSecondFactorCodeEntryDelegate>)delegate;
-(void)setDelegate:(NSObject*<AKSecondFactorCodeEntryDelegate>)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(void)disable;
-(void)awakeFromNib;
-(NSProgressIndicator *)progressIndicator;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSTextField *)errorLabel;
-(void)showError:(id)arg1 ;
-(void)setErrorLabel:(NSTextField *)arg1 ;
-(void)_hideError;
-(void)setPinView:(AKPinFieldView *)arg1 ;
-(AKPinFieldView *)pinView;
-(void)pinFieldViewTextDidChange:(id)arg1 ;
-(void)pinFieldViewTextDidComplete:(id)arg1 ;
-(char)isCodeEditable;
-(void)setCodeLength:(NSNumber *)arg1 ;
-(void)setPinEnteredBlock:(id)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(void)setNoCodeBlock:(id)arg1 ;
-(void)setFocusToPinView;
-(id)cancelBlock;
-(id)pinEnteredBlock;
-(NSNumber *)enteredPin;
-(void)setCodeEditable:(char)arg1 ;
-(void)_resetPinView;
-(NSTextField *)instructionLabel;
-(NSView *)pinContainerView;
-(void)_codeEntered;
-(NSLayoutConstraint *)widthOfPinViewConstraint;
-(void)noCodeButtonPressed:(id)arg1 ;
-(void)setPinContainerView:(NSView *)arg1 ;
-(void)setInstructionLabel:(NSTextField *)arg1 ;
-(void)setWidthOfPinViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSNumber *)codeLength;
-(NSButton *)didntGetCodeButton;
-(id)noCodeBlock;
-(void)setDidntGetCodeButton:(NSButton *)arg1 ;
@end
