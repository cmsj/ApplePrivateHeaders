/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/Versions/A/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding> {

	long long _alertType;
	NSString* _alertTopic;

}

@property (nonatomic,readonly) long long alertType;                     //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertTopic;              //@synthesize alertTopic=_alertTopic - In the implementation block
+(char)supportsSecureCoding;
+(id)soundWithAlertType:(long long)arg1 alertTopic:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alertType;
-(NSString *)alertTopic;
-(id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 ;
-(char)isEqualToSound:(id)arg1 ;
@end

