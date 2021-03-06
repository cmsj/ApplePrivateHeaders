/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNCDContactPredicate.h>

@class CNPostalAddress, NSString;

@interface CNPostalAddressContactPredicate : CNPredicate <CNCDContactPredicate> {

	CNPostalAddress* _postalAddress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
+(char)supportsSecureCoding;
+(id)predicatesForStreet:(id)arg1 ;
+(id)predicatesForSubLocality:(id)arg1 ;
+(id)predicatesForCity:(id)arg1 ;
+(id)predicatesForSubAdministrativeArea:(id)arg1 ;
+(id)predicatesForState:(id)arg1 ;
+(id)predicatesForPostalCode:(id)arg1 ;
+(id)predicatesForCountry:(id)arg1 ;
+(id)predicatesForISOCountryCode:(id)arg1 ;
+(id)predicateForKey:(id)arg1 value:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(CNPostalAddress *)postalAddress;
-(id)cn_coreDataPredicate;
@end

