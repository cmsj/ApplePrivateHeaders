/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, NSArray;

@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject {

	NSString* _loadingTileGroupUniqueIdentifier;
	NSArray* _pendingTileGroupMigrationTasks;
	id<NSObject> _transaction;

}

@property (nonatomic,readonly) NSString * loadingTileGroupUniqueIdentifier;              //@synthesize loadingTileGroupUniqueIdentifier=_loadingTileGroupUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * pendingTileGroupMigrationTasks;                     //@synthesize pendingTileGroupMigrationTasks=_pendingTileGroupMigrationTasks - In the implementation block
-(id)init;
-(id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2 ;
-(NSString *)loadingTileGroupUniqueIdentifier;
-(NSArray *)pendingTileGroupMigrationTasks;
-(void)setPendingTileGroupMigrationTasks:(NSArray *)arg1 ;
@end

