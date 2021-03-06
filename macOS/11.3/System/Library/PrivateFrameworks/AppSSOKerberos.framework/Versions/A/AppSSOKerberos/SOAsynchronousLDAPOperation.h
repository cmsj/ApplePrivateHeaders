/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/Versions/A/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSSOKerberos/SOAsynchronousOperation.h>

@class NSString;

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation {

	char _requireTLSForLDAP;
	unsigned short _port;
	/*^block*/id _completion;
	NSString* _realm;
	NSString* _host;
	NSString* _bundleIdentifier;

}

@property (copy) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSString * realm;                         //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * host;                          //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;                      //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) char requireTLSForLDAP;                   //@synthesize requireTLSForLDAP=_requireTLSForLDAP - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)host;
-(unsigned short)port;
-(NSString *)bundleIdentifier;
-(void)setHost:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setPort:(unsigned short)arg1 ;
-(void)main;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(void)setRequireTLSForLDAP:(char)arg1 ;
-(char)requireTLSForLDAP;
-(id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andRequireTLSForLDAP:(char)arg5 andCompletion:(/*^block*/id)arg6 ;
@end

