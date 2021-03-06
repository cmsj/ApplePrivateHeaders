/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSString;

@interface PPSQLColumnMapping : NSObject {

	const PPCompactStringArrayRef _columnAliases;
	const PPCompactStringArrayRef _tableColumnNamesFromSchema;
	NSString* _uniqueTableName;

}
-(void)dealloc;
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)indexForColumnAlias:(const char*)arg1 ;
-(id)initWithStatement:(id)arg1 ;
@end

