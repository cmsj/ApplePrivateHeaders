/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/Versions/A/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCSerializable.h>

@class NSArray, NSString;

@interface RCDeviceInfo : NSObject <RCSerializable> {

	NSArray* _preferredLanguages;
	NSString* _deviceType;
	long long _utcOffset;
	long long _dstOffset;
	NSString* _appVersion;
	NSString* _osVersion;
	NSString* _countryCode;

}

@property (nonatomic,copy,readonly) NSArray * preferredLanguages;              //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long utcOffset;                            //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) long long dstOffset;                            //@synthesize dstOffset=_dstOffset - In the implementation block
@property (nonatomic,copy,readonly) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * osVersion;                      //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDeviceInfoWithAppVersion:(id)arg1 ;
+(id)defaultDeviceInfo;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSArray *)preferredLanguages;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(NSString *)deviceType;
-(NSString *)osVersion;
-(NSString *)appVersion;
-(id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 countryCode:(id)arg7 ;
-(long long)utcOffset;
-(long long)dstOffset;
-(id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 ;
@end

