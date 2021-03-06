/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKLiveRenderedShaderSet, NSArray, NSString, NSDate, NSDictionary, NSNumber, NSURL, NSSet, PKNFCPayload, PKImage, PKPassDisplayProfile, PKBarcode, NSData, PKPassLiveRenderedImageSet, PKPassFrontFaceImageSet, PKPassPersonalization, PKPassBarcodeSettings, PKPaymentPass, PKSecureElementPass;

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {

	PKLiveRenderedShaderSet* _liveRenderedShaderSet;
	char _remotePass;
	char _isCloudKitArchived;
	char _voided;
	char _hasStoredValue;
	char _liveRenderedBackground;
	char _supportsCategoryVisualization;
	char _revoked;
	NSArray* _embeddedLocations;
	unsigned long long _passType;
	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	NSString* _organizationName;
	NSDate* _relevantDate;
	NSDictionary* _userInfo;
	NSString* _deviceName;
	NSString* _passLibraryMachServiceName;
	NSNumber* _sequenceCounter;
	NSURL* _passURL;
	NSString* _teamID;
	NSDate* _expirationDate;
	NSString* _groupingID;
	NSSet* _embeddedBeacons;
	NSURL* _webLocationsURL;
	NSURL* _localLocationsURL;
	long long _sharingMethod;
	NSURL* _sharingURL;
	NSString* _sharingText;
	NSSet* _associatedPassTypeIdentifiers;
	PKNFCPayload* _nfcPayload;
	PKImage* _partialFrontFaceImagePlaceholder;
	NSString* _provisioningCredentialHash;
	NSString* _cardholderInfoSectionTitle;
	NSDate* _ingestedDate;
	NSDate* _modifiedDate;

}

@property (nonatomic,readonly) char silenceRequested; 
@property (nonatomic,readonly) long long eventType; 
@property (nonatomic,readonly) char hasFlightDetails; 
@property (nonatomic,readonly) NSString * airlineCode; 
@property (nonatomic,readonly) unsigned long long flightNumber; 
@property (nonatomic,readonly) NSString * flightCode; 
@property (nonatomic,copy) NSString * passLibraryMachServiceName;                              //@synthesize passLibraryMachServiceName=_passLibraryMachServiceName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                              //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,getter=isRemotePass,nonatomic) char remotePass;                              //@synthesize remotePass=_remotePass - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                            //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                                      //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * sequenceCounter;                                         //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                                        //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                                              //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                                    //@synthesize passURL=_passURL - In the implementation block
@property (assign,nonatomic) char isCloudKitArchived;                                          //@synthesize isCloudKitArchived=_isCloudKitArchived - In the implementation block
@property (assign,nonatomic) unsigned long long passType;                                      //@synthesize passType=_passType - In the implementation block
@property (nonatomic,copy) NSString * teamID;                                                  //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isVoided,nonatomic) char voided;                                      //@synthesize voided=_voided - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                                              //@synthesize groupingID=_groupingID - In the implementation block
@property (nonatomic,copy) NSSet * embeddedLocations; 
@property (nonatomic,copy) NSArray * embeddedLocationsArray;                                   //@synthesize embeddedLocations=_embeddedLocations - In the implementation block
@property (nonatomic,copy) NSSet * embeddedBeacons;                                            //@synthesize embeddedBeacons=_embeddedBeacons - In the implementation block
@property (nonatomic,copy) NSURL * webLocationsURL;                                            //@synthesize webLocationsURL=_webLocationsURL - In the implementation block
@property (nonatomic,copy) NSURL * localLocationsURL;                                          //@synthesize localLocationsURL=_localLocationsURL - In the implementation block
@property (nonatomic,copy) PKPassDisplayProfile * displayProfile; 
@property (nonatomic,copy) NSURL * webServiceURL; 
@property (nonatomic,copy) NSString * authenticationToken; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) NSString * pluralLocalizedName; 
@property (nonatomic,readonly) NSString * lowercaseLocalizedName; 
@property (assign,nonatomic) long long sharingMethod;                                          //@synthesize sharingMethod=_sharingMethod - In the implementation block
@property (nonatomic,copy) NSURL * sharingURL;                                                 //@synthesize sharingURL=_sharingURL - In the implementation block
@property (nonatomic,copy) NSString * sharingText;                                             //@synthesize sharingText=_sharingText - In the implementation block
@property (nonatomic,copy) NSSet * associatedPassTypeIdentifiers;                              //@synthesize associatedPassTypeIdentifiers=_associatedPassTypeIdentifiers - In the implementation block
@property (setter=setNFCPayload:,nonatomic,copy) PKNFCPayload * nfcPayload;                    //@synthesize nfcPayload=_nfcPayload - In the implementation block
@property (readonly) NSString * notificationCenterTitle; 
@property (assign,nonatomic) char hasStoredValue;                                              //@synthesize hasStoredValue=_hasStoredValue - In the implementation block
@property (nonatomic,readonly) PKBarcode * barcode; 
@property (nonatomic,readonly) PKImage * footerImage; 
@property (nonatomic,readonly) NSString * logoText; 
@property (nonatomic,readonly) long long transitType; 
@property (nonatomic,readonly) NSArray * frontFieldBuckets; 
@property (nonatomic,readonly) NSArray * backFieldBuckets; 
@property (nonatomic,readonly) PKImage * iconImage; 
@property (nonatomic,readonly) PKImage * rawIcon; 
@property (nonatomic,readonly) PKImage * notificationIconImage; 
@property (nonatomic,readonly) NSData * iconImageICNSData; 
@property (nonatomic,readonly) PKImage * frontFaceImage; 
@property (nonatomic,readonly) PKImage * frontFaceShadowImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImagePlaceholder;                     //@synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder - In the implementation block
@property (nonatomic,readonly) PKImage * cardHolderPicture; 
@property (nonatomic,readonly) PKImage * personalizationLogoImage; 
@property (nonatomic,readonly) PKImage * compactBankLogoDarkImage; 
@property (nonatomic,readonly) PKImage * compactBankLogoLightImage; 
@property (assign,nonatomic) char liveRenderedBackground;                                      //@synthesize liveRenderedBackground=_liveRenderedBackground - In the implementation block
@property (assign,nonatomic) char supportsCategoryVisualization;                               //@synthesize supportsCategoryVisualization=_supportsCategoryVisualization - In the implementation block
@property (nonatomic,readonly) PKLiveRenderedShaderSet * liveRenderedShaderSet; 
@property (nonatomic,readonly) PKPassLiveRenderedImageSet * liveRenderedImageSet; 
@property (nonatomic,copy) NSString * provisioningCredentialHash;                              //@synthesize provisioningCredentialHash=_provisioningCredentialHash - In the implementation block
@property (nonatomic,copy) NSString * cardholderInfoSectionTitle;                              //@synthesize cardholderInfoSectionTitle=_cardholderInfoSectionTitle - In the implementation block
@property (nonatomic,readonly) PKPassFrontFaceImageSet * frontFaceImageSet; 
@property (nonatomic,readonly) CGRect logoRect; 
@property (nonatomic,readonly) CGRect thumbnailRect; 
@property (nonatomic,readonly) CGRect stripRect; 
@property (nonatomic,readonly) NSArray * storeIdentifiers; 
@property (nonatomic,readonly) NSURL * appLaunchURL; 
@property (nonatomic,readonly) PKPassPersonalization * personalization; 
@property (nonatomic,readonly) char isPersonalizable; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) NSString * businessChatIdentifier; 
@property (nonatomic,readonly) PKPassBarcodeSettings * barcodeSettings; 
@property (nonatomic,retain) NSDate * ingestedDate;                                            //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,retain) NSDate * modifiedDate;                                            //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (assign,getter=isRevoked,nonatomic) char revoked;                                    //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) PKSecureElementPass * secureElementPass; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
+(char)supportsSecureCoding;
+(unsigned long long)defaultSettings;
+(id)recordNamePrefix;
+(Class)resolvingClass;
+(Class)classForDictionary:(id)arg1 bundle:(id)arg2 ;
+(char)isValidObjectWithFileDataAccessor:(id)arg1 warnings:(id*)arg2 error:(id*)arg3 ;
+(id)dataTypeIdentifier;
+(Class)classForPassType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(NSDictionary *)userInfo;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)teamID;
-(NSString *)localizedName;
-(long long)style;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(char)isRevoked;
-(id)backgroundImage;
-(unsigned long long)itemType;
-(NSString *)serialNumber;
-(id)thumbnailImage;
-(NSString *)deviceName;
-(long long)eventType;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)primaryIdentifier;
-(char)isExpired;
-(void)setDeviceName:(NSString *)arg1 ;
-(char)isUpdatable;
-(PKPassPersonalization *)personalization;
-(NSDate *)modifiedDate;
-(NSString *)passTypeIdentifier;
-(long long)transitType;
-(NSString *)organizationName;
-(NSURL *)sharingURL;
-(void)setOrganizationName:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)flightNumber;
-(PKImage *)iconImage;
-(char)supportsSharing;
-(id)fieldForKey:(id)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(unsigned long long)passType;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(PKNFCPayload *)nfcPayload;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(NSString *)businessChatIdentifier;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(char)hasValidNFCPayload;
-(char)hasStoredValue;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2 ;
-(id)recordTypesAndNamesForCodingType:(unsigned long long)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(NSString *)passLibraryMachServiceName;
-(char)isRemotePass;
-(NSDate *)ingestedDate;
-(NSString *)provisioningCredentialHash;
-(void)setProvisioningCredentialHash:(NSString *)arg1 ;
-(PKImage *)frontFaceImage;
-(id)numberForSemanticKey:(id)arg1 ;
-(id)stringForSemanticKey:(id)arg1 ;
-(char)silenceRequested;
-(NSSet *)associatedPassTypeIdentifiers;
-(char)availableForAutomaticPresentationUsingBeaconContext;
-(NSString *)notificationCenterTitle;
-(char)availableForAutomaticPresentationUsingVASContext;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(NSNumber *)sequenceCounter;
-(id)semantics;
-(NSArray *)storeIdentifiers;
-(id)balanceFields;
-(PKSecureElementPass *)secureElementPass;
-(void)setSequenceCounter:(NSNumber *)arg1 ;
-(void)setVoided:(char)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setAssociatedPassTypeIdentifiers:(NSSet *)arg1 ;
-(void)setHasStoredValue:(char)arg1 ;
-(void)setLiveRenderedBackground:(char)arg1 ;
-(void)setSupportsCategoryVisualization:(char)arg1 ;
-(void)setEmbeddedLocationsArray:(NSArray *)arg1 ;
-(void)setEmbeddedBeacons:(NSSet *)arg1 ;
-(void)setNFCPayload:(id)arg1 ;
-(void)setPassType:(unsigned long long)arg1 ;
-(void)setGroupingID:(NSString *)arg1 ;
-(void)setSharingMethod:(long long)arg1 ;
-(long long)sharingMethod;
-(void)setSharingURL:(NSURL *)arg1 ;
-(void)setSharingText:(NSString *)arg1 ;
-(NSDate *)relevantDate;
-(char)hasLocationRelevancyInfo;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(id)_changeMessageForFieldKey:(id)arg1 ;
-(id)_localizationKeyForMultipleDiff;
-(PKBarcode *)barcode;
-(NSString *)logoText;
-(id)primaryFields;
-(NSURL *)appLaunchURL;
-(id)allSemantics;
-(PKImage *)rawIcon;
-(PKImage *)notificationIconImage;
-(NSData *)iconImageICNSData;
-(CGRect)thumbnailRect;
-(CGRect)stripRect;
-(PKImage *)footerImage;
-(PKImage *)cardHolderPicture;
-(id)logoImage;
-(id)stripImage;
-(PKImage *)compactBankLogoDarkImage;
-(PKImage *)compactBankLogoLightImage;
-(PKPassBarcodeSettings *)barcodeSettings;
-(char)isVoided;
-(NSString *)cardholderInfoSectionTitle;
-(CGRect)logoRect;
-(NSSet *)embeddedBeacons;
-(NSSet *)embeddedLocations;
-(void)setEmbeddedLocations:(NSSet *)arg1 ;
-(NSString *)lowercaseLocalizedName;
-(NSString *)pluralLocalizedName;
-(char)hasTimeOrLocationRelevancyInfo;
-(char)isRelevantDateOld;
-(id)localizedValueForFieldKey:(id)arg1 ;
-(id)localizedDescriptionForDiff:(id)arg1 ;
-(NSURL *)localLocationsURL;
-(id)diff:(id)arg1 ;
-(char)isPersonalizable;
-(PKImage *)frontFaceShadowImage;
-(PKImage *)partialFrontFaceImage;
-(PKImage *)personalizationLogoImage;
-(PKPassLiveRenderedImageSet *)liveRenderedImageSet;
-(PKPassFrontFaceImageSet *)frontFaceImageSet;
-(PKLiveRenderedShaderSet *)liveRenderedShaderSet;
-(char)isEqualToPassIncludingMetadata:(id)arg1 ;
-(id)dateForSemanticKey:(id)arg1 ;
-(id)locationForSemanticKey:(id)arg1 ;
-(id)currencyAmountForSemanticKey:(id)arg1 ;
-(id)personNameComponentsForSemanticKey:(id)arg1 ;
-(id)stringsForSemanticKey:(id)arg1 ;
-(id)dictionariesForSemanticKey:(id)arg1 ;
-(NSArray *)embeddedLocationsArray;
-(void)setRemotePass:(char)arg1 ;
-(void)setPassLibraryMachServiceName:(NSString *)arg1 ;
-(char)isCloudKitArchived;
-(void)setIsCloudKitArchived:(char)arg1 ;
-(NSString *)groupingID;
-(NSURL *)webLocationsURL;
-(void)setWebLocationsURL:(NSURL *)arg1 ;
-(void)setLocalLocationsURL:(NSURL *)arg1 ;
-(NSString *)sharingText;
-(PKImage *)partialFrontFaceImagePlaceholder;
-(char)liveRenderedBackground;
-(char)supportsCategoryVisualization;
-(void)setCardholderInfoSectionTitle:(NSString *)arg1 ;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(void)setRevoked:(char)arg1 ;
-(NSString *)flightCode;
-(NSString *)airlineCode;
-(char)hasFlightDetails;
@end

