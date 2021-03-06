/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, PKAccountDetails, NSSet, PKAccountAdditionalPushTopics, PKAccountFetchPeriods, NSDate, NSArray, PKCreditAccountDetails;

@interface PKAccount : NSObject <NSSecureCoding, NSCopying> {

	char _blockNotifications;
	char _coOwner;
	char _sharedAccount;
	char _accountStateDirty;
	NSString* _accountIdentifier;
	NSURL* _accountBaseURL;
	NSURL* _applyServiceURL;
	unsigned long long _feature;
	unsigned long long _type;
	PKAccountDetails* _details;
	unsigned long long _state;
	unsigned long long _stateReason;
	unsigned long long _accessLevel;
	NSString* _altDSID;
	NSSet* _previousAccountIdentifiers;
	NSSet* _supportedFeatures;
	PKAccountAdditionalPushTopics* _additionalPushTopics;
	PKAccountFetchPeriods* _fetchPeriods;
	NSDate* _lastUpdated;
	NSArray* _cloudStoreZoneNames;

}

@property (nonatomic,copy) NSString * accountIdentifier;                                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * accountBaseURL;                                            //@synthesize accountBaseURL=_accountBaseURL - In the implementation block
@property (nonatomic,retain) NSURL * applyServiceURL;                                           //@synthesize applyServiceURL=_applyServiceURL - In the implementation block
@property (assign,nonatomic) unsigned long long feature;                                        //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKAccountDetails * details;                                        //@synthesize details=_details - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long stateReason;                                    //@synthesize stateReason=_stateReason - In the implementation block
@property (assign,nonatomic) unsigned long long accessLevel;                                    //@synthesize accessLevel=_accessLevel - In the implementation block
@property (assign,nonatomic) char blockNotifications;                                           //@synthesize blockNotifications=_blockNotifications - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                  //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,getter=isCoOwner,nonatomic) char coOwner;                                     //@synthesize coOwner=_coOwner - In the implementation block
@property (assign,getter=isSharedAccount,nonatomic) char sharedAccount;                         //@synthesize sharedAccount=_sharedAccount - In the implementation block
@property (nonatomic,copy) NSSet * previousAccountIdentifiers;                                  //@synthesize previousAccountIdentifiers=_previousAccountIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * supportedFeatures;                                           //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (nonatomic,retain) PKAccountAdditionalPushTopics * additionalPushTopics;              //@synthesize additionalPushTopics=_additionalPushTopics - In the implementation block
@property (nonatomic,retain) PKAccountFetchPeriods * fetchPeriods;                              //@synthesize fetchPeriods=_fetchPeriods - In the implementation block
@property (assign,nonatomic) char accountStateDirty;                                            //@synthesize accountStateDirty=_accountStateDirty - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSArray * cloudStoreZoneNames;                                       //@synthesize cloudStoreZoneNames=_cloudStoreZoneNames - In the implementation block
@property (nonatomic,readonly) PKCreditAccountDetails * creditDetails; 
+(char)supportsSecureCoding;
+(id)analyticsAccountTypeForAccount:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(PKAccountDetails *)details;
-(unsigned long long)feature;
-(void)setDetails:(PKAccountDetails *)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(void)setFeature:(unsigned long long)arg1 ;
-(NSURL *)accountBaseURL;
-(NSSet *)supportedFeatures;
-(void)setSupportedFeatures:(NSSet *)arg1 ;
-(unsigned long long)accessLevel;
-(void)setAccessLevel:(unsigned long long)arg1 ;
-(NSURL *)applyServiceURL;
-(void)setApplyServiceURL:(NSURL *)arg1 ;
-(id)schedulePaymentFeatureDescriptor;
-(id)associatedPassUniqueID;
-(PKCreditAccountDetails *)creditDetails;
-(id)analyticsEventAccountType;
-(NSArray *)cloudStoreZoneNames;
-(char)isContentEqualToAccount:(id)arg1 ;
-(char)supportsExtendedFetch;
-(void)setAccountBaseURL:(NSURL *)arg1 ;
-(unsigned long long)stateReason;
-(void)setStateReason:(unsigned long long)arg1 ;
-(char)blockNotifications;
-(void)setBlockNotifications:(char)arg1 ;
-(char)isCoOwner;
-(void)setCoOwner:(char)arg1 ;
-(char)isSharedAccount;
-(void)setSharedAccount:(char)arg1 ;
-(NSSet *)previousAccountIdentifiers;
-(void)setPreviousAccountIdentifiers:(NSSet *)arg1 ;
-(PKAccountAdditionalPushTopics *)additionalPushTopics;
-(void)setAdditionalPushTopics:(PKAccountAdditionalPushTopics *)arg1 ;
-(PKAccountFetchPeriods *)fetchPeriods;
-(void)setFetchPeriods:(PKAccountFetchPeriods *)arg1 ;
-(char)accountStateDirty;
-(void)setAccountStateDirty:(char)arg1 ;
-(void)setCloudStoreZoneNames:(NSArray *)arg1 ;
-(id)_featureWithIdentifier:(id)arg1 ;
-(id)scheduleRecurringPaymentsFeatureDescriptor;
-(id)viewStatementFeatureDescriptor;
-(id)requestStatementFeatureDescriptor;
-(id)exportTransactionDataFeatureDescriptor;
-(id)requestPhysicalCardFeatureDescriptor;
-(id)redeemRewardsFeatureDescriptor;
-(id)showNotificationsFeatureDescriptor;
-(id)showAccountSummaryFeatureDescriptor;
-(id)addFundingSourceFeatureDescriptor;
-(id)showVirtualCardFeatureDescriptor;
-(id)provisioningAllowedFeatureDescriptor;
-(id)accountUserInvitationAllowedFeatureDescriptor;
-(char)supportsSchedulePayment;
-(char)supportsScheduleRecurringPayments;
-(char)supportsViewStatement;
-(char)supportsRequestStatement;
-(char)supportsExportTransactionData;
-(char)supportsRequestPhysicalCard;
-(char)supportsRedeemRewards;
-(char)supportsShowNotifications;
-(char)supportsShowAccountSummary;
-(char)supportsAddFundingSource;
-(char)supportsShowVirtualCard;
-(char)provisioningAllowed;
-(char)accountUserInvitationAllowed;
@end

