/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying> {

	NSString* _iphone;
	NSString* _ipad;
	NSString* _ipod;
	NSString* _appletv;
	NSString* _mac;
	NSString* _watch;
	NSString* _specifiediphone;

}

@property (nonatomic,readonly) NSString * iphone;                       //@synthesize iphone=_iphone - In the implementation block
@property (nonatomic,readonly) NSString * ipad;                         //@synthesize ipad=_ipad - In the implementation block
@property (nonatomic,readonly) NSString * ipod;                         //@synthesize ipod=_ipod - In the implementation block
@property (nonatomic,readonly) NSString * appletv;                      //@synthesize appletv=_appletv - In the implementation block
@property (nonatomic,readonly) NSString * mac;                          //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) NSString * watch;                        //@synthesize watch=_watch - In the implementation block
@property (nonatomic,readonly) NSString * specifiediphone;              //@synthesize specifiediphone=_specifiediphone - In the implementation block
+(char)supportsSecureCoding;
+(id)fromDeviceVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)mac;
-(NSString *)watch;
-(id)asDictionary;
-(NSString *)ipad;
-(NSString *)iphone;
-(NSString *)ipod;
-(NSString *)appletv;
-(char)isEqualToOSVersionRequirement:(id)arg1 ;
-(long long)compare:(id)arg1 deviceClass:(id)arg2 ;
-(id)versionForDeviceClass:(id)arg1 ;
-(NSString *)specifiediphone;
@end

