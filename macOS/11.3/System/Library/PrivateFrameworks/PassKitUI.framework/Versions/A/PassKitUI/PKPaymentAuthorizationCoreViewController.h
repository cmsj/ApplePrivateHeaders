/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationMainViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPostalAddressEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/PKContactEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationErrorViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationPassphraseEntryViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationStateMachineDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationDataControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationCoreViewControllerPrivateDelegate;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine, NSArray, PKPaymentAuthorizationMainViewController, PKPostalAddressEditorViewController, PKContactEditorViewController, PKPaymentAuthorizationErrorViewController, PKPaymentAuthorizationPassphraseEntryViewController, PKContactFormatValidator, PKPaymentService, PKInAppPaymentService, PKPaymentWebService, PKContinuityPaymentService, PKPaymentAuthorizationDataController, PKPaymentAuthorizationChildViewController, PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentAuthorizationCoreViewController : NSViewController <PKPaymentAuthorizationMainViewControllerDelegate, PKPostalAddressEditorViewControllerDelegate, PKContactEditorViewControllerDelegate, PKPaymentAuthorizationErrorViewControllerDelegate, PKPaymentAuthorizationPassphraseEntryViewControllerDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationDataControllerDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationServiceProtocol> {

	/*^block*/id block;
	char _delayingSleep;
	char _didSendDidPresent;
	unsigned _sleepAssertionID;
	long long _paymentAuthorizationStyle;
	PKPaymentAuthorizationLayout* _paymentAuthorizationLayout;
	PKPaymentAuthorizationStateMachine* _stateMachine;
	id<PKPaymentAuthorizationHostProtocol> _delegate;
	NSArray* _activeViewConstraints;
	PKPaymentAuthorizationMainViewController* _mainViewController;
	PKPostalAddressEditorViewController* _postalAddressEditorViewController;
	PKContactEditorViewController* _contactEditorViewController;
	PKPaymentAuthorizationErrorViewController* _errorViewController;
	PKPaymentAuthorizationPassphraseEntryViewController* _passphraseEntryViewController;
	/*^block*/id _passphraseReplyBlock;
	/*^block*/id _pendingPrepareCompletionBlock;
	/*^block*/id _pendingContactCompletionBlock;
	PKContactFormatValidator* _contactFormatValidator;
	PKPaymentService* _paymentService;
	PKInAppPaymentService* _inAppPaymentService;
	PKPaymentWebService* _paymentWebService;
	PKContinuityPaymentService* _continuityPaymentService;
	PKPaymentAuthorizationDataController* _dataController;
	long long _state;
	PKPaymentAuthorizationChildViewController* _activeViewController;
	id<PKPaymentAuthorizationCoreViewControllerPrivateDelegate> _privateDelegate;

}

@property (assign,nonatomic) long long paymentAuthorizationStyle;                                                              //@synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationLayout * paymentAuthorizationLayout;                                        //@synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationStateMachine * stateMachine;                                                //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSArray * activeViewConstraints;                                                                  //@synthesize activeViewConstraints=_activeViewConstraints - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationMainViewController * mainViewController;                                    //@synthesize mainViewController=_mainViewController - In the implementation block
@property (nonatomic,retain) PKPostalAddressEditorViewController * postalAddressEditorViewController;                          //@synthesize postalAddressEditorViewController=_postalAddressEditorViewController - In the implementation block
@property (nonatomic,retain) PKContactEditorViewController * contactEditorViewController;                                      //@synthesize contactEditorViewController=_contactEditorViewController - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationErrorViewController * errorViewController;                                  //@synthesize errorViewController=_errorViewController - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationPassphraseEntryViewController * passphraseEntryViewController;              //@synthesize passphraseEntryViewController=_passphraseEntryViewController - In the implementation block
@property (nonatomic,copy) id passphraseReplyBlock;                                                                            //@synthesize passphraseReplyBlock=_passphraseReplyBlock - In the implementation block
@property (nonatomic,copy) id pendingPrepareCompletionBlock;                                                                   //@synthesize pendingPrepareCompletionBlock=_pendingPrepareCompletionBlock - In the implementation block
@property (nonatomic,copy) id pendingContactCompletionBlock;                                                                   //@synthesize pendingContactCompletionBlock=_pendingContactCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned sleepAssertionID;                                                                        //@synthesize sleepAssertionID=_sleepAssertionID - In the implementation block
@property (assign,nonatomic) char delayingSleep;                                                                               //@synthesize delayingSleep=_delayingSleep - In the implementation block
@property (assign,nonatomic) char didSendDidPresent;                                                                           //@synthesize didSendDidPresent=_didSendDidPresent - In the implementation block
@property (nonatomic,retain) PKContactFormatValidator * contactFormatValidator;                                                //@synthesize contactFormatValidator=_contactFormatValidator - In the implementation block
@property (nonatomic,retain) PKPaymentService * paymentService;                                                                //@synthesize paymentService=_paymentService - In the implementation block
@property (nonatomic,retain) PKInAppPaymentService * inAppPaymentService;                                                      //@synthesize inAppPaymentService=_inAppPaymentService - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                                                          //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,retain) PKContinuityPaymentService * continuityPaymentService;                                            //@synthesize continuityPaymentService=_continuityPaymentService - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationDataController * dataController;                                            //@synthesize dataController=_dataController - In the implementation block
@property (assign,nonatomic) long long state;                                                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKPaymentAuthorizationChildViewController * activeViewController;                                 //@synthesize activeViewController=_activeViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationCoreViewControllerPrivateDelegate> privateDelegate;               //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationDataModel * dataModel; 
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationHostProtocol> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setState:(long long)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(void)preferredContentSizeDidChangeForViewController:(id)arg1 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(PKPaymentAuthorizationStateMachine *)stateMachine;
-(void)setStateMachine:(PKPaymentAuthorizationStateMachine *)arg1 ;
-(id<PKPaymentAuthorizationCoreViewControllerPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationCoreViewControllerPrivateDelegate>)arg1 ;
-(id)hostContext;
-(void)handleHostApplicationWillResignActive:(char)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1 ;
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidPresent;
-(PKContactFormatValidator *)contactFormatValidator;
-(void)setContactFormatValidator:(PKContactFormatValidator *)arg1 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(id)_hostApplicationIdentifier;
-(char)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4 ;
-(void)setPaymentService:(PKPaymentService *)arg1 ;
-(PKPaymentService *)paymentService;
-(PKContinuityPaymentService *)continuityPaymentService;
-(void)setContinuityPaymentService:(PKContinuityPaymentService *)arg1 ;
-(PKInAppPaymentService *)inAppPaymentService;
-(void)setInAppPaymentService:(PKInAppPaymentService *)arg1 ;
-(id)hostContextWithErrorHandler:(/*^block*/id)arg1 ;
-(PKPaymentAuthorizationChildViewController *)activeViewController;
-(void)setActiveViewController:(PKPaymentAuthorizationChildViewController *)arg1 ;
-(PKPaymentAuthorizationMainViewController *)mainViewController;
-(void)setMainViewController:(PKPaymentAuthorizationMainViewController *)arg1 ;
-(PKPaymentAuthorizationErrorViewController *)errorViewController;
-(void)setErrorViewController:(PKPaymentAuthorizationErrorViewController *)arg1 ;
-(void)dismissPassphraseViewController;
-(id)passphraseViewController;
-(PKPaymentAuthorizationLayout *)paymentAuthorizationLayout;
-(void)setPaymentAuthorizationLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(PKPaymentAuthorizationDataModel *)dataModel;
-(PKPaymentAuthorizationDataController *)dataController;
-(void)contactEditorViewControllerDidCancel:(id)arg1 ;
-(void)contactEditorViewController:(id)arg1 didFinishEditingContact:(id)arg2 ;
-(void)_notifyApplicationDidBecomeActive:(id)arg1 ;
-(void)_notifyApplicationDidResignActive:(id)arg1 ;
-(void)_notifyWindowDidBecomeKey:(id)arg1 ;
-(void)_notifyWindowDidResignKey:(id)arg1 ;
-(void)_notifyWorkspaceWillSleep:(id)arg1 ;
-(char)didSendDidPresent;
-(void)setDidSendDidPresent:(char)arg1 ;
-(PKPostalAddressEditorViewController *)postalAddressEditorViewController;
-(PKContactEditorViewController *)contactEditorViewController;
-(PKPaymentAuthorizationPassphraseEntryViewController *)passphraseEntryViewController;
-(id)childViewControllerForState:(long long)arg1 ;
-(void)setActiveViewController:(id)arg1 animated:(char)arg2 ;
-(void)setActiveViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)layoutConstraintsForChildView:(id)arg1 ;
-(void)setActiveViewConstraints:(NSArray *)arg1 ;
-(NSArray *)activeViewConstraints;
-(void)setPassphraseReplyBlock:(id)arg1 ;
-(id)pendingContactCompletionBlock;
-(void)setPendingContactCompletionBlock:(id)arg1 ;
-(id)_hostApplicationName;
-(id)passphraseReplyBlock;
-(char)handleTransitionFromInitializeToState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(char)handleTransitionToContinuitySendFromState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(char)handleTransitionToClientCallbackFromState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(char)handleTransitionToCancelFromState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(char)handleTransitionToErrorFromState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(char)handleTransitionToFatalErrorFromState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(char)handleTransitionToSuccessFromState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(char)handleTransitionToContinuitySearchFromState:(unsigned long long)arg1 withParam:(id)arg2 ;
-(void)updateViewControllerStateOnTransitionToState:(unsigned long long)arg1 ;
-(id)pendingPrepareCompletionBlock;
-(void)setPendingPrepareCompletionBlock:(id)arg1 ;
-(id)_serviceViewController;
-(void)setDataController:(PKPaymentAuthorizationDataController *)arg1 ;
-(void)paymentAuthorizationMainViewControllerDidCancel:(id)arg1 ;
-(void)presentPassphraseViewController:(id)arg1 completion:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(void)postalAddressEditorViewControllerDidCancel:(id)arg1 ;
-(void)postalAddressEditorViewController:(id)arg1 didFinishEditingContact:(id)arg2 ;
-(void)paymentAuthorizationErrorViewControllerDidCancel:(id)arg1 ;
-(void)paymentAuthorizationErrorViewControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationPassphraseEntryViewControllerDidCancel:(id)arg1 ;
-(void)paymentAuthorizationPassphraseEntryViewController:(id)arg1 didEnterPassphrase:(id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectPaymentPass:(id)arg2 paymentApplication:(id)arg3 ;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectRemotePaymentInstrument:(id)arg2 paymentApplication:(id)arg3 ;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectBillingAddress:(id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 willAddNewBillingAddressWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 willEditExistingBillingAddress:(id)arg2 errors:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectShippingMethod:(id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectShippingAddress:(id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 willAddNewShippingAddressWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 willEditExistingShippingAddress:(id)arg2 errors:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)paymentAuthorizationDataController:(id)arg1 didSelectShippingContact:(id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 willAddNewShippingContactWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationDataController:(id)arg1 willEditExistingShippingContact:(id)arg2 errors:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)paymentAuthorizationStyle;
-(void)setPaymentAuthorizationStyle:(long long)arg1 ;
-(void)setPostalAddressEditorViewController:(PKPostalAddressEditorViewController *)arg1 ;
-(void)setContactEditorViewController:(PKContactEditorViewController *)arg1 ;
-(void)setPassphraseEntryViewController:(PKPaymentAuthorizationPassphraseEntryViewController *)arg1 ;
-(unsigned)sleepAssertionID;
-(void)setSleepAssertionID:(unsigned)arg1 ;
-(char)delayingSleep;
-(void)setDelayingSleep:(char)arg1 ;
@end
