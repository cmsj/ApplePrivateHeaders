/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessTransitNodeBase.h>
#import <libobjc.A.dylib/GEOMapTransitStation.h>

@class NSString;

@interface GEOMapAccessTransitStation : GEOMapAccessTransitNodeBase <GEOMapTransitStation>

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

