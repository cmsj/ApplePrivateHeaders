/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface WFAttribution : NSObject

@property (readonly) NSString * sourceName; 
@property (readonly) NSString * localizedSourceAttribution; 
@property (readonly) NSURL * sourceAttributionURL; 
+(id)sharedAttribution;
+(id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)weatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
-(NSString *)sourceName;
-(id)sourceAttributionImageForStyle:(unsigned long long)arg1 ;
-(NSURL *)sourceAttributionURL;
-(NSString *)localizedSourceAttribution;
@end
