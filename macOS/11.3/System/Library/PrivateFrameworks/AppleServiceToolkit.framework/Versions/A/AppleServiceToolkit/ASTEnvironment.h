/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSNumber;

@interface ASTEnvironment : NSObject {

	unsigned long long _environmentType;
	unsigned long long _server;
	NSURL* _serverURL;
	NSString* _SOCKSProxyServer;
	NSNumber* _SOCKSProxyPort;

}

@property (assign,nonatomic) unsigned long long environmentType;                              //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) unsigned long long server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                                               //@synthesize serverURL=_serverURL - In the implementation block
@property (setter=OCKSProxyServer,nonatomic,retain) NSString * SOCKSProxyServer;              //@synthesize SOCKSProxyServer=_SOCKSProxyServer - In the implementation block
@property (setter=OCKSProxyPort,nonatomic,retain) NSNumber * SOCKSProxyPort;                  //@synthesize SOCKSProxyPort=_SOCKSProxyPort - In the implementation block
+(char)isInternalBuild;
+(id)currentEnvironment;
+(id)environmentWithEnvironmentType:(unsigned long long)arg1 ;
+(void)resetEnvironment;
-(id)init;
-(void)setServer:(unsigned long long)arg1 ;
-(unsigned long long)server;
-(id)_defaultServerURL;
-(NSURL *)serverURL;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setEnvironmentType:(unsigned long long)arg1 ;
-(unsigned long long)environmentType;
-(NSString *)SOCKSProxyServer;
-(NSNumber *)SOCKSProxyPort;
-(id)initWithEnvironmentType:(unsigned long long)arg1 ;
-(unsigned long long)_defaultServerSelection;
-(id)_generateServerURL;
-(id)_environmentServerString;
-(void)setSOCKSProxyServer:(NSString *)arg1 ;
-(void)setSOCKSProxyPort:(NSNumber *)arg1 ;
@end

