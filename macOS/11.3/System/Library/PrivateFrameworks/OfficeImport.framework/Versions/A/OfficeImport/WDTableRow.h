/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDTableRowProperties, NSMutableArray, WDTable;

@interface WDTableRow : NSObject {

	unsigned long long mIndex;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;
	WDTable* mTable;

}

@property (__weak,readonly) WDTable * table; 
-(id)description;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(WDTable *)table;
-(id)properties;
-(unsigned long long)cellCount;
-(id)cellAt:(unsigned long long)arg1 ;
-(id)addCell;
-(id)initWithTable:(id)arg1 at:(unsigned long long)arg2 ;
-(id)addCellWithIndex:(unsigned long long)arg1 ;
-(id)cellIterator;
-(id)newCellIterator;
@end
