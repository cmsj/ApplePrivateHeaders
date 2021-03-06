/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSDate, NSMutableSet, NSMutableDictionary, CPLPlatformObject, NSString;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {

	unsigned long long _currentGeneration;
	NSDate* _transactionStartDate;
	NSMutableSet* _persistedScopedIdentifiers;
	NSMutableDictionary* _pendingTransientStatuses;
	NSMutableSet* _pendingDeletedTransientStatuses;
	NSMutableDictionary* _transientStatuses;

}

@property (nonatomic,readonly) char hasStatusChanges; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)status;
-(unsigned long long)scopeType;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(char)hasStatusChanges;
-(char)notifyStatusForRecordHasChanged:(id)arg1 persist:(char)arg2 error:(id*)arg3 ;
-(char)notifyStatusForRecordViewHasChanged:(id)arg1 persist:(char)arg2 error:(id*)arg3 ;
-(char)notifyStatusForRecordWithScopedIdentifierHasChanged:(id)arg1 recordClass:(Class)arg2 persist:(char)arg3 error:(id*)arg4 ;
-(id)statusChanges;
-(id)_allScopedIdentifierInCollection:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeStatusesInDictionary:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)_removeScopedIdentifiersFromSet:(id)arg1 withScopeIdentifier:(id)arg2 ;
-(void)resetTransientStatusesWithScopeIdentifier:(id)arg1 ;
-(void)resetAllTransientStatuses;
-(id)statusesForRecordsWithScopedIdentifiers:(id)arg1 ;
-(id)statusesForRecordsWithIdentifiers:(id)arg1 ;
-(char)acknowledgeChangedStatuses:(id)arg1 error:(id*)arg2 ;
-(char)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_fillStatus:(id)arg1 withClientCacheRecordView:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(char)arg4 isStaged:(char)arg5 isInIDMapping:(char)arg6 ;
-(void)_fillStatus:(id)arg1 ;
-(id)_statusFromCachesWithRecordScopedIdentifier:(id)arg1 ;
-(id)recordForStatusWithScopedIdentifier:(id)arg1 ;
-(id)recordViewForStatusWithScopedIdentifier:(id)arg1 ;
-(id)allStatusChanges;
@end

