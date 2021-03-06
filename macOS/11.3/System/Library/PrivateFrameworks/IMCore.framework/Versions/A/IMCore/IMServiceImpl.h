/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstantMessage/IMService.h>

@class NSString, IMAccount, NSDictionary, NSData, NSArray;

@interface IMServiceImpl : IMService {

	NSString* _name;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _countryCode;
	IMAccount* _bestAccount;
	NSDictionary* _serviceDefaults;
	NSDictionary* _defaultSettings;
	NSData* _imageData;
	NSArray* _emailDomains;
	NSArray* _siblingServiceNames;
	unsigned _screenNameSensitivity;
	char _hasLoadedServiceProperties;
	char _handlesChatInvites;
	char _supportsSMS;
	char _supportsPhoneNumberMapping;
	char _supportsGroupAttachments;
	char _supportsMutatingGroupMembers;
	char _supportsOneSessionForAllAccounts;
	char _supportsAuthorization;
	char _supportsRegistration;
	char _supportsAdding;
	char _supportsPresence;
	char _supportsIDStatusLookup;
	char _supportsDatabaseStorage;
	char _supportsAudioMessages;
	char _shouldInternationalizeNumbers;
	char _supportsOfflineTransfers;
	char _shouldDisableDeactivation;
	char _ignoresNetworkConnectivity;
	char _isPersistent;
	char _isPlugInService;
	char _allowsMultipleConnections;
	NSArray* _abProperties;
	NSDictionary* _serviceProps;
	NSArray* _addressBookProperties;
	NSString* _addressBookProperty;

}

@property (nonatomic,readonly) char _wantsInternationizedNumbers; 
@property (nonatomic,readonly) char _supportsDatabaseStorage; 
@property (nonatomic,retain) NSDictionary * serviceDefaults;                         //@synthesize serviceDefaults=_serviceDefaults - In the implementation block
@property (nonatomic,readonly) NSArray * accountIDs; 
@property (nonatomic,retain) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) char handlesChatInvites;                              //@synthesize handlesChatInvites=_handlesChatInvites - In the implementation block
@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortName;                                 //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,retain) NSDictionary * serviceProperties; 
@property (nonatomic,retain) NSDictionary * defaultAccountSettings;                  //@synthesize defaultSettings=_defaultSettings - In the implementation block
@property (nonatomic,readonly) char supportsAdding;                                  //@synthesize supportsAdding=_supportsAdding - In the implementation block
@property (nonatomic,readonly) char supportsPresence;                                //@synthesize supportsPresence=_supportsPresence - In the implementation block
@property (nonatomic,readonly) char supportsGroupAttachments;                        //@synthesize supportsGroupAttachments=_supportsGroupAttachments - In the implementation block
@property (nonatomic,readonly) char supportsMutatingGroupMembers;                    //@synthesize supportsMutatingGroupMembers=_supportsMutatingGroupMembers - In the implementation block
@property (nonatomic,readonly) char supportsOneSessionForAllAccounts;                //@synthesize supportsOneSessionForAllAccounts=_supportsOneSessionForAllAccounts - In the implementation block
@property (nonatomic,readonly) char supportsRegistration;                            //@synthesize supportsRegistration=_supportsRegistration - In the implementation block
@property (nonatomic,readonly) char supportsAuthorization;                           //@synthesize supportsAuthorization=_supportsAuthorization - In the implementation block
@property (nonatomic,readonly) char supportsPhoneNumberMapping;                      //@synthesize supportsPhoneNumberMapping=_supportsPhoneNumberMapping - In the implementation block
@property (nonatomic,readonly) char supportsIDStatusLookup;                          //@synthesize supportsIDStatusLookup=_supportsIDStatusLookup - In the implementation block
@property (nonatomic,readonly) char supportsOfflineTransfers;                        //@synthesize supportsOfflineTransfers=_supportsOfflineTransfers - In the implementation block
@property (nonatomic,readonly) char supportsAudioMessages;                           //@synthesize supportsAudioMessages=_supportsAudioMessages - In the implementation block
@property (nonatomic,readonly) char isPersistent;                                    //@synthesize isPersistent=_isPersistent - In the implementation block
@property (nonatomic,readonly) char ignoresNetworkConnectivity;                      //@synthesize ignoresNetworkConnectivity=_ignoresNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) long long maxAttachmentSize; 
@property (nonatomic,readonly) unsigned IDSensitivity;                               //@synthesize screenNameSensitivity=_screenNameSensitivity - In the implementation block
@property (nonatomic,readonly) char shouldDisableDeactivation;                       //@synthesize shouldDisableDeactivation=_shouldDisableDeactivation - In the implementation block
@property (nonatomic,readonly) NSArray * siblingServices; 
@property (nonatomic,readonly) char isPlugInService;                                 //@synthesize isPlugInService=_isPlugInService - In the implementation block
@property (getter=isLegacyService,readonly) char legacyService; 
@property (getter=isDiscontinued,nonatomic,readonly) char discontinued; 
@property (nonatomic,readonly) NSArray * emailDomains;                               //@synthesize emailDomains=_emailDomains - In the implementation block
@property (nonatomic,readonly) char allowsMultipleConnections;                       //@synthesize allowsMultipleConnections=_allowsMultipleConnections - In the implementation block
@property (nonatomic,readonly) long long buddyNotesMaxByteLength; 
@property (nonatomic,readonly) NSData * serviceImageData; 
@property (nonatomic,readonly) NSArray * addressBookProperties;                      //@synthesize addressBookProperties=_addressBookProperties - In the implementation block
@property (nonatomic,readonly) NSString * addressBookProperty;                       //@synthesize addressBookProperty=_addressBookProperty - In the implementation block
@property (nonatomic,readonly) Class accountClass; 
+(void)setServiceClass:(Class)arg1 ;
+(Class)serviceClass;
+(id)connectedServices;
+(id)allServices;
+(id)serviceWithName:(id)arg1 ;
+(id)serviceWithInternalName:(id)arg1 ;
+(id)allServicesNonBlocking;
+(char)systemSupportsSMSSending;
+(char)mmsEnabled;
+(char)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1 ;
+(char)iMessageEnabled;
+(char)hasAlias:(id)arg1 onAccountForService:(id)arg2 ;
+(char)_isSIMIdIDSRegisteredSIM:(id)arg1 ;
+(char)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2 ;
+(char)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1 ;
+(char)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(char)_readMMSUserOverride;
+(id)supportedCountryCodes;
+(id)activeServices;
+(id)servicesWithCapability:(unsigned long long)arg1 ;
+(id)connectedServicesWithCapability:(unsigned long long)arg1 ;
+(id)operationalServicesWithCapability:(unsigned long long)arg1 ;
+(char)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(char)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 ;
+(char)smsEnabled;
+(char)_deviceIsAltAccount;
+(char)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long*)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)countryCode;
-(char)isEnabled;
-(id)localizedName;
-(id)localizedShortName;
-(unsigned long long)status;
-(void)disconnect;
-(void)setCountryCode:(NSString *)arg1 ;
-(char)ignoresNetworkConnectivity;
-(NSString *)internalName;
-(NSString *)shortName;
-(char)isPersistent;
-(NSString *)addressBookProperty;
-(id)infoForScreenName:(id)arg1 ;
-(Class)accountClass;
-(char)isPlugInService;
-(void)activeAccountsChanged:(id)arg1 ;
-(void)_syncWithRemoteBuddies;
-(void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)_calculateBestAccount;
-(id)canonicalFormOfID:(id)arg1 ;
-(char)initialSyncPerformed;
-(void)_blockUntilInitialSyncPerformed;
-(void)_loadPropertiesIfNeeded;
-(char)isLegacyService;
-(char)isDiscontinued;
-(void)doneSetup;
-(char)equalID:(id)arg1 andID:(id)arg2 ;
-(id)normalizedFormOfID:(id)arg1 ;
-(long long)compareNames:(id)arg1 ;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)myScreenNames;
-(NSDictionary *)serviceProperties;
-(void)setServiceProperties:(NSDictionary *)arg1 ;
-(id)subtypeInformationForAccount:(id)arg1 ;
-(NSData *)serviceImageData;
-(long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2 ;
-(long long)maxAttachmentSize;
-(char)_supportsDatabaseStorage;
-(char)_wantsInternationizedNumbers;
-(NSArray *)siblingServices;
-(long long)buddyNotesMaxByteLength;
-(NSArray *)accountIDs;
-(void)defaultsChanged:(id)arg1 ;
-(NSDictionary *)serviceDefaults;
-(void)setServiceDefaults:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultAccountSettings;
-(void)setDefaultAccountSettings:(NSDictionary *)arg1 ;
-(char)supportsIDStatusLookup;
-(char)supportsAudioMessages;
-(char)supportsPhoneNumberMapping;
-(char)supportsAuthorization;
-(char)handlesChatInvites;
-(char)supportsRegistration;
-(char)supportsOfflineTransfers;
-(char)supportsPresence;
-(char)supportsMutatingGroupMembers;
-(char)supportsOneSessionForAllAccounts;
-(char)supportsGroupAttachments;
-(char)supportsAdding;
-(char)allowsMultipleConnections;
-(char)shouldDisableDeactivation;
-(unsigned)IDSensitivity;
-(NSArray *)emailDomains;
-(NSArray *)addressBookProperties;
@end

