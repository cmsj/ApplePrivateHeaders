/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCETableResolverFactoryProtocol <NSObject>
@required
-(vector<TSCEValue, std::__1::allocator<TSCEValue>>*)valuesForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const TSKUIDStruct*)arg2 error:(id*)arg3;
-(id)initWithCalcEngine:(TSCECalcEngine*)arg1;
-(vector<TSCECategoryRef, std::__1::allocator<TSCECategoryRef>>*)categoryRefsForSpanningCategoryRef:(const TSCECategoryRef*)arg1;
-(unsigned char)aggregateTypeForCategoryRef:(const TSCECategoryRef*)arg1;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef>>*)cellRefsForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const TSKUIDStruct*)arg2;
-(TSCERangeRef*)aggregateRangeRefForCategoryRef:(const TSCECategoryRef*)arg1;
-(TSKUIDStruct*)mapOwnerUID:(const TSKUIDStruct*)arg1;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef>>*)unorderedCellRefsForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const TSKUIDStruct*)arg2;
-(TSCETableResolver*)newTableResolverForResolver:(id)arg1;

@end

