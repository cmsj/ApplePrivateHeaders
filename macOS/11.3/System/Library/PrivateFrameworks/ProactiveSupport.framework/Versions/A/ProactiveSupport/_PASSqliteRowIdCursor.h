/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteCollectionsCursor.h>

@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor
+(const char*)sqliteCreateTableStatement;
+(char)hasRowId;
-(char)currentIndexEof;
-(unsigned long long)outputRowId;
-(unsigned long long)currentIndexedRowId;
@end
