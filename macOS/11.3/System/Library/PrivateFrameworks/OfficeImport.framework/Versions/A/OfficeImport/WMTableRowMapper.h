/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

@interface WMTableRowMapper : CMMapper {

	WDTableRow* mWdTableRow;
	double mHeight;

}
+(char)isTableRowDeleted:(id)arg1 ;
-(double)height;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTableRow:(id)arg1 parent:(id)arg2 ;
-(void)setRowProperties:(id)arg1 ;
@end

