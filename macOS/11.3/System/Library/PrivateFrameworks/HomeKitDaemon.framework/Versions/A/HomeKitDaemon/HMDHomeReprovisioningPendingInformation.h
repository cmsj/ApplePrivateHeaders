/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, HMDAccessoryNetworkCredential;

@interface HMDHomeReprovisioningPendingInformation : NSObject {

	NSUUID* _messageIdentifier;
	HMDAccessoryNetworkCredential* _networkCredential;

}

@property (readonly) NSUUID * messageIdentifier;                                     //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (readonly) HMDAccessoryNetworkCredential * networkCredential;              //@synthesize networkCredential=_networkCredential - In the implementation block
-(NSUUID *)messageIdentifier;
-(HMDAccessoryNetworkCredential *)networkCredential;
-(id)initWithMessageUUID:(id)arg1 networkCredential:(id)arg2 ;
@end
