/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSObject.h>

@protocol OS_dispatch_source;
@class NSString, NEIKEv2AddressList, NSArray, NSObject;

@interface NEIKEv2Server : NSObject <NSObject> {

	unsigned _redirects;
	NSString* _serverAddress;
	NEIKEv2AddressList* _resolvedAddressList;
	NSString* _redirectedFromAddress;
	NSArray* _additionalIPv4ServerAddresses;
	NSArray* _additionalIPv6ServerAddresses;
	NSObject*<OS_dispatch_source> _redirectTimer;

}

@property (assign) unsigned redirects;                                       //@synthesize redirects=_redirects - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> redirectTimer;              //@synthesize redirectTimer=_redirectTimer - In the implementation block
@property (retain) NSString * serverAddress;                                 //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NEIKEv2AddressList * resolvedAddressList;                 //@synthesize resolvedAddressList=_resolvedAddressList - In the implementation block
@property (retain) NSString * redirectedFromAddress;                         //@synthesize redirectedFromAddress=_redirectedFromAddress - In the implementation block
@property (retain) NSArray * additionalIPv4ServerAddresses;                  //@synthesize additionalIPv4ServerAddresses=_additionalIPv4ServerAddresses - In the implementation block
@property (retain) NSArray * additionalIPv6ServerAddresses;                  //@synthesize additionalIPv6ServerAddresses=_additionalIPv6ServerAddresses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getViableServerAddressForPath:(id)arg1 ;
-(void)setServerResolvedAddress:(id)arg1 path:(id)arg2 ;
-(char)startRedirectTimer;
-(char)checkRedirectCount;
-(void)setRedirectedFromAddress:(NSString *)arg1 ;
-(void)setResolvedAddressList:(NEIKEv2AddressList *)arg1 ;
-(void)setAdditionalIPv4ServerAddresses:(NSArray *)arg1 ;
-(void)setAdditionalIPv6ServerAddresses:(NSArray *)arg1 ;
-(id)getNextViableServerAddressForPath:(id)arg1 ;
-(NEIKEv2AddressList *)resolvedAddressList;
-(void)stopRedirectTimer;
-(NSString *)redirectedFromAddress;
-(void)setRedirects:(unsigned)arg1 ;
-(NSArray *)additionalIPv4ServerAddresses;
-(NSArray *)additionalIPv6ServerAddresses;
-(unsigned)redirects;
-(NSObject*<OS_dispatch_source>)redirectTimer;
-(void)setRedirectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
-(NSString *)serverAddress;
-(void)setServerAddress:(NSString *)arg1 ;
@end
