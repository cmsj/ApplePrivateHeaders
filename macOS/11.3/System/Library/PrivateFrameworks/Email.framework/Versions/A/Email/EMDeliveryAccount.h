/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMAccount.h>
#import <libobjc.A.dylib/EMDeliveryAccountBuilder.h>

@class NSString;

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder> {

	char _primaryiCloudAccount;
	NSString* _name;
	NSString* _username;
	NSString* _hostname;
	unsigned long long _maximumMessageBytes;

}

@property (assign) unsigned long long maximumMessageBytes;                        //@synthesize maximumMessageBytes=_maximumMessageBytes - In the implementation block
@property (copy) NSString * username;                                             //@synthesize username=_username - In the implementation block
@property (copy) NSString * hostname;                                             //@synthesize hostname=_hostname - In the implementation block
@property (getter=isPrimaryiCloudAccount) char primaryiCloudAccount;              //@synthesize primaryiCloudAccount=_primaryiCloudAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)username;
-(NSString *)hostname;
-(void)setUsername:(NSString *)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(void)setPrimaryiCloudAccount:(char)arg1 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(/*^block*/id)arg4 ;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(char)isPrimaryiCloudAccount;
-(void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(/*^block*/id)arg3 ;
@end
