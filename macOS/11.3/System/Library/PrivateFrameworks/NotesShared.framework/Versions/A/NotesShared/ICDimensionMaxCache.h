/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface ICDimensionMaxCache : NSObject {

	NSMutableDictionary* _dimensions;
	NSMutableArray* _sortedDimensions;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) NSMutableDictionary * dimensions;               //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedDimensions;              //@synthesize sortedDimensions=_sortedDimensions - In the implementation block
@property (nonatomic,readonly) id comparator;                                  //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)comparator;
-(double)max;
-(NSMutableDictionary *)dimensions;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(double)dimensionForKey:(id)arg1 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
-(NSMutableArray *)sortedDimensions;
@end
