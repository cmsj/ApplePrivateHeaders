/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CLCircularRegion;

@interface PGAssetCluster : NSObject {

	NSArray* _assets;
	CLCircularRegion* _region;

}

@property (nonatomic,retain,readonly) NSArray * assets;                       //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain,readonly) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
-(NSArray *)assets;
-(CLCircularRegion *)region;
-(id)initWithAssets:(id)arg1 region:(id)arg2 ;
@end

