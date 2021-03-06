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

@class UNNotificationTopic;

@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationTopic* _topic;
	unsigned long long _supportedOptions;
	unsigned long long _enabledOptions;

}

@property (readonly) unsigned long long supportedOptions;              //@synthesize supportedOptions=_supportedOptions - In the implementation block
@property (readonly) unsigned long long enabledOptions;                //@synthesize enabledOptions=_enabledOptions - In the implementation block
@property (copy,readonly) UNNotificationTopic * topic;                 //@synthesize topic=_topic - In the implementation block
@property (readonly) unsigned long long options; 
+(char)supportsSecureCoding;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3 ;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)_description;
-(UNNotificationTopic *)topic;
-(id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6 ;
-(unsigned long long)supportedOptions;
-(unsigned long long)enabledOptions;
@end

