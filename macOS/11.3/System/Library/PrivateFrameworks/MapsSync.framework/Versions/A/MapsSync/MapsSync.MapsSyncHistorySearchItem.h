/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOMapRegion;

@interface MapsSync.MapsSyncHistorySearchItem : MapsSync.MapsSyncHistoryItem {

	 _geoMapRegion;
	 _language;
	 _locationDisplay;
	 _query;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOMapRegion * geoMapRegion; 
@property (readonly,nonatomic) NSString * language; 
@property (readonly,nonatomic) NSString * locationDisplay; 
@property (readonly,nonatomic) NSString * query; 
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithObject:(id)arg1 ;
-(NSString *)query;
-(NSString *)language;
-(Class)managedObjectClass;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(GEOMapRegion *)geoMapRegion;
-(NSString *)locationDisplay;
@end

