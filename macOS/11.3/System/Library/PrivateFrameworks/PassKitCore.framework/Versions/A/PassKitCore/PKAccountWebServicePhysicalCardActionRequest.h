/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/PKAccountWebServiceApplePayTrustProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, PKApplePayTrustHashResponse, NSData, NSString, PKPhysicalCardAction, PKPaymentDeviceMetadata;

@interface PKAccountWebServicePhysicalCardActionRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol, NSSecureCoding> {

	NSURL* baseURL;
	PKApplePayTrustHashResponse* hashResponse;
	NSData* _publicKeyHash;
	NSString* _accountIdentifier;
	NSString* _accountUserAltDSID;
	NSString* _physicalCardIdentifier;
	PKPhysicalCardAction* _action;
	PKPaymentDeviceMetadata* _deviceMetadata;

}

@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountUserAltDSID;                             //@synthesize accountUserAltDSID=_accountUserAltDSID - In the implementation block
@property (nonatomic,copy) NSString * physicalCardIdentifier;                         //@synthesize physicalCardIdentifier=_physicalCardIdentifier - In the implementation block
@property (nonatomic,retain) PKPhysicalCardAction * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;                //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash;                                    //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(PKPhysicalCardAction *)action;
-(void)setAction:(PKPhysicalCardAction *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(NSString *)accountUserAltDSID;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(id)manifestHashWithReferenceIdentifier:(id)arg1 ;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setAccountUserAltDSID:(NSString *)arg1 ;
-(void)setHashResponse:(PKApplePayTrustHashResponse *)arg1 ;
-(NSString *)physicalCardIdentifier;
-(void)setPhysicalCardIdentifier:(NSString *)arg1 ;
@end

