/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString, NSLocale, NSURL;

@interface WFURLComponents : NSObject <NSSecureCoding, NSCopying> {

	char _showHourlyWeatherOnly;
	char _isLocalWeatherCity;
	unsigned long long _destination;
	CLLocation* _location;
	NSString* _locationName;
	unsigned long long _cityIndex;
	NSLocale* _locale;
	NSString* _platform;

}

@property (assign) char isLocalWeatherCity;                     //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (assign) unsigned long long cityIndex;                //@synthesize cityIndex=_cityIndex - In the implementation block
@property (retain) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (retain) NSString * platform;                         //@synthesize platform=_platform - In the implementation block
@property (assign) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
@property (copy) CLLocation * location;                         //@synthesize location=_location - In the implementation block
@property (copy) NSString * locationName;                       //@synthesize locationName=_locationName - In the implementation block
@property (assign) char showHourlyWeatherOnly;                  //@synthesize showHourlyWeatherOnly=_showHourlyWeatherOnly - In the implementation block
@property (copy,readonly) NSURL * URL; 
+(char)supportsSecureCoding;
+(id)componentsForURL:(id)arg1 ;
+(void)locationForURLComponents:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)locationForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)componentsForLocation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSURL *)URL;
-(NSString *)platform;
-(CLLocation *)location;
-(char)isEqualToComponents:(id)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(unsigned long long)destination;
-(void)setDestination:(unsigned long long)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)locationName;
-(void)setLocationName:(NSString *)arg1 ;
-(unsigned long long)cityIndex;
-(void)setShowHourlyWeatherOnly:(char)arg1 ;
-(void)setIsLocalWeatherCity:(char)arg1 ;
-(void)setCityIndex:(unsigned long long)arg1 ;
-(char)showHourlyWeatherOnly;
-(char)isLocalWeatherCity;
-(char)_canBuildURLWithProvidedComponents;
@end

