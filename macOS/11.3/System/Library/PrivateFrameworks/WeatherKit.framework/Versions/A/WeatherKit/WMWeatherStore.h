/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherKit.framework/Versions/A/WeatherKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherKit/WeatherKit-Structs.h>
#import <libobjc.A.dylib/WMWeatherStoreProtocol.h>

@protocol WMWeatherStoreProtocol;
@class NSXPCConnection, NSString;

@interface WMWeatherStore : NSObject <WMWeatherStoreProtocol> {

	NSXPCConnection* _connection;
	id<WMWeatherStoreProtocol> _remoteWeatherStore;

}

@property (retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (retain) id<WMWeatherStoreProtocol> remoteWeatherStore;              //@synthesize remoteWeatherStore=_remoteWeatherStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWeatherStore;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)weatherForCoordinate:(CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)almanacWeatherForCoordinate:(CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)historicalWeatherForCoordinate:(CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)forecastForCoordinate:(CLLocationCoordinate2D)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)currentDailyForecastForCoordinate:(CLLocationCoordinate2D)arg1 result:(/*^block*/id)arg2 ;
-(void)currentHourlyForecastForCoordinate:(CLLocationCoordinate2D)arg1 result:(/*^block*/id)arg2 ;
-(void)currentConditionsForCoordinate:(CLLocationCoordinate2D)arg1 result:(/*^block*/id)arg2 ;
-(id<WMWeatherStoreProtocol>)remoteWeatherStore;
-(void)setRemoteWeatherStore:(id<WMWeatherStoreProtocol>)arg1 ;
@end

