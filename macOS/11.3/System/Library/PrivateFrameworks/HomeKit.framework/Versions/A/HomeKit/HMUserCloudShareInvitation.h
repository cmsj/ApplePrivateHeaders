/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, CKDeviceToDeviceShareInvitationToken, NSString, HMHome, HMUser;

@interface HMUserCloudShareInvitation : NSObject {

	NSURL* _shareURL;
	CKDeviceToDeviceShareInvitationToken* _shareToken;
	NSString* _containerID;
	HMHome* _home;
	HMUser* _user;
	HMUser* _fromUser;

}

@property (readonly) NSURL * shareURL;                                               //@synthesize shareURL=_shareURL - In the implementation block
@property (readonly) CKDeviceToDeviceShareInvitationToken * shareToken;              //@synthesize shareToken=_shareToken - In the implementation block
@property (readonly) NSString * containerID;                                         //@synthesize containerID=_containerID - In the implementation block
@property (readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (readonly) HMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (readonly) HMUser * fromUser;                                              //@synthesize fromUser=_fromUser - In the implementation block
-(HMUser *)user;
-(NSString *)containerID;
-(HMHome *)home;
-(NSURL *)shareURL;
-(id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6 ;
-(CKDeviceToDeviceShareInvitationToken *)shareToken;
-(HMUser *)fromUser;
@end

