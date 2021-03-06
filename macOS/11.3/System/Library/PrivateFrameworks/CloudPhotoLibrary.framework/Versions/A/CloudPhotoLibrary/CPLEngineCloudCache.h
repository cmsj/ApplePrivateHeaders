/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)scopeType;
-(char)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(char)hasRecordWithScopedIdentifier:(id)arg1 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)addRecord:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(char)updateFinalRecord:(id)arg1 confirmed:(char)arg2 error:(id*)arg3 ;
-(char)updateStagedRecord:(id)arg1 error:(id*)arg2 ;
-(char)applyBatch:(id)arg1 isFinal:(char)arg2 direction:(unsigned long long)arg3 withError:(id*)arg4 ;
-(char)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3 ;
-(id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(char)arg3 withError:(id*)arg4 ;
-(char)confirmAllRecordsWithError:(id*)arg1 ;
-(char)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(id)recordWithScopedIdentifier:(id)arg1 isFinal:(char)arg2 ;
-(id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(char*)arg2 isStaged:(char*)arg3 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(char)arg2 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(char)arg3 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 isFinal:(char)arg2 ;
-(id)recordAcknowledgedByClientWithScopedIdentifier:(id)arg1 ;
-(char)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)arg1 ;
-(id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(char)ackownledgeRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)discardStagedChangesWithScopeFilter:(id)arg1 error:(id*)arg2 ;
-(void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forScopedIdentifier:(id)arg3 ;
-(id)recordsOfClass:(Class)arg1 isFinal:(char)arg2 ;
-(id)allRecordsIsFinal:(char)arg1 ;
@end

