/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLBatchExtractionStrategyStorage <NSObject>
@required
-(id)changeWithScopedIdentifier:(id)arg1;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(char)arg3;
-(id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
-(id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
-(id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
-(id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
-(id)allChangesWithScopeIdentifier:(id)arg1;
-(char)removeChange:(id)arg1 error:(id*)arg2;
-(char)hasChangesInScopeWithIdentifier:(id)arg1;
-(unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1;

@end

