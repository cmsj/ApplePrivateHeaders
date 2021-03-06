/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCECellTractRef;

@interface TSCERelativeTractRef : NSObject <NSCopying> {

	TSCECellTractRef* _absTractRef;
	TSUIndexSet* _relativeColumns;
	TSUIndexSet* _relativeRows;

}

@property (assign,nonatomic) char spansAllColumns; 
@property (assign,nonatomic) char spansAllRows; 
@property (assign,nonatomic) char preserveRectangular; 
@property (assign,nonatomic) TSKUIDStruct tableUID; 
@property (nonatomic,readonly) TSUPreserveFlags preserveFlags; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)addRow:(unsigned)arg1 ;
-(const TSUIndexSet*)rows;
-(const TSUIndexSet*)columns;
-(void)setColumns:(const TSUIndexSet*)arg1 ;
-(void)setRows:(const TSUIndexSet*)arg1 ;
-(void)addColumn:(unsigned short)arg1 ;
-(unsigned)numRows;
-(TSKUIDStruct)tableUID;
-(void)addRowRange:(const TSUIndexRange*)arg1 ;
-(void)addColumnRange:(const TSUIndexRange*)arg1 ;
-(char)spansAllRows;
-(char)spansAllColumns;
-(unsigned)numColumns;
-(char)isRectangularRange;
-(void)removeColumnRange:(const TSUIndexRange*)arg1 ;
-(void)removeRowRange:(const TSUIndexRange*)arg1 ;
-(id)initWithAbsoluteTractRef:(id)arg1 hostCell:(const TSUCellCoord*)arg2 ;
-(id)absoluteCellTractRefForHostCell:(const TSUCellCoord*)arg1 ;
-(void)setTableUID:(TSKUIDStruct)arg1 ;
-(void)setSpansAllRows:(char)arg1 ;
-(TSUPreserveFlags)preserveFlags;
-(void)setSpansAllColumns:(char)arg1 ;
-(char)preserveRectangular;
-(void)setPreserveRectangular:(char)arg1 ;
-(char)isSingleCellOrSpanningRange;
-(BOOL)hasTableUID;
-(const TSUIndexSet*)relativeRows;
-(void)setRelativeRows:(const TSUIndexSet*)arg1 ;
-(const TSUIndexSet*)relativeColumns;
-(void)setRelativeColumns:(const TSUIndexSet*)arg1 ;
-(char)verifySpanningSettings;
-(id)initWithTableUID:(const TSKUIDStruct*)arg1 preserveFlags:(const TSUPreserveFlags*)arg2 ;
-(void)repairSpanningColumnSetting;
-(void)repairSpanningRowSetting;
-(TSCERelativeCellCoordinate)relativeTopLeft;
-(TSCERelativeCellCoordinate)relativeBottomRight;
-(id)absoluteCellTractRefForHostCell:(const TSUCellCoord*)arg1 offTable:(char*)arg2 ;
-(void)addRelativeColumnRange:(const TSUIndexRange*)arg1 ;
-(void)addRelativeRowRange:(const TSUIndexRange*)arg1 ;
-(void)preserveFlagsFixingInversionsForTract:(id)arg1 absFromRelColumns:(const TSUIndexSet*)arg2 absFromRelRows:(const TSUIndexSet*)arg3 ;
-(id)initWithRangeRef:(const TSCERangeRef*)arg1 hostCell:(const TSUCellCoord*)arg2 ;
-(unsigned)numRelativeColumns;
-(unsigned)numRelativeRows;
-(void)addRelativeColumn:(short)arg1 ;
-(void)addRelativeRow:(int)arg1 ;
-(void)removeRelativeColumnRange:(const TSUIndexRange*)arg1 ;
-(void)removeRelativeRowRange:(const TSUIndexRange*)arg1 ;
-(SCD_Struct_TS196)relativeBoundingRangeWithContainingCell:(const TSUCellCoord*)arg1 ;
-(void)adjustRelativeIndexesBy:(const TSUColumnRowOffset*)arg1 ;
@end

