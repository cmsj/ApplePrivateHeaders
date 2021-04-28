/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding> {

	unsigned long long _deviceNotificationMode;

}

@property (readonly) unsigned long long deviceNotificationMode;              //@synthesize deviceNotificationMode=_deviceNotificationMode - In the implementation block
+(char)supportsSecureCoding;
+(id)shortDescription;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)privateDescription;
-(id)attributeDescriptions;
-(id)initWithDeviceNotificationMode:(unsigned long long)arg1 ;
-(unsigned long long)deviceNotificationMode;
@end
