/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {

	NSDictionary* _reportingDictionary;

}
+(id)databaseTable;
-(void)dealloc;
-(id)reportingDictionary;
-(id)reportingCanaryIdentifier;
-(id)reportingJSON;
@end
