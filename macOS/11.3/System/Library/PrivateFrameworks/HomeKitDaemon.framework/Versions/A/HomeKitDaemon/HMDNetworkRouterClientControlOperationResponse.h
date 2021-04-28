/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterControlOperationStatus, HMDNetworkRouterClientConfiguration, NSString;

@interface HMDNetworkRouterClientControlOperationResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterControlOperationStatus* _status;
	HMDNetworkRouterClientConfiguration* _configuration;

}

@property (nonatomic,retain) HMDNetworkRouterControlOperationStatus * status;                  //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterClientConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(HMDNetworkRouterControlOperationStatus *)status;
-(HMDNetworkRouterClientConfiguration *)configuration;
-(void)setConfiguration:(HMDNetworkRouterClientConfiguration *)arg1 ;
-(void)setStatus:(HMDNetworkRouterControlOperationStatus *)arg1 ;
-(char)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithStatus:(id)arg1 configuration:(id)arg2 ;
@end
