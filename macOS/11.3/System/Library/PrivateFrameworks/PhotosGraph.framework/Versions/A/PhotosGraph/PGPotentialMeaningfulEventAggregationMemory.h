/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSString, NSArray, NSSet;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory {

	NSMutableSet* _meaningfulEvents;
	NSMutableSet* _mutableMomentNodes;
	unsigned long long _meaning;
	NSString* _key;
	NSArray* _relevantAssetLocalIdentifiers;

}

@property (readonly) unsigned long long meaning;                                   //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,retain) NSSet * meaningfulEvents;                             //@synthesize meaningfulEvents=_meaningfulEvents - In the implementation block
@property (nonatomic,retain) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * relevantAssetLocalIdentifiers;              //@synthesize relevantAssetLocalIdentifiers=_relevantAssetLocalIdentifiers - In the implementation block
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(double)score;
-(id)peopleUUIDs;
-(unsigned long long)meaning;
-(NSSet *)meaningfulEvents;
-(id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 ;
-(void)addMeaningfulEvent:(id)arg1 controller:(id)arg2 ;
-(void)setMeaningfulEvents:(NSSet *)arg1 ;
-(NSArray *)relevantAssetLocalIdentifiers;
-(void)setRelevantAssetLocalIdentifiers:(NSArray *)arg1 ;
@end
