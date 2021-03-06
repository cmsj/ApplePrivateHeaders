/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCKDatabaseMigrator;
@class FCCKPrivateDatabase, NSMutableArray;

@interface FCCKDatabaseMigrationOperation : FCOperation {

	FCCKPrivateDatabase* _database;
	id<FCCKDatabaseMigrator> _migrator;
	/*^block*/id _migrationCompletionHandler;
	NSMutableArray* _resultZoneIDsEligibleForDeletion;
	NSMutableArray* _resultRecordIDsEligibleForDeletion;

}
-(void)performOperation;
-(void)prepareOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(char)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
@end

