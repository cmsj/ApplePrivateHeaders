/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PKContactFormatConfiguration : NSObject <NSSecureCoding> {

	NSDictionary* _regionalAddressFormatConfigurations;
	char _checkFormatOfPhoneNumber;
	char _checkFormatOfEmailAddress;

}

@property (nonatomic,readonly) char checkFormatOfPhoneNumber;               //@synthesize checkFormatOfPhoneNumber=_checkFormatOfPhoneNumber - In the implementation block
@property (nonatomic,readonly) char checkFormatOfEmailAddress;              //@synthesize checkFormatOfEmailAddress=_checkFormatOfEmailAddress - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)contactFieldConfigurationForCountryCode:(id)arg1 ;
-(char)checkFormatOfPhoneNumber;
-(char)checkFormatOfEmailAddress;
-(id)regionalAddressFormatConfigurations;
@end

