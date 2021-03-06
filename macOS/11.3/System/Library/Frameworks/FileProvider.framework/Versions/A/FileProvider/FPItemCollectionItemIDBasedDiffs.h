/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPItemCollectionDiffs.h>

@class NSMutableArray, NSMutableDictionary;

@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs {

	NSMutableArray* _deletedItemIDs;
	NSMutableArray* _updatedItems;
	NSMutableDictionary* _replacedItemsByFormerID;

}

@property (retain) NSMutableArray * deletedItemIDs;                            //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (retain) NSMutableArray * updatedItems;                              //@synthesize updatedItems=_updatedItems - In the implementation block
@property (retain) NSMutableDictionary * replacedItemsByFormerID;              //@synthesize replacedItemsByFormerID=_replacedItemsByFormerID - In the implementation block
-(NSMutableArray *)updatedItems;
-(void)setUpdatedItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSMutableArray *)arg1 ;
-(char)containsChanges;
-(NSMutableDictionary *)replacedItemsByFormerID;
-(void)setReplacedItemsByFormerID:(NSMutableDictionary *)arg1 ;
@end

