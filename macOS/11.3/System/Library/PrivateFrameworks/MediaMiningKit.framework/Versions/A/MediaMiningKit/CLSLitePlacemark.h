/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLCircularRegion, CLLocation, NSString, NSArray, NSData;

@interface CLSLitePlacemark : NSObject <NSSecureCoding> {

	char _isIsland;
	CLCircularRegion* _region;
	CLLocation* _location;
	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _subLocality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _ISOcountryCode;
	NSString* _inlandWater;
	NSString* _ocean;
	NSArray* _areasOfInterest;
	NSString* _administrativeAreaCode;
	NSData* _revGeoLocationData;
	NSString* _geoServiceProvider;

}

@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;                      //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * thoroughfare;                        //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,retain) NSString * subThoroughfare;                     //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,retain) NSString * locality;                            //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * subLocality;                         //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                  //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,retain) NSString * administrativeAreaCode;              //@synthesize administrativeAreaCode=_administrativeAreaCode - In the implementation block
@property (nonatomic,retain) NSString * subAdministrativeArea;               //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,retain) NSString * ISOcountryCode;                      //@synthesize ISOcountryCode=_ISOcountryCode - In the implementation block
@property (nonatomic,retain) NSString * inlandWater;                         //@synthesize inlandWater=_inlandWater - In the implementation block
@property (nonatomic,retain) NSString * ocean;                               //@synthesize ocean=_ocean - In the implementation block
@property (nonatomic,retain) NSArray * areasOfInterest;                      //@synthesize areasOfInterest=_areasOfInterest - In the implementation block
@property (assign,nonatomic) char isIsland;                                  //@synthesize isIsland=_isIsland - In the implementation block
@property (nonatomic,retain) NSData * revGeoLocationData;                    //@synthesize revGeoLocationData=_revGeoLocationData - In the implementation block
@property (nonatomic,retain) NSString * geoServiceProvider;                  //@synthesize geoServiceProvider=_geoServiceProvider - In the implementation block
@property (nonatomic,readonly) char isOcean; 
+(char)supportsSecureCoding;
+(id)litePlacemarkFromCLPlacemark:(id)arg1 ;
+(char)_isIslandForGeoMapItem:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)location;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)administrativeAreaCode;
-(CLCircularRegion *)region;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(NSString *)subLocality;
-(NSString *)locality;
-(NSString *)subAdministrativeArea;
-(NSString *)administrativeArea;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(NSArray *)areasOfInterest;
-(char)isIsland;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(void)setAreasOfInterest:(NSArray *)arg1 ;
-(NSString *)ISOcountryCode;
-(NSString *)geoServiceProvider;
-(void)setGeoServiceProvider:(NSString *)arg1 ;
-(void)setRevGeoLocationData:(NSData *)arg1 ;
-(NSData *)revGeoLocationData;
-(void)setIsIsland:(char)arg1 ;
-(void)setISOcountryCode:(NSString *)arg1 ;
-(id)initWithCLPlacemark:(id)arg1 ;
-(id)initWithRTMapItem:(id)arg1 ;
-(char)isOcean;
-(void)_extractValuesFromGeoMapItem:(id)arg1 ;
@end

