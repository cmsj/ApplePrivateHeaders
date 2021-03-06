/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/Versions/A/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WiFiAwareDiscoveryResult, NSString, NSData, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding> {

	WiFiAwareDiscoveryResult* _discoveryResult;
	long long _serviceType;
	NSString* _passphrase;
	NSData* _pmk;
	WiFiAwarePublishDatapathServiceSpecificInfo* _serviceSpecificInfo;

}

@property (nonatomic,readonly) WiFiAwareDiscoveryResult * discoveryResult;                                     //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (nonatomic,readonly) long long serviceType;                                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * passphrase;                                                          //@synthesize passphrase=_passphrase - In the implementation block
@property (nonatomic,readonly) NSData * pmk;                                                                   //@synthesize pmk=_pmk - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishDatapathServiceSpecificInfo * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)serviceType;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(WiFiAwarePublishDatapathServiceSpecificInfo *)serviceSpecificInfo;
-(NSString *)passphrase;
-(NSData *)pmk;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 passphrase:(id)arg3 pmk:(id)arg4 serviceSpecificInfo:(id)arg5 ;
-(char)passphraseEqual:(id)arg1 ;
-(char)pmkEqual:(id)arg1 ;
@end

