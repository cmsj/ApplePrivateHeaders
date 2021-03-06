/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol AKAuthorizationEmailScopeViewControllerDelegateAKAuthorizationPaneAutomaticResizeDelegate;
@class AKUserInformation, NSTextField, NSString, NSStackView, NSBox, NSLayoutConstraint, NSMutableDictionary;

@interface AKAuthorizationEmailScopeViewController : NSViewController {

	char _internalIsEmailExpanded;
	AKUserInformation* _userInformation;
	NSTextField* _scopeLabel;
	id<AKAuthorizationEmailScopeViewControllerDelegate><AKAuthorizationPaneAutomaticResizeDelegate> _delegate;
	NSString* _internalScopeString;
	NSStackView* _emailStackView;
	NSStackView* _expandableEmailStackView;
	NSBox* _expandableEmailSeparator;
	NSLayoutConstraint* _expandableEmailStackViewMaxHeightConstraint;
	NSMutableDictionary* _radioButtonForTag;
	long long _lastSelectedEmailIndex;

}

@property (copy) NSString * internalScopeString;                                                                                          //@synthesize internalScopeString=_internalScopeString - In the implementation block
@property (assign) char internalIsEmailExpanded;                                                                                          //@synthesize internalIsEmailExpanded=_internalIsEmailExpanded - In the implementation block
@property (retain) NSStackView * emailStackView;                                                                                          //@synthesize emailStackView=_emailStackView - In the implementation block
@property (retain) NSStackView * expandableEmailStackView;                                                                                //@synthesize expandableEmailStackView=_expandableEmailStackView - In the implementation block
@property (retain) NSBox * expandableEmailSeparator;                                                                                      //@synthesize expandableEmailSeparator=_expandableEmailSeparator - In the implementation block
@property (retain) NSLayoutConstraint * expandableEmailStackViewMaxHeightConstraint;                                                      //@synthesize expandableEmailStackViewMaxHeightConstraint=_expandableEmailStackViewMaxHeightConstraint - In the implementation block
@property (retain) NSMutableDictionary * radioButtonForTag;                                                                               //@synthesize radioButtonForTag=_radioButtonForTag - In the implementation block
@property (assign) long long lastSelectedEmailIndex;                                                                                      //@synthesize lastSelectedEmailIndex=_lastSelectedEmailIndex - In the implementation block
@property (readonly) NSString * lastSelectedEmail; 
@property (copy) NSString * scopeString; 
@property (copy) AKUserInformation * userInformation;                                                                                     //@synthesize userInformation=_userInformation - In the implementation block
@property (readonly) NSTextField * scopeLabel;                                                                                            //@synthesize scopeLabel=_scopeLabel - In the implementation block
@property (__weak) id<AKAuthorizationEmailScopeViewControllerDelegate><AKAuthorizationPaneAutomaticResizeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEmailExpanded,nonatomic) char emailExpanded; 
-(id)initWithCoder:(id)arg1 ;
-(id<AKAuthorizationEmailScopeViewControllerDelegate><AKAuthorizationPaneAutomaticResizeDelegate>)delegate;
-(void)setDelegate:(id<AKAuthorizationEmailScopeViewControllerDelegate><AKAuthorizationPaneAutomaticResizeDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)setScopeString:(NSString *)arg1 ;
-(AKUserInformation *)userInformation;
-(id)initWithUserInformation:(id)arg1 ;
-(char)isEmailExpanded;
-(void)setEmailExpanded:(char)arg1 animated:(char)arg2 ;
-(id)_newStackView;
-(void)setEmailExpanded:(char)arg1 ;
-(id)_newTextField;
-(NSString *)internalScopeString;
-(id)previouslySelectedEmail;
-(void)setLastSelectedEmailIndex:(long long)arg1 ;
-(NSString *)lastSelectedEmail;
-(void)_addRadioButton:(id)arg1 tag:(long long)arg2 height:(double)arg3 toStackView:(id)arg4 toConstraints:(id)arg5 ;
-(void)_addSeparatorToStackView:(id)arg1 toConstraints:(id)arg2 ;
-(long long)lastSelectedEmailIndex;
-(char)previouslyWantedPrivateEmail;
-(void)_delegate_hideMyEmail;
-(void)_delegate_shareMyEmail;
-(void)setInternalIsEmailExpanded:(char)arg1 ;
-(NSTextField *)scopeLabel;
-(void)setInternalScopeString:(NSString *)arg1 ;
-(char)internalIsEmailExpanded;
-(void)_transitionToEmailExpanded:(char)arg1 animated:(char)arg2 ;
-(NSStackView *)expandableEmailStackView;
-(NSLayoutConstraint *)expandableEmailStackViewMaxHeightConstraint;
-(void)radioButtonSelected:(id)arg1 ;
-(NSMutableDictionary *)radioButtonForTag;
-(void)_selectShareMyEmail;
-(void)_selectHideMyEmail;
-(void)_selectSingleEmailAtIndex:(long long)arg1 ;
-(void)_delegate_emailScopeViewController:(id)arg1 didSelectEmail:(id)arg2 protected:(char)arg3 ;
-(NSString *)scopeString;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(NSStackView *)emailStackView;
-(void)setEmailStackView:(NSStackView *)arg1 ;
-(void)setExpandableEmailStackView:(NSStackView *)arg1 ;
-(NSBox *)expandableEmailSeparator;
-(void)setExpandableEmailSeparator:(NSBox *)arg1 ;
-(void)setExpandableEmailStackViewMaxHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRadioButtonForTag:(NSMutableDictionary *)arg1 ;
@end

