/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, NSMutableArray, NSMutableDictionary, WDList;

@interface WDListTable : NSObject {

	WDDocument* mDocument;
	NSMutableArray* mLists;
	NSMutableDictionary* mListMapById;
	WDList* mNullList;
	WDList* mDefaultList;

}
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)lists;
-(id)listWithListId:(int)arg1 ;
-(id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2 ;
-(unsigned long long)listCount;
-(id)listAt:(unsigned long long)arg1 ;
@end

