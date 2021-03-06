/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/Versions/A/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _displayLocation;
	NSDictionary* _thumbnailGeneratorUserInfo;

}

@property (nonatomic,readonly) unsigned long long displayLocation;                          //@synthesize displayLocation=_displayLocation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * thumbnailGeneratorUserInfo;              //@synthesize thumbnailGeneratorUserInfo=_thumbnailGeneratorUserInfo - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithOptions:(id)arg1 ;
-(unsigned long long)displayLocation;
-(NSDictionary *)thumbnailGeneratorUserInfo;
-(id)_initWithDisplayLocation:(unsigned long long)arg1 thumbnailGeneratorUserInfo:(id)arg2 ;
@end

