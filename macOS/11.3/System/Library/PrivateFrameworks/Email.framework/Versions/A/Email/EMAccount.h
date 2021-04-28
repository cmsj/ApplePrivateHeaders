/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMObject.h>

@class NSString;

@interface EMAccount : EMObject {

	char _primaryiCloudAccount;
	NSString* _name;
	NSString* _username;
	NSString* _hostname;

}

@property (copy,readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * username;                                             //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * hostname;                                             //@synthesize hostname=_hostname - In the implementation block
@property (getter=isPrimaryiCloudAccount,readonly) char primaryiCloudAccount;              //@synthesize primaryiCloudAccount=_primaryiCloudAccount - In the implementation block
+(char)supportsSecureCoding;
+(id)predicateForReceivingAccounts;
+(id)predicateForDeliveryAccounts;
+(id)sortDescriptorForNameAscending:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(NSString *)username;
-(NSString *)hostname;
-(id)ef_publicDescription;
-(char)isPrimaryiCloudAccount;
@end
