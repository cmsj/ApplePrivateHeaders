/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/Versions/A/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary;

@interface WPAdvertisingRequest : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _clientType;
	char _connectable;
	char _isRanging;
	char _stopOnAdvertisingAddressChange;
	char _holdVoucher;
	NSData* _advertisingData;
	long long _advertisingRate;
	long long _priorityValue;
	double _updateTime;
	NSDictionary* _advertisingOptions;

}

@property (assign,nonatomic) unsigned char clientType;               //@synthesize clientType=_clientType - In the implementation block
@property (assign) long long priorityValue;                          //@synthesize priorityValue=_priorityValue - In the implementation block
@property (nonatomic,retain) NSData * advertisingData;               //@synthesize advertisingData=_advertisingData - In the implementation block
@property (assign) long long advertisingRate;                        //@synthesize advertisingRate=_advertisingRate - In the implementation block
@property (assign) double updateTime;                                //@synthesize updateTime=_updateTime - In the implementation block
@property (assign) char connectable;                                 //@synthesize connectable=_connectable - In the implementation block
@property (retain) NSDictionary * advertisingOptions;                //@synthesize advertisingOptions=_advertisingOptions - In the implementation block
@property (assign) char isRanging;                                   //@synthesize isRanging=_isRanging - In the implementation block
@property (assign) char stopOnAdvertisingAddressChange;              //@synthesize stopOnAdvertisingAddressChange=_stopOnAdvertisingAddressChange - In the implementation block
@property (assign) char holdVoucher;                                 //@synthesize holdVoucher=_holdVoucher - In the implementation block
+(char)supportsSecureCoding;
+(id)requestForClientType:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)clientType;
-(void)setUpdateTime:(double)arg1 ;
-(double)updateTime;
-(void)setClientType:(unsigned char)arg1 ;
-(void)setAdvertisingRate:(long long)arg1 ;
-(void)setAdvertisingData:(NSData *)arg1 ;
-(NSData *)advertisingData;
-(long long)advertisingRate;
-(long long)priorityValue;
-(void)setPriorityValue:(long long)arg1 ;
-(char)connectable;
-(void)setConnectable:(char)arg1 ;
-(NSDictionary *)advertisingOptions;
-(void)setAdvertisingOptions:(NSDictionary *)arg1 ;
-(char)stopOnAdvertisingAddressChange;
-(void)setStopOnAdvertisingAddressChange:(char)arg1 ;
-(char)holdVoucher;
-(void)setHoldVoucher:(char)arg1 ;
-(void)changePriorityValue:(long long)arg1 ;
-(char)isRanging;
-(void)setIsRanging:(char)arg1 ;
@end

