/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAccessControl.h>

@class HMUserPresenceAuthorization, HMUserPresenceCompute, HMUserCameraAccess;

@interface HMHomeAccessControl : HMAccessControl {

	char _owner;
	char _administrator;
	char _remoteAccessAllowed;
	char _announceAccessAllowed;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;
	HMUserCameraAccess* _camerasAccess;

}

@property (getter=isOwner) char owner;                                                      //@synthesize owner=_owner - In the implementation block
@property (assign,getter=isAdministrator,nonatomic) char administrator;                     //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed) char remoteAccessAllowed;                          //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,retain) HMUserPresenceAuthorization * presenceAuthStatus;              //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,retain) HMUserPresenceCompute * presenceComputeStatus;                 //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
@property (nonatomic,retain) HMUserCameraAccess * camerasAccess;                            //@synthesize camerasAccess=_camerasAccess - In the implementation block
@property (getter=isAnnounceAccessAllowed) char announceAccessAllowed;                      //@synthesize announceAccessAllowed=_announceAccessAllowed - In the implementation block
-(char)isEqual:(id)arg1 ;
-(void)setOwner:(char)arg1 ;
-(char)isOwner;
-(char)isAdministrator;
-(void)setAdministrator:(char)arg1 ;
-(char)isRemoteAccessAllowed;
-(unsigned long long)presenceAuthorizationStatus;
-(unsigned long long)presenceComputationStatus;
-(HMUserCameraAccess *)camerasAccess;
-(char)isAnnounceAccessAllowed;
-(void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithUser:(id)arg1 owner:(char)arg2 administratorPrivilege:(char)arg3 remoteAccess:(char)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 announceAccess:(char)arg7 camerasAccess:(id)arg8 ;
-(void)setRemoteAccessAllowed:(char)arg1 ;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(void)setPresenceComputeStatus:(HMUserPresenceCompute *)arg1 ;
-(void)setCamerasAccess:(HMUserCameraAccess *)arg1 ;
-(unsigned long long)camerasAccessLevel;
-(void)setAnnounceAccessAllowed:(char)arg1 ;
-(void)updateAdministratorAccess:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRemoteAccess:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateCamerasAccessLevel:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAnnounceAccess:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

