/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class EWSNotificationType;

@interface EWSGetEventsResponseMessageType : EWSResponseMessageType {

	EWSNotificationType* _Notification;

}

@property (nonatomic,retain) EWSNotificationType * Notification;              //@synthesize Notification=_Notification - In the implementation block
+(id)definition;
-(void)setNotification:(EWSNotificationType *)arg1 ;
-(EWSNotificationType *)Notification;
@end

