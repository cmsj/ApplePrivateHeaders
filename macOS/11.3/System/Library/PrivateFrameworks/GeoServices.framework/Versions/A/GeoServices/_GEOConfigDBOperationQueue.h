/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class GEOSQLiteDB, geo_isolater, NSMutableArray, NSObject;

@interface _GEOConfigDBOperationQueue : NSObject {

	GEOSQLiteDB* _db;
	geo_isolater* _isolator;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)dealloc;
-(id)init:(id)arg1 ;
-(void)flush;
-(void)scheduleTimer;
-(void)cancelTimer;
-(void)enqueueOperation:(id)arg1 ;
@end

