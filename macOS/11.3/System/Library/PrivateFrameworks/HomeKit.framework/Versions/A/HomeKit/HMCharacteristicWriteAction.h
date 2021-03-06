/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMCharacteristic, NSUUID, NSString;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge> {

	HMCharacteristic* _characteristic;
	id _targetValue;

}

@property (nonatomic,retain) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                   //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithUUID:(id)arg1 ;
-(id)targetValue;
-(HMCharacteristic *)characteristic;
-(char)_handleUpdates:(id)arg1 ;
-(id)_serializeForAdd;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(char)requiresDeviceUnlock;
-(id)encodeAsProtoBuf;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 ;
-(id)commonInitWith:(id)arg1 targetValue:(id)arg2 ;
-(void)_updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setTargetValue:(id)arg1 ;
-(id)allowedTargetValueClasses;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 uuid:(id)arg3 ;
-(char)isKindOfAllowedTargetValueClass:(id)arg1 ;
-(void)updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithProtoBuf:(id)arg1 home:(id)arg2 ;
@end

