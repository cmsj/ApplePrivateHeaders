/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentityProperties, NSString, ACAccount, ACAccountStore, ICUserIdentityStore;

@interface ICUserVerificationContext : NSObject <NSCopying> {

	long long _interactionLevel;
	ICUserIdentityProperties* _identityProperties;
	NSString* _debugReason;
	ACAccount* _ACAccount;
	ACAccountStore* _ACAccountStore;
	ICUserIdentityStore* _identityStore;
	long long _verificationStyle;

}

@property (nonatomic,retain) ACAccount * ACAccount;                                    //@synthesize ACAccount=_ACAccount - In the implementation block
@property (nonatomic,retain) ACAccountStore * ACAccountStore;                          //@synthesize ACAccountStore=_ACAccountStore - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;              //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,retain) ICUserIdentityStore * identityStore;                      //@synthesize identityStore=_identityStore - In the implementation block
@property (assign,nonatomic) long long verificationStyle;                              //@synthesize verificationStyle=_verificationStyle - In the implementation block
@property (assign,nonatomic) long long interactionLevel;                               //@synthesize interactionLevel=_interactionLevel - In the implementation block
@property (nonatomic,copy) NSString * debugReason;                                     //@synthesize debugReason=_debugReason - In the implementation block
+(id)contextWithACAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugReason;
-(void)setDebugReason:(NSString *)arg1 ;
-(void)setIdentityStore:(ICUserIdentityStore *)arg1 ;
-(ICUserIdentityStore *)identityStore;
-(ICUserIdentityProperties *)identityProperties;
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(void)setVerificationStyle:(long long)arg1 ;
-(void)setACAccountStore:(ACAccountStore *)arg1 ;
-(void)setACAccount:(ACAccount *)arg1 ;
-(long long)interactionLevel;
-(void)setInteractionLevel:(long long)arg1 ;
-(ACAccount *)ACAccount;
-(ACAccountStore *)ACAccountStore;
-(long long)verificationStyle;
@end

