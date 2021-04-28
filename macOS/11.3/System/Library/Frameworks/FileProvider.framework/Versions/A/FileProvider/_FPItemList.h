/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FileProvider/FileProvider-Structs.h>
@class NSMutableOrderedSet, NSMutableDictionary;

@interface _FPItemList : NSObject {

	NSMutableOrderedSet* _orderedSet;
	NSMutableDictionary* _itemsByIDs;
	NSMutableDictionary* _formerIDs;

}
-(id)description;
-(id)init;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)allObjects;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(unsigned long long)indexOfItemID:(id)arg1 ;
-(void)removeObjectWithID:(id)arg1 ;
-(id)formerIDs;
-(char)isObsoleteID:(id)arg1 ;
@end
