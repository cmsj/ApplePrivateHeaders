/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSTables/TSTCompatibilityVersionProviding.h>

@class NSPointerArray, NSIndexSet;

@interface TSTTableTile : TSPObject <TSTCompatibilityVersionProviding> {

	unsigned char _storageVersion;
	char _lastSavedInBNC;
	char _shouldUseWideRows;
	unsigned long long _pruningCount;
	NSPointerArray* _rowInfos;

}

@property (nonatomic,retain) NSPointerArray * rowInfos;                                       //@synthesize rowInfos=_rowInfos - In the implementation block
@property (nonatomic,readonly) unsigned short maxColumn; 
@property (nonatomic,readonly) unsigned maxRow; 
@property (nonatomic,readonly) unsigned numRows; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) NSIndexSet * populatedRows; 
@property (nonatomic,readonly) char shouldUseWideRows; 
@property (assign,nonatomic) char lastSavedInBNC;                                             //@synthesize lastSavedInBNC=_lastSavedInBNC - In the implementation block
@property (nonatomic,readonly) unsigned long long archivingCompatibilityVersion; 
-(id)description;
-(char)isEmpty;
-(id)initWithContext:(id)arg1 ;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(unsigned)numRows;
-(NSIndexSet *)populatedRows;
-(id)packageLocator;
-(void)willModify;
-(id)initWithRows:(id)arg1 context:(id)arg2 ;
-(unsigned short)maxColumn;
-(unsigned)maxRow;
-(NSPointerArray *)rowInfos;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setShouldUseWideRows:(char)arg1 ;
-(char)shouldUseWideRows;
-(unsigned long long)archivingCompatibilityVersion;
-(void)didApplyConcurrentCellMap:(id)arg1 ;
-(void)enumerateRowsAndIndexesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithRows:(id)arg1 shouldUseWideRows:(char)arg2 context:(id)arg3 ;
-(void)p_pruneRowCount;
-(id)rowInfoForTileRowIndex:(unsigned)arg1 ;
-(void)_setRowInfo:(id)arg1 atTileRowIndex:(unsigned)arg2 ;
-(id)findOrAddRowInfoAtTileRowIndex:(unsigned)arg1 ;
-(void)_removeRowInfo:(id)arg1 atTileRowIndex:(unsigned)arg2 ;
-(void)pruneEmptyRows;
-(void)_removeRowsAtTileRowIndex:(unsigned)arg1 numberOfRows:(unsigned)arg2 shiftingContent:(char)arg3 ;
-(id)yankRowsAtTileRowIndex:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)shiftUpAtTileRowIndex:(unsigned)arg1 count:(unsigned)arg2 ;
-(char)lastSavedInBNC;
-(id)rowInfoAtOrAfterTileRowIndex:(unsigned)arg1 outTileRowIndex:(out unsigned*)arg2 ;
-(TSTCellStorage*)cellStorageRefAtColumnIndex:(unsigned short)arg1 tileRowIndex:(unsigned)arg2 ;
-(TSTCellStorage*)preBNCCellStorageRefAtColumnIndex:(unsigned short)arg1 tileRowIndex:(unsigned)arg2 ;
-(long long)setCell:(id)arg1 atColumnIndex:(unsigned short)arg2 tileRowIndex:(unsigned)arg3 formatKeys:(SCD_Struct_TS37*)arg4 ;
-(int)insertColumnsAtColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned)arg2 ;
-(id)removeColumnsAtColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned)arg2 ;
-(void)moveColumnsAtColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned)arg2 toDestColumnIndex:(unsigned short)arg3 ;
-(void)insertRowsAtTileRowIndex:(unsigned)arg1 numberOfRows:(unsigned)arg2 ;
-(void)clearRowsAtTileRowIndex:(unsigned)arg1 numberOfRows:(unsigned)arg2 ;
-(id)shiftUpAndYankBy:(unsigned)arg1 ;
-(id)yankRowInfoAtTileRowIndex:(unsigned)arg1 ;
-(id)yankRowsAtTileRowIndex:(unsigned)arg1 ;
-(void)spliceRowInfo:(id)arg1 atTileRowIndex:(unsigned)arg2 overwrite:(char)arg3 ;
-(void)spliceRows:(id)arg1 atTileRowIndex:(unsigned)arg2 ;
-(void)swapRowAtTileRowIndex:(unsigned)arg1 withRowAtTileRowIndex:(unsigned)arg2 ;
-(void)widenAllRowsForUpgrade;
-(void)assertListRows;
-(void)setLastSavedInBNC:(char)arg1 ;
-(void)setRowInfos:(NSPointerArray *)arg1 ;
@end

