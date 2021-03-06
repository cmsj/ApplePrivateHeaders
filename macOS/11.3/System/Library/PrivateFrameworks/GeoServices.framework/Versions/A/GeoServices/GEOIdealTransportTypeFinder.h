/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOIdealTransportTypeFinder : NSObject
+(id)_transportTypePreferenceAsString:(long long)arg1 ;
+(long long)idealTransportTypeForOrigin:(GEOCoarseLocationLatLng)arg1 destination:(GEOCoarseLocationLatLng)arg2 mapType:(int)arg3 ;
+(long long)idealTransportTypeForMapType:(int)arg1 ;
+(long long)idealTransportType;
@end

