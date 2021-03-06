/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/Versions/A/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface ADInstallAttributionData : NSObject {

	NSString* _version;
	NSNumber* _sourceAppAdamID;
	NSString* _adNetworkID;
	NSNumber* _campaignID;
	NSString* _uuid;
	NSNumber* _adamID;
	NSNumber* _timestamp;
	NSString* _signature;

}

@property (nonatomic,copy,readonly) NSString * version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sourceAppAdamID;              //@synthesize sourceAppAdamID=_sourceAppAdamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * adNetworkID;                  //@synthesize adNetworkID=_adNetworkID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * campaignID;                   //@synthesize campaignID=_campaignID - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * adamID;                       //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                    //@synthesize signature=_signature - In the implementation block
-(NSString *)uuid;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(NSString *)signature;
-(NSNumber *)timestamp;
-(NSNumber *)adamID;
-(id)initWithDict:(id)arg1 ;
-(NSNumber *)campaignID;
-(void)recordStoreKitAdTap:(/*^block*/id)arg1 ;
-(NSNumber *)sourceAppAdamID;
-(NSString *)adNetworkID;
@end

