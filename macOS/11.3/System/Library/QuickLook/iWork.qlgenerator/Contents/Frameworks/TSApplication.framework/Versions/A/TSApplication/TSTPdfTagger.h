/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTPdfTagger <TSKPdfTagger>
@required
-(void)beginTableChunk:(id)arg1;
-(void)endTableChunk:(id)arg1;
-(void)beginTableNameForChunk:(id)arg1;
-(void)endTableNameForChunk:(id)arg1;
-(void)beginTableLayoutSpace:(id)arg1;
-(void)endTableLayoutSpace:(id)arg1;
-(void)beginTableRow:(unsigned)arg1;
-(void)endTableRow:(unsigned)arg1;
-(void)beginTableCell:(id)arg1 withCellID:(TSUCellCoord)arg2 cellHasContents:(char)arg3 cellIsPrimary:(char)arg4;
-(void)endTableCell:(id)arg1 withCellID:(TSUCellCoord)arg2 cellHasContents:(char)arg3 cellIsPrimary:(char)arg4;
-(void)beginCheckboxCell:(char)arg1;
-(void)endCheckboxCell;
-(void)beginRatingCell:(double)arg1;
-(void)endRatingCell;

@end

