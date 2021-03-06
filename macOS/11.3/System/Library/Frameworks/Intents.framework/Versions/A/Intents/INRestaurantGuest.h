/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INPerson.h>
#import <libobjc.A.dylib/INRestaurantGuestExport.h>

@class NSString;

@interface INRestaurantGuest : INPerson <INRestaurantGuestExport> {

	NSString* _phoneNumber;
	NSString* _emailAddress;

}

@property (copy) NSString * phoneNumber;                            //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneNumber;
-(id)_dictionaryRepresentation;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(char)arg7 ;
-(id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(char)arg11 scoredAlternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14 ;
-(id)initWithNameComponents:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 ;
@end

