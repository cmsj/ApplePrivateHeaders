/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDate;

@interface RTVisitFeedBuffer : NSObject {

	/*^block*/id _comparator;
	double _minWaitInterval;
	NSMutableArray* _locations;
	NSDate* _lastMaturedLocationDate;

}

@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSDate * lastMaturedLocationDate;               //@synthesize lastMaturedLocationDate=_lastMaturedLocationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long numLocations; 
@property (nonatomic,readonly) double minWaitInterval;                       //@synthesize minWaitInterval=_minWaitInterval - In the implementation block
-(id)init;
-(NSMutableArray *)locations;
-(void)addLocations:(id)arg1 ;
-(id)initWithMinWaitInterval:(double)arg1 ;
-(unsigned long long)numLocations;
-(double)minWaitInterval;
-(id)maturedLocations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(NSDate *)lastMaturedLocationDate;
-(void)setLastMaturedLocationDate:(NSDate *)arg1 ;
@end

