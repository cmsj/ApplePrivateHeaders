/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _initialCountryCode;
	NSString* _stringValue;
	os_unfair_lock_s _stateLock;
	CFPhoneNumberRef _phoneNumberRef;

}

@property (nonatomic,copy,readonly) NSString * initialCountryCode;                     //@synthesize initialCountryCode=_initialCountryCode - In the implementation block
@property (copy,readonly) NSString * countryCode; 
@property (copy,readonly) NSString * digits; 
@property (copy,readonly) NSString * formattedStringValue; 
@property (copy,readonly) NSString * formattedInternationalStringValue; 
@property (copy,readonly) NSString * unformattedInternationalStringValue; 
@property (copy,readonly) NSString * stringValue;                                      //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(char)supportsSecureCoding;
+(id)phoneNumberWithStringValue:(id)arg1 ;
+(id)defaultCountryCode;
+(id)phoneNumberWithCopiedStringValue:(id)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(CFPhoneNumberRef)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2 ;
+(char)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1 ;
+(id)_countryCodesForNorthAmericanDialingPlan;
+(id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+(id)unsupportedCountryCodes;
+(id)dialingCodeForISOCountryCode:(id)arg1 ;
+(/*^block*/id)StringValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)countryCode;
-(NSString *)unformattedInternationalStringValue;
-(char)isValid:(id*)arg1 ;
-(NSString *)digits;
-(id)lastFourDigits;
-(char)isLikePhoneNumberForSamePerson:(id)arg1 ;
-(char)isLikePhoneNumber:(id)arg1 ;
-(id)initWithStringValue:(id)arg1 ;
-(NSString *)formattedStringValue;
-(id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)initialCountryCode;
-(CFPhoneNumberRef)phoneNumberRef;
-(CFPhoneNumberRef)nts_lazyPhoneNumberRef;
-(id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1 ;
-(id)_countryCodeFromPhoneNumberRef;
-(NSString *)formattedInternationalStringValue;
-(char)isFullyQualified;
-(id)fullyQualifiedDigits;
-(id)digitsRemovingDialingCode;
-(id)formattedStringValueRemovingDialingCode;
@end

