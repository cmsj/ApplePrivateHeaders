/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocation, GEOAddress, GEOMapRegion, GEOLatLng, NSString;

@interface GEOMapItemBuilder : NSObject {

	SCD_Struct_GE123 _has;
	GEOLocation* _location;
	int _referenceFrame;
	GEOAddress* _address;
	GEOMapRegion* _mapRegion;
	GEOLatLng* _latlng;
	NSString* _name;

}

@property (nonatomic,retain) GEOLocation * location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int referenceFrame;                    //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,retain) GEOAddress * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) GEOMapRegion * mapRegion;              //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) GEOLatLng * latlng;                    //@synthesize latlng=_latlng - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
+(id)buildWithSetterBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(GEOLocation *)location;
-(GEOAddress *)address;
-(void)setAddress:(GEOAddress *)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(id)build;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(GEOLatLng *)latlng;
@end
