/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSTTableSortRowTag : NSObject {

	unsigned _rowIndex;
	NSMutableArray* _reorganizeValues;

}

@property (nonatomic,retain) NSMutableArray * reorganizeValues;              //@synthesize reorganizeValues=_reorganizeValues - In the implementation block
@property (assign,nonatomic) unsigned rowIndex;                              //@synthesize rowIndex=_rowIndex - In the implementation block
-(unsigned)rowIndex;
-(void)setRowIndex:(unsigned)arg1 ;
-(id)initWithNumberOfSortRules:(unsigned long long)arg1 ;
-(void)setReorganizeValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)reorganizeValueAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)reorganizeValues;
-(void)setReorganizeValues:(NSMutableArray *)arg1 ;
@end

