/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNCountryInformation : NSObject <NSCopying> {

	NSString* _isoCountryCode;
	NSString* _name;
	NSString* _phoneticName;

}

@property (nonatomic,copy,readonly) NSString * isoCountryCode;              //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticName;                //@synthesize phoneticName=_phoneticName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)phoneticName;
-(NSString *)isoCountryCode;
-(id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3 ;
@end

