/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TKTokenID, NSUUID, NSXPCConnection;

@interface TKTokenAccessRequest : NSObject {

	char _clientHasAccessTokenEntitlement;
	NSString* _clientBundleID;
	NSString* _clientName;
	TKTokenID* _tokenID;
	NSString* _providerBundleID;
	NSString* _providerName;
	NSUUID* _correlationID;
	NSXPCConnection* _clientConnection;

}

@property (nonatomic,readonly) NSString * clientBundleID;                         //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                             //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) char clientHasAccessTokenEntitlement;              //@synthesize clientHasAccessTokenEntitlement=_clientHasAccessTokenEntitlement - In the implementation block
@property (nonatomic,readonly) TKTokenID * tokenID;                               //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSString * providerBundleID;                       //@synthesize providerBundleID=_providerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * providerName;                           //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,readonly) NSUUID * correlationID;                            //@synthesize correlationID=_correlationID - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * clientConnection;                //@synthesize clientConnection=_clientConnection - In the implementation block
-(id)initWithClientBundleID:(id)arg1 clientName:(id)arg2 clientConnection:(id)arg3 clientHasAccessTokenEntitlement:(char)arg4 tokenID:(id)arg5 providerBundleID:(id)arg6 providerName:(id)arg7 correlationID:(id)arg8 ;
-(char)clientHasAccessTokenEntitlement;
-(NSString *)providerBundleID;
-(char)isEqual:(id)arg1 ;
-(TKTokenID *)tokenID;
-(NSString *)clientName;
-(NSString *)clientBundleID;
-(NSString *)providerName;
-(NSXPCConnection *)clientConnection;
-(NSUUID *)correlationID;
-(id)initWithCaller:(id)arg1 tokenID:(id)arg2 extension:(id)arg3 ;
@end

