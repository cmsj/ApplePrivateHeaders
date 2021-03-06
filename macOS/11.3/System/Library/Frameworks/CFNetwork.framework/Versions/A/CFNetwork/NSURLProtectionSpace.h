/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLProtectionSpaceInternal, NSString;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {

	NSURLProtectionSpaceInternal* _internal;

}

@property (copy,readonly) NSString * realm; 
@property (readonly) char receivesCredentialSecurely; 
@property (readonly) char isProxy; 
@property (copy,readonly) NSString * host; 
@property (readonly) long long port; 
@property (copy,readonly) NSString * proxyType; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * authenticationMethod; 
+(char)supportsSecureCoding;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(CFURLProtectionSpaceRef)_CFURLProtectionSpace;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)isProxy;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)host;
-(long long)port;
-(NSString *)protocol;
-(NSString *)authenticationMethod;
-(NSString *)realm;
-(SecTrustRef)serverTrust;
-(NSString *)proxyType;
-(char)receivesCredentialSecurely;
-(id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)distinguishedNames;
@end

