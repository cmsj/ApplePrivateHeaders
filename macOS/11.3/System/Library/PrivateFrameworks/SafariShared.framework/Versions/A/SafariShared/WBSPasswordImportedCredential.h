/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding> {

	NSString* _user;
	NSString* _password;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * user;                  //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)user;
-(NSString *)password;
-(NSURL *)url;
-(id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3 ;
-(id)urlCredentialWithPersistence:(unsigned long long)arg1 ;
-(id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1 ;
@end

