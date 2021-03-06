/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOMapItemStorage, NSUUID, NSNumber;

@interface MapsSync.MapsSyncHistoryPlaceItem : MapsSync.MapsSyncHistoryItem {

	 _mapItemStorage;
	??? _supersededSearchId;
	 _latitude;
	 _longitude;
	 _muid;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (readonly,nonatomic) NSUUID * supersededSearchId; 
@property (readonly,nonatomic) NSNumber * latitude; 
@property (readonly,nonatomic) NSNumber * longitude; 
@property (readonly,nonatomic) NSNumber * muid; 
+(void)fetchNearbyPlacesWithLatitude:(double)arg1 longitude:(double)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithObject:(id)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSNumber *)muid;
-(GEOMapItemStorage *)mapItemStorage;
-(Class)managedObjectClass;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(NSUUID *)supersededSearchId;
@end

