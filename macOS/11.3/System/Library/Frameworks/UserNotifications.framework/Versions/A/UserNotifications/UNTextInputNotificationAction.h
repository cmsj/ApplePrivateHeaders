/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/Versions/A/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationAction.h>

@class NSString;

@interface UNTextInputNotificationAction : UNNotificationAction

@property (copy,readonly) NSString * textInputButtonTitle; 
@property (copy,readonly) NSString * textInputPlaceholder; 
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
@end
