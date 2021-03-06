/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>
#import <libobjc.A.dylib/NFLoyaltyAndPaymentSessionDelegate.h>
#import <libobjc.A.dylib/NFDigitalCarKeySessionDelegate.h>

@protocol PKContactlessInterfaceSessionDelegate, OS_dispatch_queue;
@class PKPaymentApplication, PKPaymentPass, NSArray, PKFieldProperties, NSObject, PKTransitAppletHistory, NSString;

@interface PKContactlessInterfaceSession : PKPaymentSession <NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate> {

	PKPaymentApplication* _activatedPaymentApplication;
	PKPaymentPass* _activatedPaymentPass;
	NSArray* _activatedValueAddedServicePasses;
	NSArray* _activatedHostCards;
	NSArray* _valueAddedServiceTransactions;
	PKFieldProperties* _fieldProperties;
	PKFieldProperties* _fieldPropertiesToLookup;
	char _restoreActiveApplets;
	unsigned long long _transactionStartTime;
	AB _fieldPresent;
	char _handlingExpress;
	unsigned long long _expressActivity;
	char _felicaStateChanged;
	unsigned long long _state;
	id<PKContactlessInterfaceSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	char _prioritySessionExists;
	AB _persistentCardEmulation;
	unsigned char _cardEmulationMode;
	char _isDigitialCarKeySession;
	char _isLoyaltyPaymentSession;

}

@property (nonatomic,readonly) char persistentCardEmulationQueued; 
@property (nonatomic,readonly) PKPaymentApplication * activatedPaymentApplication; 
@property (nonatomic,readonly) PKPaymentPass * activatedPaymentPass; 
@property (nonatomic,readonly) NSArray * activatedValueAddedServicePasses;                           //@synthesize activatedValueAddedServicePasses=_activatedValueAddedServicePasses - In the implementation block
@property (nonatomic,readonly) char fieldPresent; 
@property (nonatomic,readonly) PKFieldProperties * fieldProperties;                                  //@synthesize fieldProperties=_fieldProperties - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) PKTransitAppletHistory * transitAppletState; 
@property (assign,nonatomic,__weak) id<PKContactlessInterfaceSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitAppletStateFromPaymentSession:(id)arg1 withPaymentApplication:(id)arg2 ;
-(id<PKContactlessInterfaceSessionDelegate>)delegate;
-(void)setDelegate:(id<PKContactlessInterfaceSessionDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(void)_sendPersistentCardEmulationForPaymentPass:(id)arg1 paymentApplication:(id)arg2 ;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(char)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 ;
-(id)_appletForPaymentApplication:(id)arg1 ;
-(char)activateValueAddedServicePasses:(id)arg1 ;
-(char)authorizeAndStartCardEmulationWithCredential:(id)arg1 deferAuthorization:(char)arg2 ;
-(void)_endLookup;
-(id)_appletWithIdentifier:(id)arg1 ;
-(void)_sessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2 ;
-(void)_endLookupAndNotify;
-(id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2 ;
-(void)_processEndEvent:(id)arg1 withPartialContext:(id)arg2 groupHeadIdentifier:(id)arg3 groupAppletIdentifiers:(id)arg4 ;
-(void)_session:(id)arg1 didExpireTransactionForApplet:(id)arg2 ;
-(void)_sessionDidEndUnexpectedly:(id)arg1 ;
-(void)_session:(id)arg1 didEnterFieldWithNotification:(id)arg2 ;
-(void)_sessionDidExitField:(id)arg1 ;
-(void)_session:(id)arg1 didSelectApplet:(id)arg2 ;
-(void)_session:(id)arg1 didFailDeferredAuthorization:(char)arg2 ;
-(void)_session:(id)arg1 didExpressModeStateChange:(unsigned)arg2 withObject:(id)arg3 ;
-(void)_startLookup;
-(void)loyaltyAndPaymentSession:(id)arg1 didEnterFieldWithNotification:(id)arg2 ;
-(void)loyaltyAndPaymentSessionDidExitField:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2 ;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1 ;
-(void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(char)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned)arg2 withObject:(id)arg3 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(char)arg2 ;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2 ;
-(void)session:(id)arg1 event:(id)arg2 ;
-(void)sessionRequestAuthorization:(id)arg1 ;
-(void)session:(id)arg1 didStartTransaction:(id)arg2 ;
-(void)session:(id)arg1 didEndTransaction:(id)arg2 ;
-(void)session:(id)arg1 didEnterFieldWithNotification:(id)arg2 ;
-(void)sessionDidExitField:(id)arg1 ;
-(void)session:(id)arg1 didSelectApplet:(id)arg2 ;
-(void)session:(id)arg1 didExpireTransactionForApplet:(id)arg2 ;
-(void)sessionDidEndUnexpectedly:(id)arg1 ;
-(void)sessionDidFailDeferredAuthorization:(id)arg1 ;
-(void)sessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2 ;
-(void)session:(id)arg1 didExpressModeStateChange:(unsigned)arg2 withObject:(id)arg3 ;
-(char)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(char)arg3 ;
-(char)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2 ;
-(char)authorizeAndStartCardEmulationWithCredential:(id)arg1 ;
-(char)stopCardEmulation;
-(void)resetExpressState;
-(char)queuePersistentCardEmulation;
-(char)resetPersistentCardEmulation;
-(char)paymentApplicationSupportsAutomaticAuthorization:(id)arg1 ;
-(PKPaymentApplication *)activatedPaymentApplication;
-(PKPaymentPass *)activatedPaymentPass;
-(PKTransitAppletHistory *)transitAppletState;
-(char)fieldPresent;
-(char)persistentCardEmulationQueued;
-(NSArray *)activatedValueAddedServicePasses;
-(PKFieldProperties *)fieldProperties;
@end

