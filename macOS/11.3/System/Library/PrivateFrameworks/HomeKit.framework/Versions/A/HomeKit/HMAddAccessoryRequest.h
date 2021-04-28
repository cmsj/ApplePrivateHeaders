/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHome, NSString, HMAccessoryCategory, NSUUID, HMSetupAccessoryDescription;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding> {

	char _requiresSetupPayloadURL;
	char _requiresOwnershipToken;
	HMHome* _home;
	NSString* _accessoryName;
	HMAccessoryCategory* _accessoryCategory;
	NSUUID* _requestIdentifier;
	HMSetupAccessoryDescription* _accessoryDescription;

}

@property (nonatomic,retain) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryDescription * accessoryDescription;              //@synthesize accessoryDescription=_accessoryDescription - In the implementation block
@property (nonatomic,readonly) NSString * accessoryName;                                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * accessoryCategory;                       //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,readonly) char requiresSetupPayloadURL;                                  //@synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL - In the implementation block
@property (nonatomic,readonly) char requiresOwnershipToken;                                   //@synthesize requiresOwnershipToken=_requiresOwnershipToken - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accessoryName;
-(HMHome *)home;
-(HMAccessoryCategory *)accessoryCategory;
-(NSUUID *)requestIdentifier;
-(void)setHome:(HMHome *)arg1 ;
-(char)requiresSetupPayloadURL;
-(id)payloadWithOwnershipToken:(id)arg1 ;
-(id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2 ;
-(id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3 ;
-(char)requiresOwnershipToken;
-(HMSetupAccessoryDescription *)accessoryDescription;
-(void)setAccessoryDescription:(HMSetupAccessoryDescription *)arg1 ;
@end
