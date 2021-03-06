/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDPUserPrivacySettings;

@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest {

	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
-(long long)databaseScope;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(CKDPUserPrivacySettings *)userPrivacySettings;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
@end

