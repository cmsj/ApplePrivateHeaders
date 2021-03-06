/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFUnfairLock, HMMediaProfile, HMMediaSystemRole, NSUUID, HMAccessory, NSString;

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {

	HMFUnfairLock* _lock;
	HMMediaProfile* _mediaProfile;
	HMMediaSystemRole* _role;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMMediaProfile * mediaProfile;              //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (nonatomic,readonly) HMMediaSystemRole * role;                          //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSUUID *)uniqueIdentifier;
-(HMMediaSystemRole *)role;
-(id)serialize;
-(void)setRole:(HMMediaSystemRole *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(HMMediaProfile *)mediaProfile;
-(id)logIdentifier;
-(void)_unconfigure;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_updateAccessoryReference:(id)arg1 ;
-(id)initWithUUID:(id)arg1 mediaProfile:(id)arg2 role:(id)arg3 ;
-(id)initWithMediaProfile:(id)arg1 role:(id)arg2 ;
@end

