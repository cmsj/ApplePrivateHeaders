/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTMergeAction : NSObject <NSCopying> {

	int _type;
	vector<TSKUIDStructTract, std::__1::allocator<TSKUIDStructTract>>* _uidRanges;
	vector<TSCEFormulaObject *, std::__1::allocator<TSCEFormulaObject *>>* _mergeFormulas;
	vector<unsigned long, std::__1::allocator<unsigned long>>* _mergeFormulaIndexes;

}

@property (assign,nonatomic) int type;                                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) const vector<TSKUIDStructTract* uidRanges;                    //@synthesize uidRanges=_uidRanges - In the implementation block
@property (assign,nonatomic) const vector<TSCEFormulaObject ** mergeFormulas;              //@synthesize mergeFormulas=_mergeFormulas - In the implementation block
@property (assign,nonatomic) const vector<unsigned long* mergeFormulaIndexes;              //@synthesize mergeFormulaIndexes=_mergeFormulaIndexes - In the implementation block
@property (nonatomic,readonly) char hasMergeFormulas; 
@property (nonatomic,readonly) char hasMultiRowMerge; 
+(id)stringForMergeType:(int)arg1 ;
+(id)mergeActionForGrowingRange:(const TSKUIDStructTract*)arg1 coveringRange:(const TSKUIDStructTract*)arg2 inTable:(id)arg3 ;
+(TSKUIDStructTract*)cellUIDRangeFromMergeFormula:(id)arg1 calcEngine:(id)arg2 ;
+(id)mergeActionForRemovingRanges:(const vector<TSKUIDStructTract, std::__1::allocator<TSKUIDStructTract>>*)arg1 inTable:(id)arg2 ;
+(id)mergeActionForInsertingRange:(const TSKUIDStructTract*)arg1 inTable:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(void)addFormula:(id)arg1 ;
-(void)verify;
-(id)initWithArchive:(const MergeOperationArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(MergeOperationArchive*)arg1 archiver:(id)arg2 ;
-(void)enumerateMergeFormulasUsingBlock:(/*^block*/id)arg1 ;
-(id)cellRegionForTable:(id)arg1 ;
-(id)remapUIDsByColumnMap:(const TSKUIDStructMap*)arg1 rowMap:(const TSKUIDStructMap*)arg2 ownerMap:(const TSKUIDStructMap*)arg3 ;
-(id)initWithType:(int)arg1 uidRanges:(const vector<TSKUIDStructTract, std::__1::allocator<TSKUIDStructTract>>*)arg2 ;
-(void)addFormulaIndex:(unsigned long long)arg1 ;
-(char)hasMergeFormulas;
-(const vector<TSCEFormulaObject **)mergeFormulas;
-(const vector<TSKUIDStructTract*)uidRanges;
-(const vector<unsigned long*)mergeFormulaIndexes;
-(void)setUidRanges:(const vector<TSKUIDStructTract*)arg1 ;
-(void)setMergeFormulas:(const vector<TSCEFormulaObject **)arg1 ;
-(void)setMergeFormulaIndexes:(const vector<unsigned long*)arg1 ;
-(id)initWithType:(int)arg1 uidRange:(const TSKUIDStructTract*)arg2 ;
-(char)hasMultiRowMerge;
-(id)shrinkAction;
-(id)actionByExpandingWithAction:(id)arg1 ;
@end

