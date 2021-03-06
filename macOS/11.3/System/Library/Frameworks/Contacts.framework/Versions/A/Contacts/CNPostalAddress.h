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
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _street;
	NSString* _subLocality;
	NSString* _city;
	NSString* _subAdministrativeArea;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _ISOCountryCode;
	NSString* _formattedAddress;

}

@property (copy) NSString * street;                                 //@synthesize street=_street - In the implementation block
@property (copy) NSString * subLocality;                            //@synthesize subLocality=_subLocality - In the implementation block
@property (copy) NSString * city;                                   //@synthesize city=_city - In the implementation block
@property (copy) NSString * subAdministrativeArea;                  //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (copy) NSString * state;                                  //@synthesize state=_state - In the implementation block
@property (copy) NSString * postalCode;                             //@synthesize postalCode=_postalCode - In the implementation block
@property (copy) NSString * country;                                //@synthesize country=_country - In the implementation block
@property (copy) NSString * ISOCountryCode;                         //@synthesize ISOCountryCode=_ISOCountryCode - In the implementation block
@property (copy) NSString * formattedAddress;                       //@synthesize formattedAddress=_formattedAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_rt_labelStringWithAddressLabelType:(unsigned long long)arg1 ;
+(char)supportsSecureCoding;
+(id)postalAddressWithDictionaryRepresentation:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 ;
+(id)postalAddressWithAddressBookDictionaryRepresentation:(id)arg1 ;
-(id)_rt_toString;
-(id)formattedAddressString;
-(id)formattedAddressStrings;
-(id)CalLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)city;
-(NSString *)country;
-(NSString *)postalCode;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSString *)street;
-(NSString *)ISOCountryCode;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(char)isValid:(id*)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(NSString *)formattedAddress;
-(id)addressBookDictionaryRepresentation;
-(void)setFormattedAddress:(NSString *)arg1 ;
@end

