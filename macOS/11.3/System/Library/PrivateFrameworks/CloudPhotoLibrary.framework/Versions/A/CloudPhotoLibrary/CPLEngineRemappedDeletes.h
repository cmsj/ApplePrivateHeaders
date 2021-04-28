/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSMutableDictionary, CPLPlatformObject, NSString;

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject> {

	NSMutableDictionary* _perTransactionRemappedScopedIdentifiers;

}

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 asap:(char)arg3 ;
-(void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 ;
-(id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg1 fallback:(id)arg2 ;
-(id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1 ;
@end
