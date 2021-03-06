/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPivotFieldItem : NSObject {

	BOOL mChildItems;
	BOOL mExpanded;
	BOOL mCalculatedMember;
	BOOL mMissed;
	BOOL mHidden;
	BOOL mDetailsHidden;
	int mType;
	unsigned long long mItemIndex;

}
+(id)pivotFieldItem;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(int)type;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(BOOL)expanded;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)childItems;
-(void)setChildItems:(BOOL)arg1 ;
-(BOOL)missed;
-(void)setMissed:(BOOL)arg1 ;
-(BOOL)calculatedMember;
-(void)setCalculatedMember:(BOOL)arg1 ;
-(BOOL)detailsHidden;
-(void)setDetailsHidden:(BOOL)arg1 ;
@end

