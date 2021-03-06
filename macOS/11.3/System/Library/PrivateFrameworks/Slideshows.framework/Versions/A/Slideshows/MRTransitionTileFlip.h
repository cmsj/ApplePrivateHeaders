/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MRTransition.h>

@class NSMutableArray;

@interface MRTransitionTileFlip : MRTransition {

	NSMutableArray* mSortedTiles;
	unsigned mNumberOfTilesX;
	unsigned mNumberOfTilesY;
	float mFlipOverlap;
	char mUseLighting;
	double _x0;
	double _y0;
	double _x;
	double _y;

}
-(void)cleanup;
-(void)unload;
-(void)setAttributes:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(double)pzrStart:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(double)pzrCancel:(id)arg1 ;
-(char)supportsDirectionOverride;
-(void)buildTiles;
@end

