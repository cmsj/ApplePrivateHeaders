/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone, NSDate, NSString;

@interface PKAccountPaymentScheduleDetails : NSObject <NSSecureCoding> {

	NSTimeZone* _productTimeZone;
	long long _frequency;
	long long _scheduledDay;
	long long _preset;
	NSDate* _scheduledDate;
	NSString* _paymentTermsIdentifier;

}

@property (assign,nonatomic) long long frequency;                          //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long scheduledDay;                       //@synthesize scheduledDay=_scheduledDay - In the implementation block
@property (assign,nonatomic) long long preset;                             //@synthesize preset=_preset - In the implementation block
@property (nonatomic,copy) NSDate * scheduledDate;                         //@synthesize scheduledDate=_scheduledDate - In the implementation block
@property (nonatomic,copy) NSString * paymentTermsIdentifier;              //@synthesize paymentTermsIdentifier=_paymentTermsIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)hashString;
-(long long)frequency;
-(void)setFrequency:(long long)arg1 ;
-(id)jsonString;
-(id)jsonDictionaryRepresentation;
-(NSString *)paymentTermsIdentifier;
-(void)setPreset:(long long)arg1 ;
-(void)setScheduleTimeZone:(id)arg1 ;
-(void)setScheduledDate:(NSDate *)arg1 ;
-(void)setPaymentTermsIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2 ;
-(long long)scheduledDay;
-(void)setScheduledDay:(long long)arg1 ;
-(long long)preset;
-(NSDate *)scheduledDate;
@end

