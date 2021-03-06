/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL;

@interface WFSevereWeatherEvent : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _areaName;
	NSString* _eventDescription;
	NSString* _source;
	NSDate* _expirationDate;
	NSURL* _URL;
	unsigned long long _importance;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * areaName;                      //@synthesize areaName=_areaName - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventDescription;              //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) unsigned long long importance;                 //@synthesize importance=_importance - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)source;
-(NSURL *)URL;
-(NSDate *)expirationDate;
-(unsigned long long)importance;
-(NSString *)areaName;
-(NSString *)eventDescription;
-(id)initWithIdentifier:(id)arg1 areaName:(id)arg2 eventDescription:(id)arg3 source:(id)arg4 expirationDate:(id)arg5 URL:(id)arg6 importance:(unsigned long long)arg7 ;
@end

