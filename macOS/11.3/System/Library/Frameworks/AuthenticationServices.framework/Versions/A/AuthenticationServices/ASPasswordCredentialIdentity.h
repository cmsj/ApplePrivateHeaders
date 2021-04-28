/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/Versions/A/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASCredentialServiceIdentifier, NSString;

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding> {

	ASCredentialServiceIdentifier* _serviceIdentifier;
	NSString* _user;
	NSString* _recordIdentifier;
	long long _rank;
	id _credentialIdentityStoreIdentifier;

}

@property (nonatomic,readonly) id credentialIdentityStoreIdentifier;                           //@synthesize credentialIdentityStoreIdentifier=_credentialIdentityStoreIdentifier - In the implementation block
@property (nonatomic,readonly) ASCredentialServiceIdentifier * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordIdentifier;                               //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (assign,nonatomic) long long rank;                                                   //@synthesize rank=_rank - In the implementation block
+(char)supportsSecureCoding;
+(id)identityWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)user;
-(ASCredentialServiceIdentifier *)serviceIdentifier;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(NSString *)recordIdentifier;
-(id)credentialIdentityStoreIdentifier;
-(id)initWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3 ;
-(id)_initWithFoundationCredentialIdentity:(id)arg1 ;
@end
