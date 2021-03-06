/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	long long _domain;
	NSNumber* _instance;

}

@property (assign,nonatomic) long long domain;                     //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSNumber * instance;                  //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(char)supportsSecureCoding;
+(id)telephonyDescriptorWithInstance:(id)arg1 ;
+(id)descriptorWithSubscriptionContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSNumber *)instance;
-(void)setDomain:(long long)arg1 ;
-(void)setInstance:(NSNumber *)arg1 ;
-(id)initWithDomain:(long long)arg1 instance:(id)arg2 ;
@end

