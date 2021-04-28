/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet;

@interface _UXCollectionViewSectionItemIndexes : NSObject <NSCopying> {

	NSMutableIndexSet* _itemIndexesSet;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)itemCount;
-(void)addItem:(unsigned long long)arg1 ;
-(void)removeItem:(unsigned long long)arg1 ;
-(unsigned long long)firstItem;
-(id)items;
-(unsigned long long)lastItem;
-(char)containsItem:(unsigned long long)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)addItemsInRange:(NSRange)arg1 ;
-(void)addSectionItemIndexes:(id)arg1 ;
-(void)removeItemsInRange:(NSRange)arg1 ;
-(void)removeSectionItemIndexes:(id)arg1 ;
-(void)adjustForInsertionOfItem:(unsigned long long)arg1 ;
-(void)adjustForInsertionOfItems:(id)arg1 ;
-(void)adjustForDeletionOfItem:(unsigned long long)arg1 ;
-(void)adjustForDeletionOfItems:(id)arg1 ;
-(id)itemIndexPathsForSection:(unsigned long long)arg1 ;
@end
