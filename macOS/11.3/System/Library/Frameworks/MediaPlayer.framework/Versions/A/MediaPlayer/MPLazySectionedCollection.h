/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@protocol MPLazySectionedCollectionDataSource;
@class _MPLazySectionedCollectionStorage;

@interface MPLazySectionedCollection : MPSectionedCollection {

	_MPLazySectionedCollectionStorage* _storage;
	os_unfair_lock_s _mapLock;
	id<MPLazySectionedCollectionDataSource> _dataSource;

}

@property (nonatomic,retain) id<MPLazySectionedCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)firstItem;
-(id<MPLazySectionedCollectionDataSource>)dataSource;
-(void)setDataSource:(id<MPLazySectionedCollectionDataSource>)arg1 ;
-(long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)lastItem;
-(id)initWithDataSource:(id)arg1 ;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)allItems;
-(id)allSections;
-(id)lastSection;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstSection;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(char)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(id)_cachedObjectAtIndexPath:(id)arg1 ;
-(void)_updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2 ;
@end

