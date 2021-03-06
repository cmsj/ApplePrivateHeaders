/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface _NSCollectionViewMutableIndexPathSet : NSMutableSet {

	id _privateData;
	unsigned long long _mutationCounter;

}
+(char)supportsSecureCoding;
+(id)setWithCollectionViewIndexPaths:(id)arg1 ;
+(id)setWithCollectionViewIndexPath:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS139*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)enumerateIndexPathsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)indexPathLessThan:(id)arg1 ;
-(id)indexPathGreaterThan:(id)arg1 ;
-(void)addItemIndexes:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)enumerateIndexSetsBySectionWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)itemIndexesInSection:(unsigned long long)arg1 ;
-(char)containsIndexPath:(id)arg1 ;
-(id)_itemIndexSetsBySectionCreatingIfNecessary;
-(char)containsItemIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2 ;
-(id)sectionIndexes;
-(void)enumerateIndexRangesBySectionWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allIndexPaths;
-(char)containsItemIndexes:(id)arg1 inSection:(unsigned long long)arg2 ;
@end

