/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet;

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory {

	char _isBirthday;
	NSSet* _personNodes;
	double _meanContentScore;
	double _neighborScore;

}

@property (retain) NSSet * personNodes;                  //@synthesize personNodes=_personNodes - In the implementation block
@property (assign) double meanContentScore;              //@synthesize meanContentScore=_meanContentScore - In the implementation block
@property (assign) double neighborScore;                 //@synthesize neighborScore=_neighborScore - In the implementation block
@property (assign) char isBirthday;                      //@synthesize isBirthday=_isBirthday - In the implementation block
-(id)description;
-(char)isBirthday;
-(void)setIsBirthday:(char)arg1 ;
-(double)neighborScore;
-(NSSet *)personNodes;
-(double)meanContentScore;
-(void)setMeanContentScore:(double)arg1 ;
-(void)setNeighborScore:(double)arg1 ;
-(void)setPersonNodes:(NSSet *)arg1 ;
-(id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(unsigned long long)arg3 ;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4 ;
-(void)computeRemainingScoresWithController:(id)arg1 previousPotentialMemory:(id)arg2 ;
@end

