/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSUUID;

@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;
	id<NSCopying><NSSecureCoding> _value;

}

@property (readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (copy,readonly) id<NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(char)supportsSecureCoding;
+(id)shortDescription;
+(id)supportedValueClasses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSUUID *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(id)shortDescription;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)descriptionWithPointer:(char)arg1 ;
@end
