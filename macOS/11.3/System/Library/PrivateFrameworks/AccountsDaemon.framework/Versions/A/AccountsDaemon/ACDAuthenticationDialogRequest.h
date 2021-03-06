/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, ACAccount, NSString;

@interface ACDAuthenticationDialogRequest : NSObject {

	char _confirmationRequired;
	NSURL* _url;
	ACAccount* _account;
	NSString* _authDelegateClassName;
	NSString* _authDelegateClassBundlePath;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) char confirmationRequired;                         //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,retain) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassName;                    //@synthesize authDelegateClassName=_authDelegateClassName - In the implementation block
@property (nonatomic,copy) NSString * authDelegateClassBundlePath;              //@synthesize authDelegateClassBundlePath=_authDelegateClassBundlePath - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(char)confirmationRequired;
-(void)setConfirmationRequired:(char)arg1 ;
-(NSString *)authDelegateClassName;
-(void)setAuthDelegateClassName:(NSString *)arg1 ;
-(NSString *)authDelegateClassBundlePath;
-(void)setAuthDelegateClassBundlePath:(NSString *)arg1 ;
@end

