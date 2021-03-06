/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageBrowserSubsetLayoutManager.h>

@class NSMutableIndexSet;

@interface IKImageBrowserGrid : IKImageBrowserSubsetLayoutManager {

	NSMutableIndexSet* _validTranslationsRows;
	NSMutableIndexSet* _validAdditionalHeightPerRows;
	int _cellsLayoutInfoLength;
	SCD_Struct_IK10* _cellsLayoutInfo;
	int _rowsCount;
	long long _indexOfDropSpacing;
	unsigned long long _nearestCellForDropSpacing;
	char _dropPastHalfwayAcrossCell;
	char _dropSpacingIsVertical;
	double _headerOffset;
	double _tailOffset;
	unsigned long long _iOSExpendedGroupIndex;

}

@property (assign) double headerOffset;              //@synthesize headerOffset=_headerOffset - In the implementation block
@property (assign) double tailOffset;                //@synthesize tailOffset=_tailOffset - In the implementation block
-(id)cellIndexesInRect:(SCD_Struct_IK11)arg1 ;
-(char)isGridBased;
-(double)tailOffset;
-(double)headerOffset;
-(void)setTailOffset:(double)arg1 ;
-(void)setHeaderOffset:(double)arg1 ;
-(char)automaticallyMinimizeRowMargin;
-(id)initWithParameters:(_IKImageBrowserLayoutParameter*)arg1 parent:(id)arg2 ;
-(CGSize)cellMargin;
-(void)computeRowsCount;
-(double)spaceOutSizeVertical:(char)arg1 ;
-(double)translationRatioAtRow:(int)arg1 ;
-(int)totalAdditionalHeightAtRow:(int)arg1 ;
-(void)checkAllocCellLayoutInfo;
-(void)validateAdditionalHeightToRow:(int)arg1 ;
-(int)additionalHeightAtRow:(int)arg1 ;
-(void)validateRowsTranslationsToRowIndex:(int)arg1 ;
-(CGSize)adjustedCellMargin;
-(CGSize)adjustedMargin;
-(double)xAtColumn:(int)arg1 ;
-(double)boundingBoxYAtRow:(int)arg1 ;
-(CGSize)cellBoundingBoxPositionAtIndex:(long long)arg1 ;
-(double)yAtRow:(int)arg1 ;
-(int)_rowAtY:(double)arg1 ;
-(int)rowAtY:(double)arg1 ;
-(int)columnAtX:(double)arg1 ;
-(id)_cellIndexesInRect:(SCD_Struct_IK11)arg1 ;
-(void)collapsedStateChanged:(id)arg1 ;
-(void)spaceOutSubmanagerCellsForDropAtIndex:(unsigned long long)arg1 nearestCell:(unsigned long long)arg2 isMoreThanHalfwayAcrossCell:(char)arg3 ;
-(void)invalidateCacheAtIndexes:(id)arg1 ;
-(CGSize)computeContentSize;
-(id)cellIndexesAtLocation:(CGSize)arg1 ;
-(int)cellIndexAtColumn:(int)arg1 andRow:(int)arg2 ;
-(long long)nearestCellOfPosition:(CGSize)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
-(void)clear;
-(int)columnCount;
-(CGSize)cellSize;
-(int)columnAtIndex:(int)arg1 ;
-(int)rowAtIndex:(int)arg1 ;
-(CGSize)margin;
-(int)rowsCount;
-(SCD_Struct_IK11)cellFrameAtIndex:(unsigned long long)arg1 ;
@end

