/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, GEOMapRegion;


@protocol MSPFavoriteRegion <MSPFavorite>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) GEOMapRegion * geoMapRegion; 
@required
-(NSString *)title;
-(GEOMapRegion *)geoMapRegion;

@end

