/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, WFLocation, NSString, NSURL;

@interface WFWeatherDataServiceParserMetadataV1 : NSObject {

	char _temporarilyUnavailable;
	NSDate* _readDate;
	NSDate* _expireDate;
	unsigned long long _version;
	WFLocation* _location;
	NSString* _language;
	NSString* _providerName;
	NSURL* _providerLogoURL;
	long long _dataOrigination;

}

@property (nonatomic,copy) NSDate * readDate;                          //@synthesize readDate=_readDate - In the implementation block
@property (nonatomic,copy) NSDate * expireDate;                        //@synthesize expireDate=_expireDate - In the implementation block
@property (assign,nonatomic) unsigned long long version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) WFLocation * location;                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * language;                        //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * providerName;                    //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy) NSURL * providerLogoURL;                    //@synthesize providerLogoURL=_providerLogoURL - In the implementation block
@property (assign,nonatomic) long long dataOrigination;                //@synthesize dataOrigination=_dataOrigination - In the implementation block
@property (assign,nonatomic) char temporarilyUnavailable;              //@synthesize temporarilyUnavailable=_temporarilyUnavailable - In the implementation block
-(unsigned long long)version;
-(WFLocation *)location;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSDate *)expireDate;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(NSDate *)readDate;
-(char)temporarilyUnavailable;
-(void)setTemporarilyUnavailable:(char)arg1 ;
-(void)setReadDate:(NSDate *)arg1 ;
-(void)setExpireDate:(NSDate *)arg1 ;
-(NSURL *)providerLogoURL;
-(void)setProviderLogoURL:(NSURL *)arg1 ;
-(long long)dataOrigination;
-(void)setDataOrigination:(long long)arg1 ;
@end

