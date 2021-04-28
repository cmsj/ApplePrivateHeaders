/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPostalAddress : NSObject <NSSecureCoding, NSCopying> {

	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _subLocality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _postalCode;
	NSString* _country;

}

@property (nonatomic,readonly) NSString * thoroughfare;                       //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,readonly) NSString * subThoroughfare;                    //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,readonly) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (nonatomic,readonly) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,readonly) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) NSString * country;                            //@synthesize country=_country - In the implementation block
+(char)supportsSecureCoding;
+(id)postalAddressWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8 ;
+(id)normalizeAddressString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)country;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)postalCode;
-(NSString *)subLocality;
-(NSString *)locality;
-(NSString *)subAdministrativeArea;
-(NSString *)administrativeArea;
-(char)isEqualToPostalAddress:(id)arg1 ;
-(id)initWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8 ;
-(id)initWithContactsPostalAddress:(id)arg1 ;
-(id)initWithFoundInAppsPostalAddress:(id)arg1 ;
-(id)toCNPostalAddress;
-(id)singleLineNormalizedAddressString;
-(id)_countryStringWithCountry:(id)arg1 isoCode:(id)arg2 ;
@end
