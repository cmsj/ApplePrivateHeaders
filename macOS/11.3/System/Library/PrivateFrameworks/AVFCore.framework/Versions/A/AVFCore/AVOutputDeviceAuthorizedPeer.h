/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceAuthorizedPeerInternal, NSString, NSData;

@interface AVOutputDeviceAuthorizedPeer : NSObject {

	AVOutputDeviceAuthorizedPeerInternal* _ivars;

}

@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,readonly) NSData * publicKey; 
@property (nonatomic,readonly) char hasAdministratorPrivileges; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSData *)publicKey;
-(NSString *)peerID;
-(id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(char)arg3 ;
-(char)hasAdministratorPrivileges;
@end
