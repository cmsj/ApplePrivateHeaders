/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface NeighborGraph : NSObject {

	NSArray* _bssids;
	NSMutableArray* _graph;

}

@property (nonatomic,retain) NSArray * bssids;                    //@synthesize bssids=_bssids - In the implementation block
@property (nonatomic,retain) NSMutableArray * graph;              //@synthesize graph=_graph - In the implementation block
-(NSMutableArray *)graph;
-(void)setGraph:(NSMutableArray *)arg1 ;
-(NSArray *)bssids;
-(char)doesPathExist:(id)arg1 target:(id)arg2 ;
-(id)initWithBssidArray:(id)arg1 ;
-(void)setNeighborsForBssid:(id)arg1 neighbors:(id)arg2 ;
-(unsigned long long)graphDensity;
-(void)setBssids:(NSArray *)arg1 ;
@end

