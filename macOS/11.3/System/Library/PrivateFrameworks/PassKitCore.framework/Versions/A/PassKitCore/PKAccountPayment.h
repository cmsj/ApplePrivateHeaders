/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, PKCurrencyAmount, NSDate, PKAccountPaymentFundingSource, PKAccountPaymentScheduleDetails;

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject> {

	char _cancellable;
	NSString* _identifier;
	NSString* _referenceIdentifier;
	NSString* _clientReferenceIdentifier;
	PKCurrencyAmount* _currencyAmount;
	NSDate* _paymentDate;
	NSDate* _paymentStatusDate;
	NSDate* _cancellationExpiryDate;
	long long _state;
	long long _statusCode;
	PKAccountPaymentFundingSource* _fundingSource;
	PKAccountPaymentScheduleDetails* _scheduleDetails;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * referenceIdentifier;                                   //@synthesize referenceIdentifier=_referenceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientReferenceIdentifier;                             //@synthesize clientReferenceIdentifier=_clientReferenceIdentifier - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy) NSDate * paymentDate;                                             //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,copy) NSDate * paymentStatusDate;                                       //@synthesize paymentStatusDate=_paymentStatusDate - In the implementation block
@property (assign,nonatomic) char cancellable;                                               //@synthesize cancellable=_cancellable - In the implementation block
@property (nonatomic,copy) NSDate * cancellationExpiryDate;                                  //@synthesize cancellationExpiryDate=_cancellationExpiryDate - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long statusCode;                                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) PKAccountPaymentFundingSource * fundingSource;                  //@synthesize fundingSource=_fundingSource - In the implementation block
@property (nonatomic,retain) PKAccountPaymentScheduleDetails * scheduleDetails;              //@synthesize scheduleDetails=_scheduleDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(NSString *)identifier;
-(void)setState:(long long)arg1 ;
-(void)setCancellable:(char)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)statusCode;
-(char)cancellable;
-(id)initWithRecord:(id)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(NSString *)referenceIdentifier;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(void)setScheduleDetails:(PKAccountPaymentScheduleDetails *)arg1 ;
-(PKAccountPaymentScheduleDetails *)scheduleDetails;
-(PKAccountPaymentFundingSource *)fundingSource;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(char)isRecurring;
-(char)isOnHoldForAccount:(id)arg1 ;
-(char)isCurrentlyCancellable;
-(NSString *)clientReferenceIdentifier;
-(void)setClientReferenceIdentifier:(NSString *)arg1 ;
-(NSDate *)paymentStatusDate;
-(void)setPaymentStatusDate:(NSDate *)arg1 ;
-(NSDate *)cancellationExpiryDate;
-(void)setCancellationExpiryDate:(NSDate *)arg1 ;
@end

