/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, GEOSQLiteDB;

@interface GEOLocationShifterPersistence : NSObject {

	NSString* _dbPath;
	GEOSQLiteDB* _db;

}
+(id)sharedPersister;
-(id)init;
-(void)tearDown;
-(char)_setup:(id)arg1 ;
-(id)initWithDBFilePath:(id)arg1 ;
-(void)storeResponse:(id)arg1 ;
-(void)findResponseForCoordinate:(GEOCoarseLocationLatLng)arg1 reduceRadius:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2 ;
-(void)removeAllEntries;
-(void)removeAllEntriesSync;
-(void)getAllEntries:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
@end
