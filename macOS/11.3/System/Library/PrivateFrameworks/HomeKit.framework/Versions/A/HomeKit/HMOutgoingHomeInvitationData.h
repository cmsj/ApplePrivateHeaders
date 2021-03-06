/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitationData.h>

@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData {

	NSString* _inviteeUserID;
	NSString* _inviteeName;
	NSUUID* _inviteeUUID;

}

@property (nonatomic,copy) NSString * inviteeName;                         //@synthesize inviteeName=_inviteeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviteeUserID;              //@synthesize inviteeUserID=_inviteeUserID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * inviteeUUID;                  //@synthesize inviteeUUID=_inviteeUUID - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)inviteeUserID;
-(NSString *)inviteeName;
-(NSUUID *)inviteeUUID;
-(id)initWithUUID:(id)arg1 inviteeUserID:(id)arg2 inviteeName:(id)arg3 invitationState:(long long)arg4 expiryDate:(id)arg5 ;
-(void)setInviteeName:(NSString *)arg1 ;
@end

