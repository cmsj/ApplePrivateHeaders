/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSNumber, NSData;

@interface HMDAccessoryNetworkCredential : NSObject {

	NSUUID* _networkRouterUUID;
	NSNumber* _clientIdentifier;
	NSData* _wiFiPSK;

}

@property (readonly) NSUUID * networkRouterUUID;               //@synthesize networkRouterUUID=_networkRouterUUID - In the implementation block
@property (readonly) NSNumber * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) NSData * wiFiPSK;                         //@synthesize wiFiPSK=_wiFiPSK - In the implementation block
-(NSNumber *)clientIdentifier;
-(NSUUID *)networkRouterUUID;
-(NSData *)wiFiPSK;
-(id)initWithNetworkRouterUUID:(id)arg1 clientIdentifier:(id)arg2 wiFiPSK:(id)arg3 ;
@end
