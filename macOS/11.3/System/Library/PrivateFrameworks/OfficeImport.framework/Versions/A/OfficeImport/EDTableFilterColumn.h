/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {

	unsigned long long mColumnIndex;
	NSMutableArray* mFilters;
	int mFiltersRelation;

}
-(id)description;
-(id)init;
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)columnIndex;
-(void)addFilter:(id)arg1 ;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)setFiltersRelation:(int)arg1 ;
-(unsigned long long)filterCount;
-(int)filtersRelation;
@end

