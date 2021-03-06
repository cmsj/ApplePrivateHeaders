/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/Versions/A/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationContent, UNNotificationTrigger, NSString;

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationContent* _content;
	UNNotificationTrigger* _trigger;
	unsigned long long _destinations;
	NSString* _identifier;

}

@property (assign) unsigned long long destinations;                     //@synthesize destinations=_destinations - In the implementation block
@property (copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) UNNotificationContent * content;              //@synthesize content=_content - In the implementation block
@property (copy,readonly) UNNotificationTrigger * trigger;              //@synthesize trigger=_trigger - In the implementation block
+(char)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 ;
+(id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4 ;
+(id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(UNNotificationContent *)content;
-(UNNotificationTrigger *)trigger;
-(id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4 ;
-(unsigned long long)destinations;
-(void)setDestinations:(unsigned long long)arg1 ;
@end

