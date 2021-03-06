/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitSystemAppServices.framework/Versions/A/UIKitSystemAppServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationResponse;

@interface USSUserNotificationResponseRequest : NSObject <NSSecureCoding> {

	UNNotificationResponse* _notificationResponse;

}

@property (nonatomic,retain) UNNotificationResponse * notificationResponse;              //@synthesize notificationResponse=_notificationResponse - In the implementation block
+(char)supportsSecureCoding;
+(id)requestForNotificationResponse:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UNNotificationResponse *)notificationResponse;
-(id)initWithNotificationResponse:(id)arg1 ;
-(void)setNotificationResponse:(UNNotificationResponse *)arg1 ;
@end

