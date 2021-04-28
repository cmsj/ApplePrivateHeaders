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

@class NSNumber, NSString, NSData, NSUUID;

@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSNumber* _numberValue;
	NSString* _stringValue;
	NSData* _dataValue;
	NSUUID* _selectionIdentifier;
	NSString* _selectionValue;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberValue;                    //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataValue;                        //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * selectionIdentifier;              //@synthesize selectionIdentifier=_selectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectionValue;                 //@synthesize selectionValue=_selectionValue - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)type;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(id)initDataSettingWithValue:(id)arg1 ;
-(id)initNumberSettingWithValue:(id)arg1 ;
-(id)initStringSettingWithValue:(id)arg1 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6 ;
-(NSUUID *)selectionIdentifier;
-(NSString *)selectionValue;
@end
