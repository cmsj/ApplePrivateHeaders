/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetContainerListChangeObserver.h>
#import <libobjc.A.dylib/PLAlbumContainer.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {

	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;

}

@property (assign,nonatomic) int filter;                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)dealloc;
-(char)isEmpty;
-(id)identifier;
-(int)filter;
-(void)setFilter:(int)arg1 ;
-(NSString *)_typeDescription;
-(id)containers;
-(id)managedObjectContext;
-(char)isFolder;
-(id)photoLibrary;
-(id)albums;
-(unsigned long long)albumsCount;
-(NSString *)_prettyDescription;
-(short)albumListType;
-(unsigned long long)containersCount;
-(char)canEditContainers;
-(id)containersRelationshipName;
-(char)hasAtLeastOneAlbum;
-(char)canEditAlbums;
-(id)albumsSortingComparator;
-(unsigned long long)unreadAlbumsCount;
-(char)albumHasFixedOrder:(id)arg1 ;
-(void)setNeedsReordering;
-(char)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_invalidateAllAlbums;
@end
