/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString;

@interface SSRemoteNotification : NSObject {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSDictionary * notificationUserInfo; 
@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) NSNumber * targetDSID; 
@property (nonatomic,readonly) NSString * alertBodyString; 
@property (nonatomic,readonly) NSString * alertCancelString; 
@property (nonatomic,readonly) NSString * alertOKString; 
@property (nonatomic,readonly) NSString * alertTitleString; 
@property (nonatomic,readonly) id badgeValue; 
@property (nonatomic,readonly) NSString * soundFileName; 
-(id)valueForKey:(id)arg1 ;
-(id)badgeValue;
-(long long)actionType;
-(id)_valueForAlertKey:(id)arg1 ;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(NSNumber *)targetDSID;
-(NSString *)alertBodyString;
-(NSString *)alertCancelString;
-(NSString *)alertOKString;
-(NSString *)alertTitleString;
-(NSString *)soundFileName;
-(NSDictionary *)notificationUserInfo;
@end

