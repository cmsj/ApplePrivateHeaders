/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTableCell, CMStyle;

@interface PMTableCellMapper : CMMapper {

	OADTableCell* mCell;
	CMStyle* mStyle;
	int mColIndex;
	unsigned long long mRowIndex;
	float mWidth;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)tableMapper;
-(void)mapBordersWithState:(id)arg1 ;
-(void)mapCellPropertiesWithState:(id)arg1 textAnchor:(unsigned char)arg2 ;
-(id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(int)arg3 parent:(id)arg4 ;
-(float)widthWithState:(id)arg1 ;
-(id)rowMapper;
@end

