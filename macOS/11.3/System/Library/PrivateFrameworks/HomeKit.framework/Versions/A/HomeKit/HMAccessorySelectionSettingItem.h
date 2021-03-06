/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, HMAccessorySelectionSetting;

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _title;
	HMAccessorySelectionSetting* _setting;

}

@property (__weak) HMAccessorySelectionSetting * setting;              //@synthesize setting=_setting - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * localizedTitle; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithTitle:(id)arg1 ;
-(NSString *)keyPath;
-(NSString *)title;
-(NSString *)localizedTitle;
-(HMAccessorySelectionSetting *)setting;
-(void)setSetting:(HMAccessorySelectionSetting *)arg1 ;
@end

