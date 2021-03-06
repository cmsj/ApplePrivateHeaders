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

@class NSString;

@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {

	NSString* _applicationIdentifier;
	NSString* _name;
	NSString* _path;

}

@property (copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
+(char)supportsSecureCoding;
+(id)iconAtPath:(id)arg1 ;
+(id)iconNamed:(id)arg1 ;
+(id)iconForApplicationIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(NSString *)applicationIdentifier;
-(id)_initWithName:(id)arg1 path:(id)arg2 applicationIdentifier:(id)arg3 ;
@end

