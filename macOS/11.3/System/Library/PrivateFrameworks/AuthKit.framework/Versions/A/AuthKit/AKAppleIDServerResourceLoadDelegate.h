/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AKAnisetteServiceProtocol;
@class NSString, AKAnisetteProvisioningController, NSDictionary, AKAppleIDAuthenticationContext, NSArray, NSNumber, AKDevice, AKAnisetteData, AKAttestationData;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding> {

	NSString* _altDSID;
	AKAnisetteProvisioningController* _proxiedProvisioningController;
	NSDictionary* _continuationHeaders;
	AKAppleIDAuthenticationContext* _context;
	char _shouldSendEphemeralAuthHeader;
	char _shouldSendICSCIntentHeader;
	char _shouldSendLocalUserHasAppleIDLoginHeader;
	char _shouldSendPhoneNumber;
	char _shouldOfferSecurityUpgrade;
	char _shouldSendSigningHeaders;
	NSString* _serviceToken;
	NSString* _phoneNumberCertificate;
	NSArray* _phoneInformation;
	long long _serviceType;
	NSArray* _loggedInServices;
	NSString* _passwordResetToken;
	NSString* _continuationToken;
	NSString* _heartbeatToken;
	NSString* _identityToken;
	NSString* _initialURLRequestKey;
	NSString* _proxyAppName;
	NSString* _clientAppName;
	NSString* _appProvidedContext;
	NSNumber* _hasEmptyPasswordOverride;
	NSString* _securityUpgradeContext;
	NSString* _followupItems;
	NSString* _dataCenterIdentifier;
	AKDevice* _proxiedDevice;
	NSString* _proxiedAltDSID;
	NSString* _proxiedIdentityToken;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;
	AKAnisetteData* _proxiedDeviceAnisetteData;
	AKAttestationData* _proxiedDeviceAttestationData;

}

@property (assign,nonatomic) char shouldSendEphemeralAuthHeader;                              //@synthesize shouldSendEphemeralAuthHeader=_shouldSendEphemeralAuthHeader - In the implementation block
@property (assign,nonatomic) char shouldSendICSCIntentHeader;                                 //@synthesize shouldSendICSCIntentHeader=_shouldSendICSCIntentHeader - In the implementation block
@property (assign,nonatomic) char shouldSendLocalUserHasAppleIDLoginHeader;                   //@synthesize shouldSendLocalUserHasAppleIDLoginHeader=_shouldSendLocalUserHasAppleIDLoginHeader - In the implementation block
@property (assign,nonatomic) char shouldSendPhoneNumber;                                      //@synthesize shouldSendPhoneNumber=_shouldSendPhoneNumber - In the implementation block
@property (assign,nonatomic) char shouldOfferSecurityUpgrade;                                 //@synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberCertificate;                                 //@synthesize phoneNumberCertificate=_phoneNumberCertificate - In the implementation block
@property (nonatomic,copy) NSArray * phoneInformation;                                        //@synthesize phoneInformation=_phoneInformation - In the implementation block
@property (assign,nonatomic) long long serviceType;                                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSArray * loggedInServices;                                        //@synthesize loggedInServices=_loggedInServices - In the implementation block
@property (nonatomic,copy) NSString * passwordResetToken;                                     //@synthesize passwordResetToken=_passwordResetToken - In the implementation block
@property (nonatomic,copy) NSString * continuationToken;                                      //@synthesize continuationToken=_continuationToken - In the implementation block
@property (nonatomic,copy) NSString * heartbeatToken;                                         //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
@property (nonatomic,copy) NSString * identityToken;                                          //@synthesize identityToken=_identityToken - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * initialURLRequestKey;                                   //@synthesize initialURLRequestKey=_initialURLRequestKey - In the implementation block
@property (nonatomic,copy) NSString * proxyAppName;                                           //@synthesize proxyAppName=_proxyAppName - In the implementation block
@property (nonatomic,copy) NSString * clientAppName;                                          //@synthesize clientAppName=_clientAppName - In the implementation block
@property (nonatomic,copy) NSString * appProvidedContext;                                     //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,retain) NSNumber * hasEmptyPasswordOverride;                             //@synthesize hasEmptyPasswordOverride=_hasEmptyPasswordOverride - In the implementation block
@property (nonatomic,copy) NSString * securityUpgradeContext;                                 //@synthesize securityUpgradeContext=_securityUpgradeContext - In the implementation block
@property (nonatomic,copy) NSString * followupItems;                                          //@synthesize followupItems=_followupItems - In the implementation block
@property (nonatomic,copy) NSString * dataCenterIdentifier;                                   //@synthesize dataCenterIdentifier=_dataCenterIdentifier - In the implementation block
@property (nonatomic,retain) AKDevice * proxiedDevice;                                        //@synthesize proxiedDevice=_proxiedDevice - In the implementation block
@property (nonatomic,retain) NSString * proxiedAltDSID;                                       //@synthesize proxiedAltDSID=_proxiedAltDSID - In the implementation block
@property (nonatomic,retain) NSString * proxiedIdentityToken;                                 //@synthesize proxiedIdentityToken=_proxiedIdentityToken - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (nonatomic,retain) AKAnisetteData * proxiedDeviceAnisetteData;                      //@synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData - In the implementation block
@property (nonatomic,retain) AKAttestationData * proxiedDeviceAttestationData;                //@synthesize proxiedDeviceAttestationData=_proxiedDeviceAttestationData - In the implementation block
@property (assign,nonatomic) char shouldSendAbsintheHeader; 
@property (assign,nonatomic) char shouldSendSigningHeaders;                                   //@synthesize shouldSendSigningHeaders=_shouldSendSigningHeaders - In the implementation block
@property (nonatomic,copy) NSString * serviceToken;                                           //@synthesize serviceToken=_serviceToken - In the implementation block
+(char)supportsSecureCoding;
+(id)sharedController;
+(unsigned long long)signalFromServerResponse:(id)arg1 ;
-(char)shouldSendSigningHeaders;
-(void)_signRequest:(id)arg1 ;
-(id)signingController;
-(id)_proxiedProvisioningController;
-(void)_signWithProxiedDeviceHeaders:(id)arg1 ;
-(id)_retrieveAndResetContinuationHeaders;
-(void)_signWithFeatureOptInHeaders:(id)arg1 ;
-(void)_harvestContinuationHeadersFromHeaders:(id)arg1 ;
-(void)setShouldSendEphemeralAuthHeader:(char)arg1 ;
-(void)setShouldSendPhoneNumber:(char)arg1 ;
-(void)setHasEmptyPasswordOverride:(NSNumber *)arg1 ;
-(void)setShouldSendICSCIntentHeader:(char)arg1 ;
-(void)setFollowupItems:(NSString *)arg1 ;
-(void)setProxiedDeviceAnisetteData:(AKAnisetteData *)arg1 ;
-(void)setProxiedDevice:(AKDevice *)arg1 ;
-(char)shouldSendAbsintheHeader;
-(void)updateWithAuthResults:(id)arg1 ;
-(NSString *)serviceToken;
-(char)shouldSendEphemeralAuthHeader;
-(char)shouldSendICSCIntentHeader;
-(char)shouldSendLocalUserHasAppleIDLoginHeader;
-(char)shouldSendPhoneNumber;
-(NSString *)phoneNumberCertificate;
-(NSArray *)phoneInformation;
-(NSArray *)loggedInServices;
-(NSString *)initialURLRequestKey;
-(NSString *)clientAppName;
-(NSNumber *)hasEmptyPasswordOverride;
-(NSString *)followupItems;
-(NSString *)proxiedAltDSID;
-(NSString *)proxiedIdentityToken;
-(AKAttestationData *)proxiedDeviceAttestationData;
-(void)setProxiedDeviceAttestationData:(AKAttestationData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(void)signRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setShouldSendSigningHeaders:(char)arg1 ;
-(NSString *)identityToken;
-(NSString *)heartbeatToken;
-(void)setHeartbeatToken:(NSString *)arg1 ;
-(void)setShouldOfferSecurityUpgrade:(char)arg1 ;
-(void)setShouldSendLocalUserHasAppleIDLoginHeader:(char)arg1 ;
-(char)isResponseFinal:(id)arg1 ;
-(void)processResponse:(id)arg1 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(NSString *)appProvidedContext;
-(NSString *)proxyAppName;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(void)setProxyAppName:(NSString *)arg1 ;
-(char)isResponseActionable:(id)arg1 ;
-(char)isResponseFinalForHSA2ServerFlow:(id)arg1 ;
-(void)setServiceToken:(NSString *)arg1 ;
-(void)signRequest:(id)arg1 ;
-(char)shouldOfferSecurityUpgrade;
-(void)setIdentityToken:(NSString *)arg1 ;
-(NSString *)securityUpgradeContext;
-(void)setSecurityUpgradeContext:(NSString *)arg1 ;
-(void)setShouldSendAbsintheHeader:(char)arg1 ;
-(char)isAuthenticationRequired:(id)arg1 ;
-(id)initWithAltDSID:(id)arg1 identityToken:(id)arg2 ;
-(void)setClientAppName:(NSString *)arg1 ;
-(void)signRequestWithCommonHeaders:(id)arg1 ;
-(NSString *)continuationToken;
-(NSString *)passwordResetToken;
-(NSString *)dataCenterIdentifier;
-(void)setDataCenterIdentifier:(NSString *)arg1 ;
-(AKDevice *)proxiedDevice;
-(AKAnisetteData *)proxiedDeviceAnisetteData;
-(void)setInitialURLRequestKey:(NSString *)arg1 ;
-(void)setPhoneNumberCertificate:(NSString *)arg1 ;
-(void)setPhoneInformation:(NSArray *)arg1 ;
-(void)setProxiedAltDSID:(NSString *)arg1 ;
-(void)setProxiedIdentityToken:(NSString *)arg1 ;
-(void)decorateWithContext:(id)arg1 ;
-(void)setLoggedInServices:(NSArray *)arg1 ;
-(void)setContinuationToken:(NSString *)arg1 ;
-(void)setPasswordResetToken:(NSString *)arg1 ;
@end

