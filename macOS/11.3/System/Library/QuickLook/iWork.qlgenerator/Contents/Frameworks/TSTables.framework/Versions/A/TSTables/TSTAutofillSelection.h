/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSKit/TSKSelection.h>

@interface TSTAutofillSelection : TSKSelection {

	TSUCellRect _sourceCellRange;
	TSUCellRect _targetCellRange;

}

@property (assign,nonatomic) TSUCellRect sourceCellRange;              //@synthesize sourceCellRange=_sourceCellRange - In the implementation block
@property (assign,nonatomic) TSUCellRect targetCellRange;              //@synthesize targetCellRange=_targetCellRange - In the implementation block
+(Class)archivedSelectionClass;
+(id)autofillSelectionWithSourceCellRange:(TSUCellRect)arg1 ;
+(id)autofillSelectionWithSourceCellRange:(TSUCellRect)arg1 targetCellRange:(TSUCellRect)arg2 ;
-(id)initWithSourceCellRange:(TSUCellRect)arg1 ;
-(id)initWithSourceCellRange:(TSUCellRect)arg1 targetCellRange:(TSUCellRect)arg2 ;
-(TSUCellRect)targetCellRange;
-(TSUCellRect)sourceCellRange;
-(char)isValidForCellSelection:(id)arg1 inTable:(id)arg2 ;
-(char)isValidForRowVisibilityChangeInRegion:(id)arg1 table:(id)arg2 ;
-(void)setSourceCellRange:(TSUCellRect)arg1 ;
-(void)setTargetCellRange:(TSUCellRect)arg1 ;
@end

