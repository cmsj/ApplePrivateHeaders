/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate, GEOLocation, GEOMapServiceTraits;

@interface MKWalletMerchantLookupRequest : NSObject {

	NSString* _merchantCode;
	NSString* _rawMerchantCode;
	NSString* _industryCategory;
	NSNumber* _industryCode;
	NSString* _paymentNetwork;
	NSDate* _transactionDate;
	GEOLocation* _location;
	NSString* _terminalId;
	NSString* _transactionCurrencyCode;
	unsigned long long _transactionType;
	NSString* _transactionId;
	NSString* _warsawMerchantDomain;
	NSString* _warsawMerchantName;
	NSString* _warsawMerchantId;
	NSString* _adamId;
	NSString* _merchantId;
	NSString* _merchantDoingBizAsName;
	NSString* _merchantEnhancedName;
	NSString* _merchantCity;
	NSString* _merchantRawCity;
	NSString* _merchantState;
	NSString* _merchantRawState;
	NSString* _merchantZip;
	NSString* _merchantAddress;
	NSString* _merchantRawAddress;
	NSString* _merchantCountryCode;
	NSString* _merchantType;
	NSNumber* _merchantCleanConfidenceLevel;
	NSString* _merchantAdditionalData;
	NSString* _merchantCanl;
	NSNumber* _fuzzyMatched;
	NSNumber* _coarseLocationUsed;
	GEOMapServiceTraits* _traits;

}

@property (nonatomic,copy) NSString * merchantCode;                              //@synthesize merchantCode=_merchantCode - In the implementation block
@property (nonatomic,copy) NSString * rawMerchantCode;                           //@synthesize rawMerchantCode=_rawMerchantCode - In the implementation block
@property (nonatomic,copy) NSString * industryCategory;                          //@synthesize industryCategory=_industryCategory - In the implementation block
@property (nonatomic,copy) NSNumber * industryCode;                              //@synthesize industryCode=_industryCode - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                            //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSDate * transactionDate;                             //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) GEOLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * terminalId;                                //@synthesize terminalId=_terminalId - In the implementation block
@property (nonatomic,copy) NSString * transactionCurrencyCode;                   //@synthesize transactionCurrencyCode=_transactionCurrencyCode - In the implementation block
@property (assign,nonatomic) unsigned long long transactionType;                 //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,copy) NSString * transactionId;                             //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,copy) NSString * warsawMerchantDomain;                      //@synthesize warsawMerchantDomain=_warsawMerchantDomain - In the implementation block
@property (nonatomic,copy) NSString * warsawMerchantName;                        //@synthesize warsawMerchantName=_warsawMerchantName - In the implementation block
@property (nonatomic,copy) NSString * warsawMerchantId;                          //@synthesize warsawMerchantId=_warsawMerchantId - In the implementation block
@property (nonatomic,copy) NSString * adamId;                                    //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,copy) NSString * merchantId;                                //@synthesize merchantId=_merchantId - In the implementation block
@property (nonatomic,copy) NSString * merchantDoingBizAsName;                    //@synthesize merchantDoingBizAsName=_merchantDoingBizAsName - In the implementation block
@property (nonatomic,copy) NSString * merchantEnhancedName;                      //@synthesize merchantEnhancedName=_merchantEnhancedName - In the implementation block
@property (nonatomic,copy) NSString * merchantCity;                              //@synthesize merchantCity=_merchantCity - In the implementation block
@property (nonatomic,copy) NSString * merchantRawCity;                           //@synthesize merchantRawCity=_merchantRawCity - In the implementation block
@property (nonatomic,copy) NSString * merchantState;                             //@synthesize merchantState=_merchantState - In the implementation block
@property (nonatomic,copy) NSString * merchantRawState;                          //@synthesize merchantRawState=_merchantRawState - In the implementation block
@property (nonatomic,copy) NSString * merchantZip;                               //@synthesize merchantZip=_merchantZip - In the implementation block
@property (nonatomic,copy) NSString * merchantAddress;                           //@synthesize merchantAddress=_merchantAddress - In the implementation block
@property (nonatomic,copy) NSString * merchantRawAddress;                        //@synthesize merchantRawAddress=_merchantRawAddress - In the implementation block
@property (nonatomic,copy) NSString * merchantCountryCode;                       //@synthesize merchantCountryCode=_merchantCountryCode - In the implementation block
@property (nonatomic,copy) NSString * merchantType;                              //@synthesize merchantType=_merchantType - In the implementation block
@property (nonatomic,copy) NSNumber * merchantCleanConfidenceLevel;              //@synthesize merchantCleanConfidenceLevel=_merchantCleanConfidenceLevel - In the implementation block
@property (nonatomic,copy) NSString * merchantAdditionalData;                    //@synthesize merchantAdditionalData=_merchantAdditionalData - In the implementation block
@property (nonatomic,copy) NSString * merchantCanl;                              //@synthesize merchantCanl=_merchantCanl - In the implementation block
@property (nonatomic,copy) NSNumber * fuzzyMatched;                              //@synthesize fuzzyMatched=_fuzzyMatched - In the implementation block
@property (nonatomic,copy) NSNumber * coarseLocationUsed;                        //@synthesize coarseLocationUsed=_coarseLocationUsed - In the implementation block
@property (nonatomic,copy) GEOMapServiceTraits * traits;                         //@synthesize traits=_traits - In the implementation block
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(GEOMapServiceTraits *)traits;
-(void)setTraits:(GEOMapServiceTraits *)arg1 ;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(NSString *)merchantId;
-(NSString *)merchantEnhancedName;
-(NSString *)merchantCity;
-(NSString *)merchantRawCity;
-(NSString *)merchantState;
-(NSString *)merchantRawState;
-(NSString *)merchantZip;
-(NSString *)merchantAddress;
-(NSString *)merchantRawAddress;
-(NSString *)merchantCountryCode;
-(NSString *)merchantType;
-(NSString *)merchantAdditionalData;
-(NSString *)merchantCanl;
-(void)setMerchantId:(NSString *)arg1 ;
-(void)setMerchantEnhancedName:(NSString *)arg1 ;
-(void)setMerchantCity:(NSString *)arg1 ;
-(void)setMerchantRawCity:(NSString *)arg1 ;
-(void)setMerchantState:(NSString *)arg1 ;
-(void)setMerchantRawState:(NSString *)arg1 ;
-(void)setMerchantZip:(NSString *)arg1 ;
-(void)setMerchantAddress:(NSString *)arg1 ;
-(void)setMerchantRawAddress:(NSString *)arg1 ;
-(void)setMerchantCountryCode:(NSString *)arg1 ;
-(void)setMerchantType:(NSString *)arg1 ;
-(void)setMerchantCleanConfidenceLevel:(NSNumber *)arg1 ;
-(void)setMerchantAdditionalData:(NSString *)arg1 ;
-(void)setMerchantCanl:(NSString *)arg1 ;
-(NSNumber *)merchantCleanConfidenceLevel;
-(NSString *)merchantCode;
-(NSString *)rawMerchantCode;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(NSString *)industryCategory;
-(NSString *)terminalId;
-(NSString *)transactionCurrencyCode;
-(NSString *)transactionId;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(void)setIndustryCategory:(NSString *)arg1 ;
-(void)setIndustryCode:(NSNumber *)arg1 ;
-(void)setTerminalId:(NSString *)arg1 ;
-(void)setTransactionCurrencyCode:(NSString *)arg1 ;
-(void)setTransactionType:(unsigned long long)arg1 ;
-(void)setTransactionId:(NSString *)arg1 ;
-(void)setFuzzyMatched:(NSNumber *)arg1 ;
-(void)setCoarseLocationUsed:(NSNumber *)arg1 ;
-(NSNumber *)industryCode;
-(unsigned long long)transactionType;
-(NSNumber *)fuzzyMatched;
-(NSNumber *)coarseLocationUsed;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(NSString *)warsawMerchantDomain;
-(void)setWarsawMerchantDomain:(NSString *)arg1 ;
-(NSString *)warsawMerchantName;
-(void)setWarsawMerchantName:(NSString *)arg1 ;
-(NSString *)warsawMerchantId;
-(void)setWarsawMerchantId:(NSString *)arg1 ;
-(NSString *)merchantDoingBizAsName;
-(void)setMerchantDoingBizAsName:(NSString *)arg1 ;
@end

