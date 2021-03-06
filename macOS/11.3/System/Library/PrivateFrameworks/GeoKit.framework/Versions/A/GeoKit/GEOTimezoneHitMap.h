/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoKit/GeoKit-Structs.h>
@class NSData, NSArray, NSDictionary;

@interface GEOTimezoneHitMap : NSObject {

	char isLoaded;
	NSData* hitMap;
	unsigned width;
	unsigned height;
	NSArray* areas;
	NSDictionary* areasToTimeZones;

}
+(id)sharedTimezoneHitMap;
+(id)fileNameForTimeZone:(id)arg1 ;
-(void)dealloc;
-(char)loadHitMapData;
-(char)loadMetaDictionary;
-(char)loadIfNeeded;
-(id)_areaLabelAtLongitude:(double)arg1 latitude:(double)arg2 ;
-(id)timeZoneNamesAtLongitude:(double)arg1 latitude:(double)arg2 ;
-(CGImageRef)copyTimeZoneForAreaWithName:(id)arg1 ;
-(id)fileNameAtLongitude:(double)arg1 latitude:(double)arg2 ;
@end

