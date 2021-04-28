/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/Versions/A/ShazamInsights
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SHAffinityGroup : NSObject {

	long long _clusterType;
	long long _cohesionLevel;
	NSMutableArray* _mutableMediaItems;

}

@property (nonatomic,retain) NSMutableArray * mutableMediaItems;              //@synthesize mutableMediaItems=_mutableMediaItems - In the implementation block
@property (readonly) long long clusterType;                                   //@synthesize clusterType=_clusterType - In the implementation block
@property (readonly) long long cohesionLevel;                                 //@synthesize cohesionLevel=_cohesionLevel - In the implementation block
@property (readonly) NSArray * mediaItems; 
-(id)init;
-(long long)clusterType;
-(NSArray *)mediaItems;
-(id)initWithType:(long long)arg1 cohesionLevel:(long long)arg2 ;
-(void)appendMediaItem:(id)arg1 ;
-(NSMutableArray *)mutableMediaItems;
-(long long)cohesionLevel;
-(void)setMutableMediaItems:(NSMutableArray *)arg1 ;
@end
