/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString, NSArray;

@interface PKEntitlementWhitelist : NSObject {

	int _processIdentifier;
	BOOL _isiOSOnMac;
	char _shareableCredentialProvisioning;
	char _passesAllAccess;
	char _passesOverviewAccess;
	char _passesAddSilently;
	char _passPresentationSuppression;
	char _paymentAllAccess;
	char _paymentConfiguration;
	char _paymentPresentation;
	char _applePayTrustAllAccess;
	char _inAppPayments;
	char _inAppPaymentsPrivate;
	char _manualPaymentPassProvisioning;
	char _webPayments;
	char _winterpegPayments;
	char _cardOnFilePayments;
	char _AMPCardEnrollment;
	char _externalizedContextPayments;
	char _trustedDeviceEnrollmentInfo;
	char _peerPaymentAllAccess;
	char _featuresAllAccess;
	char _supportsDisbursements;
	char _searchAllAccess;
	char _secureElementPassProvisioning;
	char _credentialStateAccess;
	NSString* _applicationID;
	NSString* _developerTeamID;
	NSArray* _merchantIdentifiers;
	NSArray* _teamIDs;
	NSArray* _passTypeIDs;
	NSArray* _passTypeIDPrefixes;

}

@property (readonly) char passesAllAccess;                              //@synthesize passesAllAccess=_passesAllAccess - In the implementation block
@property (readonly) char passesOverviewAccess;                         //@synthesize passesOverviewAccess=_passesOverviewAccess - In the implementation block
@property (readonly) char passesAddSilently;                            //@synthesize passesAddSilently=_passesAddSilently - In the implementation block
@property (readonly) char passPresentationSuppression;                  //@synthesize passPresentationSuppression=_passPresentationSuppression - In the implementation block
@property (readonly) char paymentAllAccess;                             //@synthesize paymentAllAccess=_paymentAllAccess - In the implementation block
@property (readonly) char paymentConfiguration;                         //@synthesize paymentConfiguration=_paymentConfiguration - In the implementation block
@property (readonly) char paymentPresentation;                          //@synthesize paymentPresentation=_paymentPresentation - In the implementation block
@property (readonly) char applePayTrustAllAccess;                       //@synthesize applePayTrustAllAccess=_applePayTrustAllAccess - In the implementation block
@property (readonly) char inAppPayments;                                //@synthesize inAppPayments=_inAppPayments - In the implementation block
@property (readonly) char inAppPaymentsPrivate;                         //@synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate - In the implementation block
@property (readonly) char manualPaymentPassProvisioning;                //@synthesize manualPaymentPassProvisioning=_manualPaymentPassProvisioning - In the implementation block
@property (readonly) char webPayments;                                  //@synthesize webPayments=_webPayments - In the implementation block
@property (readonly) char winterpegPayments;                            //@synthesize winterpegPayments=_winterpegPayments - In the implementation block
@property (readonly) char cardOnFilePayments;                           //@synthesize cardOnFilePayments=_cardOnFilePayments - In the implementation block
@property (readonly) char AMPCardEnrollment;                            //@synthesize AMPCardEnrollment=_AMPCardEnrollment - In the implementation block
@property (readonly) char externalizedContextPayments;                  //@synthesize externalizedContextPayments=_externalizedContextPayments - In the implementation block
@property (readonly) char trustedDeviceEnrollmentInfo;                  //@synthesize trustedDeviceEnrollmentInfo=_trustedDeviceEnrollmentInfo - In the implementation block
@property (readonly) char peerPaymentAllAccess;                         //@synthesize peerPaymentAllAccess=_peerPaymentAllAccess - In the implementation block
@property (readonly) char featuresAllAccess;                            //@synthesize featuresAllAccess=_featuresAllAccess - In the implementation block
@property (readonly) char supportsDisbursements;                        //@synthesize supportsDisbursements=_supportsDisbursements - In the implementation block
@property (readonly) char searchAllAccess;                              //@synthesize searchAllAccess=_searchAllAccess - In the implementation block
@property (readonly) char secureElementPassProvisioning;                //@synthesize secureElementPassProvisioning=_secureElementPassProvisioning - In the implementation block
@property (readonly) char accessPassProvisioning; 
@property (readonly) char credentialStateAccess;                        //@synthesize credentialStateAccess=_credentialStateAccess - In the implementation block
@property (readonly) char shareableCredentialProvisioning;              //@synthesize shareableCredentialProvisioning=_shareableCredentialProvisioning - In the implementation block
@property (copy,readonly) NSString * applicationID;                     //@synthesize applicationID=_applicationID - In the implementation block
@property (copy,readonly) NSString * developerTeamID;                   //@synthesize developerTeamID=_developerTeamID - In the implementation block
@property (copy,readonly) NSArray * merchantIdentifiers;                //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
@property (copy,readonly) NSArray * teamIDs;                            //@synthesize teamIDs=_teamIDs - In the implementation block
@property (copy,readonly) NSArray * passTypeIDs;                        //@synthesize passTypeIDs=_passTypeIDs - In the implementation block
@property (copy,readonly) NSArray * passTypeIDPrefixes;                 //@synthesize passTypeIDPrefixes=_passTypeIDPrefixes - In the implementation block
@property (readonly) char supportsWebPayments; 
@property (readonly) char allAccess; 
+(char)supportsSecureCoding;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)applicationID;
-(char)paymentAllAccess;
-(char)peerPaymentAllAccess;
-(char)trustedDeviceEnrollmentInfo;
-(char)supportsDisbursements;
-(char)isEntitledForMerchantSession:(id)arg1 ;
-(char)isEntitledForPaymentRequest:(id)arg1 ;
-(NSArray *)merchantIdentifiers;
-(BOOL)_probeEntitlementsWithAuditToken:(SCD_Struct_PK7)arg1 ;
-(char)isEntitledForPassTypeID:(id)arg1 ;
-(void*)_copyValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(char)_boolValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(id)_stringValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(id)_arrayValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(char)allAccess;
-(char)supportsWebPayments;
-(char)isEntitledForAnyFromUniquePassTypeIDs:(id)arg1 ;
-(char)shareableCredentialProvisioning;
-(char)accessPassProvisioning;
-(char)passesAllAccess;
-(char)passesOverviewAccess;
-(char)passesAddSilently;
-(char)passPresentationSuppression;
-(char)paymentConfiguration;
-(char)paymentPresentation;
-(char)applePayTrustAllAccess;
-(char)inAppPayments;
-(char)inAppPaymentsPrivate;
-(char)manualPaymentPassProvisioning;
-(char)webPayments;
-(char)winterpegPayments;
-(char)cardOnFilePayments;
-(char)AMPCardEnrollment;
-(char)externalizedContextPayments;
-(char)featuresAllAccess;
-(char)searchAllAccess;
-(char)secureElementPassProvisioning;
-(char)credentialStateAccess;
-(NSString *)developerTeamID;
-(NSArray *)teamIDs;
-(NSArray *)passTypeIDs;
-(NSArray *)passTypeIDPrefixes;
@end
