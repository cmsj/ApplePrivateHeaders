/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, PKPassPersonalization, NSDictionary, PKPassBarcodeSettings;

@interface PKPassContent : PKContent <NSSecureCoding> {

	long long _transitType;
	NSString* _logoText;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;
	NSArray* _balanceFields;
	PKPassPersonalization* _personalization;
	NSDictionary* _semantics;
	NSDictionary* _allSemantics;
	NSString* _businessChatIdentifier;
	PKPassBarcodeSettings* _barcodeSettings;
	NSString* _cardholderInfoSectionTitle;

}

@property (assign,nonatomic) long long transitType;                                //@synthesize transitType=_transitType - In the implementation block
@property (nonatomic,copy) NSString * logoText;                                    //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,copy) NSArray * frontFieldBuckets;                            //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * backFieldBuckets;                             //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * balanceFields;                                //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,copy) PKPassPersonalization * personalization;                //@synthesize personalization=_personalization - In the implementation block
@property (nonatomic,copy) NSDictionary * semantics;                               //@synthesize semantics=_semantics - In the implementation block
@property (nonatomic,copy) NSDictionary * allSemantics;                            //@synthesize allSemantics=_allSemantics - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;                      //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,retain) PKPassBarcodeSettings * barcodeSettings;              //@synthesize barcodeSettings=_barcodeSettings - In the implementation block
@property (nonatomic,copy) NSString * cardholderInfoSectionTitle;                  //@synthesize cardholderInfoSectionTitle=_cardholderInfoSectionTitle - In the implementation block
@property (nonatomic,readonly) NSArray * primaryFields; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPassPersonalization *)personalization;
-(void)setPersonalization:(PKPassPersonalization *)arg1 ;
-(void)setTransitType:(long long)arg1 ;
-(long long)transitType;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(NSString *)businessChatIdentifier;
-(void)setSemantics:(NSDictionary *)arg1 ;
-(NSDictionary *)semantics;
-(NSArray *)balanceFields;
-(void)setBalanceFields:(NSArray *)arg1 ;
-(void)flushFormattedFieldValues;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(NSString *)logoText;
-(NSArray *)primaryFields;
-(NSDictionary *)allSemantics;
-(PKPassBarcodeSettings *)barcodeSettings;
-(NSString *)cardholderInfoSectionTitle;
-(void)setCardholderInfoSectionTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setFrontFieldBuckets:(NSArray *)arg1 ;
-(void)setBackFieldBuckets:(NSArray *)arg1 ;
-(void)setAllSemantics:(NSDictionary *)arg1 ;
-(void)setBarcodeSettings:(PKPassBarcodeSettings *)arg1 ;
@end

