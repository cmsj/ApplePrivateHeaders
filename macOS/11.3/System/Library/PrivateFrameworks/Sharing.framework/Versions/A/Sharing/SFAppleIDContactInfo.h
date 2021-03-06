/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFAppleIDContactInfo : NSObject <NSSecureCoding> {

	NSString* _firstName;
	NSString* _lastName;
	NSArray* _validatedEmailAddresses;
	NSArray* _validatedPhoneNumbers;

}

@property (nonatomic,retain) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSArray * validatedEmailAddresses;              //@synthesize validatedEmailAddresses=_validatedEmailAddresses - In the implementation block
@property (nonatomic,retain) NSArray * validatedPhoneNumbers;                //@synthesize validatedPhoneNumbers=_validatedPhoneNumbers - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqualToContactInfo:(id)arg1 ;
-(void)setValidatedEmailAddresses:(NSArray *)arg1 ;
-(void)setValidatedPhoneNumbers:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSArray *)validatedEmailAddresses;
-(NSArray *)validatedPhoneNumbers;
@end

