/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOLocationShifterProxy.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSNumber, NSString;

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _shiftingEnabled;
	NSNumber* _shiftingFxnVersion;
	NSCache* _shiftFunctionCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSCache * memoryCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(char)isLocationShiftRequiredForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(char)isLocationShiftEnabled;
-(unsigned)locationShiftFunctionVersion;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushDiskCache;
-(NSCache *)memoryCache;
-(char)_isLocationShiftRequiredForCoordinateInProcess:(GEOCoarseLocationLatLng)arg1 ;
-(char)_isLocationShiftRequiredForCoordinateViaProxy:(GEOCoarseLocationLatLng)arg1 ;
@end
