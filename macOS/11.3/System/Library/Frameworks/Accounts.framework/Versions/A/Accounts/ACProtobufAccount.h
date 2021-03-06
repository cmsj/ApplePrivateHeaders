/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ACProtobufAccountType, ACProtobufAccountCredential, NSMutableArray, ACProtobufDate, ACProtobufURL, NSDictionary;

@interface ACProtobufAccount : PBCodable <NSCopying> {

	NSString* _accountDescription;
	ACProtobufAccountType* _accountType;
	NSString* _authenticationType;
	ACProtobufAccountCredential* _credential;
	NSString* _credentialType;
	NSMutableArray* _dataclassProperties;
	ACProtobufDate* _date;
	NSMutableArray* _dirtyAccountProperties;
	NSMutableArray* _dirtyDataclassProperties;
	NSMutableArray* _dirtyProperties;
	NSMutableArray* _enabledDataclasses;
	NSString* _identifier;
	ACProtobufDate* _lastCredentialRenewalRejectionDate;
	NSString* _modificationID;
	ACProtobufURL* _objectID;
	NSString* _owningBundleID;
	ACProtobufAccount* _parentAccount;
	NSMutableArray* _properties;
	NSMutableArray* _provisionedDataclasses;
	NSString* _username;
	char _active;
	char _authenticated;
	char _supportsAuthentication;
	char _visible;
	char _warmingUp;
	SCD_Struct_AC4 _has;

}

@property (nonatomic,copy) NSDictionary * propertiesDictionary; 
@property (nonatomic,copy) NSDictionary * dataclassPropertiesDictionary; 
@property (nonatomic,retain) ACProtobufAccountType * accountType;                              //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) char hasCredential; 
@property (nonatomic,retain) ACProtobufAccountCredential * credential;                         //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasAccountDescription; 
@property (nonatomic,retain) NSString * accountDescription;                                    //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,readonly) char hasUsername; 
@property (nonatomic,retain) NSString * username;                                              //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;                                      //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) char authenticated;                                               //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,readonly) char hasLastCredentialRenewalRejectionDate; 
@property (nonatomic,retain) ACProtobufDate * lastCredentialRenewalRejectionDate;              //@synthesize lastCredentialRenewalRejectionDate=_lastCredentialRenewalRejectionDate - In the implementation block
@property (assign,nonatomic) char active;                                                      //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) char visible;                                                     //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) char supportsAuthentication;                                      //@synthesize supportsAuthentication=_supportsAuthentication - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataclassProperties;                             //@synthesize dataclassProperties=_dataclassProperties - In the implementation block
@property (nonatomic,readonly) char hasObjectID; 
@property (nonatomic,retain) ACProtobufURL * objectID;                                         //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) char hasParentAccount; 
@property (nonatomic,retain) ACProtobufAccount * parentAccount;                                //@synthesize parentAccount=_parentAccount - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledDataclasses;                              //@synthesize enabledDataclasses=_enabledDataclasses - In the implementation block
@property (nonatomic,retain) NSMutableArray * provisionedDataclasses;                          //@synthesize provisionedDataclasses=_provisionedDataclasses - In the implementation block
@property (nonatomic,readonly) char hasAuthenticationType; 
@property (nonatomic,retain) NSString * authenticationType;                                    //@synthesize authenticationType=_authenticationType - In the implementation block
@property (nonatomic,readonly) char hasCredentialType; 
@property (nonatomic,retain) NSString * credentialType;                                        //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) char hasDate; 
@property (nonatomic,retain) ACProtobufDate * date;                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) char hasOwningBundleID; 
@property (nonatomic,retain) NSString * owningBundleID;                                        //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyProperties;                                 //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyAccountProperties;                          //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyDataclassProperties;                        //@synthesize dirtyDataclassProperties=_dirtyDataclassProperties - In the implementation block
@property (assign,nonatomic) char hasWarmingUp; 
@property (assign,nonatomic) char warmingUp;                                                   //@synthesize warmingUp=_warmingUp - In the implementation block
@property (nonatomic,readonly) char hasModificationID; 
@property (nonatomic,retain) NSString * modificationID;                                        //@synthesize modificationID=_modificationID - In the implementation block
+(Class)dataclassPropertiesType;
+(Class)enabledDataclassesType;
+(Class)provisionedDataclassesType;
+(Class)dirtyPropertiesType;
+(Class)dirtyAccountPropertiesType;
+(Class)dirtyDataclassPropertiesType;
+(Class)propertiesType;
-(NSString *)modificationID;
-(char)warmingUp;
-(char)hasLastCredentialRenewalRejectionDate;
-(NSDictionary *)dataclassPropertiesDictionary;
-(char)hasObjectID;
-(char)hasParentAccount;
-(void)setPropertiesDictionary:(NSDictionary *)arg1 ;
-(void)setDataclassPropertiesDictionary:(NSDictionary *)arg1 ;
-(void)setDirtyAccountProperties:(NSMutableArray *)arg1 ;
-(void)setDirtyDataclassProperties:(NSMutableArray *)arg1 ;
-(void)addDataclassProperties:(id)arg1 ;
-(void)addEnabledDataclasses:(id)arg1 ;
-(void)addProvisionedDataclasses:(id)arg1 ;
-(void)addDirtyProperties:(id)arg1 ;
-(void)addDirtyAccountProperties:(id)arg1 ;
-(void)addDirtyDataclassProperties:(id)arg1 ;
-(unsigned long long)dataclassPropertiesCount;
-(void)clearDataclassProperties;
-(id)dataclassPropertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)enabledDataclassesCount;
-(void)clearEnabledDataclasses;
-(id)enabledDataclassesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)provisionedDataclassesCount;
-(void)clearProvisionedDataclasses;
-(id)provisionedDataclassesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dirtyPropertiesCount;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dirtyAccountPropertiesCount;
-(void)clearDirtyAccountProperties;
-(id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dirtyDataclassPropertiesCount;
-(void)clearDirtyDataclassProperties;
-(id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1 ;
-(char)hasAccountDescription;
-(char)hasAuthenticationType;
-(char)hasOwningBundleID;
-(void)setHasWarmingUp:(char)arg1 ;
-(char)hasWarmingUp;
-(char)hasModificationID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(ACProtobufDate *)date;
-(NSString *)identifier;
-(char)active;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearProperties;
-(ACProtobufURL *)objectID;
-(ACProtobufAccountCredential *)credential;
-(void)setActive:(char)arg1 ;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(void)setDate:(ACProtobufDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasDate;
-(NSMutableArray *)properties;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)setAccountType:(ACProtobufAccountType *)arg1 ;
-(ACProtobufAccountType *)accountType;
-(NSMutableArray *)provisionedDataclasses;
-(NSString *)credentialType;
-(NSString *)accountDescription;
-(void)setCredential:(ACProtobufAccountCredential *)arg1 ;
-(void)setSupportsAuthentication:(char)arg1 ;
-(ACProtobufAccount *)parentAccount;
-(void)setParentAccount:(ACProtobufAccount *)arg1 ;
-(NSMutableArray *)enabledDataclasses;
-(NSMutableArray *)dirtyAccountProperties;
-(void)clearDirtyProperties;
-(NSMutableArray *)dirtyProperties;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(char)supportsAuthentication;
-(void)addProperties:(id)arg1 ;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)propertiesCount;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(NSMutableArray *)dataclassProperties;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setAuthenticated:(char)arg1 ;
-(void)setWarmingUp:(char)arg1 ;
-(void)setDataclassProperties:(NSMutableArray *)arg1 ;
-(NSString *)authenticationType;
-(NSString *)owningBundleID;
-(void)setProvisionedDataclasses:(NSMutableArray *)arg1 ;
-(void)setEnabledDataclasses:(NSMutableArray *)arg1 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(void)setModificationID:(NSString *)arg1 ;
-(NSMutableArray *)dirtyDataclassProperties;
-(void)setLastCredentialRenewalRejectionDate:(ACProtobufDate *)arg1 ;
-(ACProtobufDate *)lastCredentialRenewalRejectionDate;
-(char)authenticated;
-(NSDictionary *)propertiesDictionary;
-(char)hasUsername;
-(char)hasCredentialType;
-(char)hasCredential;
@end

