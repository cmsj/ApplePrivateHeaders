/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@interface TSTMergeRangeSortedSet : NSObject {

	set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem>>* _set;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)enumerateMergeRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)addRange:(TSUCellRect)arg1 height:(double)arg2 paddingInsets:(NSEdgeInsets)arg3 isCheckbox:(char)arg4 ;
@end
