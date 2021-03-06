/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying> {

	double _ingestedDate;
	long long _peerPaymentAccountBalance;
	NSMutableArray* _associatedWebDomains;
	NSString* _displayName;
	NSString* _issuerCountryCode;
	NSData* _manifestHash;
	NSString* _organizationName;
	NSString* _passID;
	NSMutableArray* _paymentApplications;
	NSString* _peerPaymentAccountCurrency;
	unsigned _peerPaymentAccountState;
	NSString* _primaryAccountIdentifier;
	NSString* _primaryAccountNumberSuffix;
	char _hasAssociatedPeerPaymentAccount;
	char _supportsAutomaticSelection;
	SCD_Struct_PK16 _has;

}

@property (nonatomic,readonly) char hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) char hasPassID; 
@property (nonatomic,retain) NSString * passID;                                    //@synthesize passID=_passID - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentApplications;                 //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (assign,nonatomic) char hasIngestedDate; 
@property (assign,nonatomic) double ingestedDate;                                  //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,readonly) char hasPrimaryAccountNumberSuffix; 
@property (nonatomic,retain) NSString * primaryAccountNumberSuffix;                //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,readonly) char hasManifestHash; 
@property (nonatomic,retain) NSData * manifestHash;                                //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,readonly) char hasPrimaryAccountIdentifier; 
@property (nonatomic,retain) NSString * primaryAccountIdentifier;                  //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedWebDomains;                //@synthesize associatedWebDomains=_associatedWebDomains - In the implementation block
@property (assign,nonatomic) char hasSupportsAutomaticSelection; 
@property (assign,nonatomic) char supportsAutomaticSelection;                      //@synthesize supportsAutomaticSelection=_supportsAutomaticSelection - In the implementation block
@property (nonatomic,readonly) char hasIssuerCountryCode; 
@property (nonatomic,retain) NSString * issuerCountryCode;                         //@synthesize issuerCountryCode=_issuerCountryCode - In the implementation block
@property (assign,nonatomic) char hasHasAssociatedPeerPaymentAccount; 
@property (assign,nonatomic) char hasAssociatedPeerPaymentAccount;                 //@synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount - In the implementation block
@property (nonatomic,readonly) char hasPeerPaymentAccountCurrency; 
@property (nonatomic,retain) NSString * peerPaymentAccountCurrency;                //@synthesize peerPaymentAccountCurrency=_peerPaymentAccountCurrency - In the implementation block
@property (assign,nonatomic) char hasPeerPaymentAccountBalance; 
@property (assign,nonatomic) long long peerPaymentAccountBalance;                  //@synthesize peerPaymentAccountBalance=_peerPaymentAccountBalance - In the implementation block
@property (assign,nonatomic) char hasPeerPaymentAccountState; 
@property (assign,nonatomic) unsigned peerPaymentAccountState;                     //@synthesize peerPaymentAccountState=_peerPaymentAccountState - In the implementation block
@property (nonatomic,readonly) char hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                          //@synthesize organizationName=_organizationName - In the implementation block
+(Class)paymentApplicationsType;
+(Class)associatedWebDomainsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)displayName;
-(id)dictionaryRepresentation;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasDisplayName;
-(NSString *)organizationName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(char)hasOrganizationName;
-(NSString *)primaryAccountIdentifier;
-(char)hasAssociatedPeerPaymentAccount;
-(NSData *)manifestHash;
-(NSString *)primaryAccountNumberSuffix;
-(double)ingestedDate;
-(NSMutableArray *)associatedWebDomains;
-(unsigned)peerPaymentAccountState;
-(NSMutableArray *)paymentApplications;
-(char)supportsAutomaticSelection;
-(long long)peerPaymentAccountBalance;
-(void)setPaymentApplications:(NSMutableArray *)arg1 ;
-(void)setAssociatedWebDomains:(NSMutableArray *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setIssuerCountryCode:(NSString *)arg1 ;
-(void)setHasAssociatedPeerPaymentAccount:(char)arg1 ;
-(NSString *)issuerCountryCode;
-(NSString *)passID;
-(void)setIngestedDate:(double)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSupportsAutomaticSelection:(char)arg1 ;
-(void)setPeerPaymentAccountState:(unsigned)arg1 ;
-(char)hasPeerPaymentAccountBalance;
-(char)hasPeerPaymentAccountCurrency;
-(NSString *)peerPaymentAccountCurrency;
-(void)setPeerPaymentAccountBalance:(long long)arg1 ;
-(void)addPaymentApplications:(id)arg1 ;
-(void)setPassID:(NSString *)arg1 ;
-(void)setPeerPaymentAccountCurrency:(NSString *)arg1 ;
-(char)hasManifestHash;
-(void)addAssociatedWebDomains:(id)arg1 ;
-(unsigned long long)paymentApplicationsCount;
-(void)clearPaymentApplications;
-(id)paymentApplicationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)associatedWebDomainsCount;
-(void)clearAssociatedWebDomains;
-(id)associatedWebDomainsAtIndex:(unsigned long long)arg1 ;
-(char)hasPassID;
-(void)setHasIngestedDate:(char)arg1 ;
-(char)hasIngestedDate;
-(char)hasPrimaryAccountNumberSuffix;
-(char)hasPrimaryAccountIdentifier;
-(void)setHasSupportsAutomaticSelection:(char)arg1 ;
-(char)hasSupportsAutomaticSelection;
-(char)hasIssuerCountryCode;
-(void)setHasHasAssociatedPeerPaymentAccount:(char)arg1 ;
-(char)hasHasAssociatedPeerPaymentAccount;
-(void)setHasPeerPaymentAccountBalance:(char)arg1 ;
-(void)setHasPeerPaymentAccountState:(char)arg1 ;
-(char)hasPeerPaymentAccountState;
@end

