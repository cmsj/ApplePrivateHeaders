/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject {

	GEOPDTip* _geoTip;

}

@property (nonatomic,retain) GEOPDTip * geoTip;                          //@synthesize geoTip=_geoTip - In the implementation block
@property (nonatomic,readonly) char hasTipTime; 
@property (nonatomic,readonly) double tipTime; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedSnippet; 
@property (nonatomic,readonly) NSString * bestImageURL; 
@property (nonatomic,readonly) char hasTipId; 
@property (nonatomic,readonly) NSString * tipId; 
-(NSString *)name;
-(GEOPDTip *)geoTip;
-(char)hasTipTime;
-(double)tipTime;
-(char)hasTipId;
-(NSString *)tipId;
-(id)initWithGEOPDTip:(id)arg1 ;
-(NSString *)localizedSnippet;
-(NSString *)bestImageURL;
-(void)setGeoTip:(GEOPDTip *)arg1 ;
@end
