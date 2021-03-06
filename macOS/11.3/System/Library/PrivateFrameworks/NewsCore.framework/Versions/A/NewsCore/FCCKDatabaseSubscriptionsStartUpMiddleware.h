/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCKDatabaseMigrator.h>
#import <libobjc.A.dylib/FCCKDatabaseStartUpMiddleware.h>

@protocol FCCKDatabaseRecordMiddleware;
@class FCCKZoneSchema, NSString;

@interface FCCKDatabaseSubscriptionsStartUpMiddleware : NSObject <FCCKDatabaseMigrator, FCCKDatabaseStartUpMiddleware> {

	FCCKZoneSchema* _legacyZoneSchema;
	FCCKZoneSchema* _secureZoneSchema;
	id<FCCKDatabaseRecordMiddleware> _encryptionMiddleware;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1 ;
-(char)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2 ;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2 ;
-(char)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2 ;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2 ;
-(void)performStartUpForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

