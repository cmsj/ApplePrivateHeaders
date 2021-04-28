/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTCellList : TSPObject <NSCopying> {

	vector<TSTCell *, std::__1::allocator<TSTCell *>>* _cells;
	unsigned long long _trailingEmptyCellCount;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithContext:(id)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)replaceCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)shallowAddCell:(id)arg1 ;
-(id)addCell:(id)arg1 ;
-(void)addPrecopiedCell:(id)arg1 ;
-(unsigned long long)trailingEmptyCellCount;
-(id)lastCell;
@end
