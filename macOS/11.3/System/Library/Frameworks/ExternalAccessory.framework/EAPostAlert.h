/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ExternalAccessory/ExternalAccessory-Structs.h>
@interface EAPostAlert : NSObject
+(id)CopyLocalizedString:(id)arg1 ;
+(void)EATearDownAccessoryNotification:(_CFUserNotification*)arg1 ;
+(void)EANotificationPostAccessoryNotification:(CFStringRef)arg1 forMsg:(CFStringRef)arg2 forDefaultButton:(CFStringRef)arg3 withAlternateButton:(CFStringRef)arg4 forNotification:(_CFUserNotification*)arg5 withCallback:(/*function pointer*/void*)arg6 andTimeout:(double)arg7 ;
@end

