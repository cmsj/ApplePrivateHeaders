/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface TSCECellDependenciesPrinter : NSObject {

	char _showCleanCells;
	NSString* _ownerName;
	unsigned long long _numDirtyCells;
	NSMutableArray* _dirtyCellDependencyRows;
	NSMutableArray* _cleanCellDependencyRows;

}

@property (nonatomic,retain) NSMutableArray * dirtyCellDependencyRows;              //@synthesize dirtyCellDependencyRows=_dirtyCellDependencyRows - In the implementation block
@property (nonatomic,retain) NSMutableArray * cleanCellDependencyRows;              //@synthesize cleanCellDependencyRows=_cleanCellDependencyRows - In the implementation block
@property (nonatomic,retain) NSString * ownerName;                                  //@synthesize ownerName=_ownerName - In the implementation block
@property (assign,nonatomic) unsigned long long numDirtyCells;                      //@synthesize numDirtyCells=_numDirtyCells - In the implementation block
@property (assign,nonatomic) char showCleanCells;                                   //@synthesize showCleanCells=_showCleanCells - In the implementation block
+(id)stringForOwnerKind:(unsigned short)arg1 ;
-(id)description;
-(id)init;
-(NSString *)ownerName;
-(void)setOwnerName:(NSString *)arg1 ;
-(void)addDependencyRow:(id)arg1 ;
-(void)setShowCleanCells:(char)arg1 ;
-(char)showCleanCells;
-(unsigned long long)numDirtyCells;
-(void)setNumDirtyCells:(unsigned long long)arg1 ;
-(NSMutableArray *)dirtyCellDependencyRows;
-(void)setDirtyCellDependencyRows:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cleanCellDependencyRows;
-(void)setCleanCellDependencyRows:(NSMutableArray *)arg1 ;
@end
