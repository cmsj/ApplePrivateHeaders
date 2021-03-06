/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNotificationDropboxData.h>
#import <libobjc.A.dylib/FCMutableNotificationData.h>
@class NSString;


@protocol FCMutableNotificationData <FCNotificationDropboxData>
@property (nonatomic,copy) NSString * baseURLString; 
@property (nonatomic,copy) NSString * notificationUserID; 
@property (nonatomic,copy) NSString * deviceToken; 
@property (nonatomic,copy) NSString * storefrontID; 
@required
-(NSString *)storefrontID;
-(NSString *)deviceToken;
-(void)setDeviceToken:(id)arg1;
-(void)setStorefrontID:(id)arg1;
-(NSString *)notificationUserID;
-(void)setBaseURLString:(id)arg1;
-(void)setNotificationUserID:(id)arg1;
-(NSString *)baseURLString;

@end


@class NSString, NSMutableDictionary;

@interface FCMutableNotificationData : FCNotificationDropboxData <FCMutableNotificationData>

@property (nonatomic,readonly) NSMutableDictionary * dictionary; 
@property (nonatomic,copy) NSString * baseURLString; 
@property (nonatomic,copy) NSString * notificationUserID; 
@property (nonatomic,copy) NSString * deviceToken; 
@property (nonatomic,copy) NSString * storefrontID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(void)setBaseURLString:(NSString *)arg1 ;
-(void)setNotificationUserID:(NSString *)arg1 ;
@end

