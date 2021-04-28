/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/Versions/A/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SFSafariPasswordCredential;
@class NSString, NSDate;

@interface SFSafariCredential : NSObject <NSSecureCoding> {

	NSString* _user;
	NSString* _password;
	NSString* _site;
	NSDate* _creationDate;
	id<SFSafariPasswordCredential> _externalCredential;

}

@property (nonatomic,readonly) id<SFSafariPasswordCredential> externalCredential;              //@synthesize externalCredential=_externalCredential - In the implementation block
@property (nonatomic,readonly) NSString * user;                                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                                                //@synthesize site=_site - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=isExternal,nonatomic,readonly) char external; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)user;
-(NSString *)password;
-(char)isExternal;
-(NSDate *)creationDate;
-(NSString *)site;
-(id<SFSafariPasswordCredential>)externalCredential;
-(id)initWithExternalCredential:(id)arg1 ;
-(id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 ;
@end
