/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet, NSMutableArray, _NSTableRowHeightStorage, NSIndexSet, NSArray;

@interface NSTableUpdateData : NSObject {

	NSMutableIndexSet* _rowIndexesToViews;
	NSMutableArray* _views;
	NSMutableArray* _updateItemsToInsert;
	char _selectionChanged;
	NSMutableArray* _updateItemsToRemove;
	char _containsSlideDeletes;
	NSMutableIndexSet* _allRowsToDelete;
	NSMutableIndexSet* _allRowsToInsert;
	char _containsDeletes;
	char _containsInserts;
	char _containsMoves;
	char _rowHeightsChanged;
	char _containsSwipeToDelete;
	long long _updateCount;
	_NSTableRowHeightStorage* _priorRowHeightStorage;
	NSIndexSet* _priorGroupRowIndexes;
	NSArray* _priorColumnWidths;
	char _needsFrameUpdate;
	char _containsAnimations;

}

@property (nonatomic,retain) NSMutableIndexSet * rowIndexesToViews;                         //@synthesize rowIndexesToViews=_rowIndexesToViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * views;                                        //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateItemsToInsert;                          //@synthesize updateItemsToInsert=_updateItemsToInsert - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateItemsToRemove;                          //@synthesize updateItemsToRemove=_updateItemsToRemove - In the implementation block
@property (assign,nonatomic) char rowHeightsChanged;                                        //@synthesize rowHeightsChanged=_rowHeightsChanged - In the implementation block
@property (assign,nonatomic) char selectionChanged;                                         //@synthesize selectionChanged=_selectionChanged - In the implementation block
@property (assign,nonatomic) char containsAnimations;                                       //@synthesize containsAnimations=_containsAnimations - In the implementation block
@property (assign,nonatomic) char containsDeletes;                                          //@synthesize containsDeletes=_containsDeletes - In the implementation block
@property (assign,nonatomic) char containsMoves;                                            //@synthesize containsMoves=_containsMoves - In the implementation block
@property (assign,nonatomic) char containsInserts;                                          //@synthesize containsInserts=_containsInserts - In the implementation block
@property (assign,nonatomic) char containsSlideDeletes;                                     //@synthesize containsSlideDeletes=_containsSlideDeletes - In the implementation block
@property (assign,nonatomic) char containsSwipeToDelete;                                    //@synthesize containsSwipeToDelete=_containsSwipeToDelete - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * allRowsToDelete;                           //@synthesize allRowsToDelete=_allRowsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * allRowsToInsert;                           //@synthesize allRowsToInsert=_allRowsToInsert - In the implementation block
@property (assign,nonatomic) char needsFrameUpdate;                                         //@synthesize needsFrameUpdate=_needsFrameUpdate - In the implementation block
@property (assign,nonatomic) long long updateCount;                                         //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) _NSTableRowHeightStorage * priorRowHeightStorage;              //@synthesize priorRowHeightStorage=_priorRowHeightStorage - In the implementation block
@property (nonatomic,copy) NSIndexSet * priorGroupRowIndexes;                               //@synthesize priorGroupRowIndexes=_priorGroupRowIndexes - In the implementation block
@property (nonatomic,retain) NSArray * priorColumnWidths;                                   //@synthesize priorColumnWidths=_priorColumnWidths - In the implementation block
-(void)dealloc;
-(char)hasChanges;
-(NSMutableArray *)views;
-(long long)updateCount;
-(_NSTableRowHeightStorage *)priorRowHeightStorage;
-(void)setPriorRowHeightStorage:(_NSTableRowHeightStorage *)arg1 ;
-(void)setPriorGroupRowIndexes:(NSIndexSet *)arg1 ;
-(NSArray *)priorColumnWidths;
-(void)setPriorColumnWidths:(NSArray *)arg1 ;
-(NSMutableIndexSet *)allRowsToDelete;
-(NSMutableIndexSet *)allRowsToInsert;
-(NSMutableIndexSet *)rowIndexesToViews;
-(NSMutableArray *)updateItemsToRemove;
-(char)containsSlideDeletes;
-(void)setNeedsFrameUpdate:(char)arg1 ;
-(char)needsFrameUpdate;
-(NSIndexSet *)priorGroupRowIndexes;
-(void)setRowHeightsChanged:(char)arg1 ;
-(char)containsAnimations;
-(NSMutableArray *)updateItemsToInsert;
-(char)selectionChanged;
-(char)rowHeightsChanged;
-(void)setUpdateCount:(long long)arg1 ;
-(void)setContainsAnimations:(char)arg1 ;
-(char)containsMoves;
-(char)containsSwipeToDelete;
-(void)setAllRowsToInsert:(NSMutableIndexSet *)arg1 ;
-(void)setUpdateItemsToInsert:(NSMutableArray *)arg1 ;
-(void)setAllRowsToDelete:(NSMutableIndexSet *)arg1 ;
-(void)setViews:(NSMutableArray *)arg1 ;
-(void)setRowIndexesToViews:(NSMutableIndexSet *)arg1 ;
-(void)setUpdateItemsToRemove:(NSMutableArray *)arg1 ;
-(void)setContainsInserts:(char)arg1 ;
-(void)setContainsSlideDeletes:(char)arg1 ;
-(void)setContainsDeletes:(char)arg1 ;
-(void)setSelectionChanged:(char)arg1 ;
-(void)setContainsMoves:(char)arg1 ;
-(void)setContainsSwipeToDelete:(char)arg1 ;
-(char)containsDeletes;
-(char)containsInserts;
@end

