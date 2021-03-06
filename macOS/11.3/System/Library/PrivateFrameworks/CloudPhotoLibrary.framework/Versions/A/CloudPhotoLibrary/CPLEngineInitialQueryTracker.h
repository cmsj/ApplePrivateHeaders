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

@interface CPLEngineInitialQueryTracker : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)scopeType;
-(char)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(char)recordInitialQueryForClassStarted:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 error:(id*)arg4 ;
-(char)recordQueryBatchForClass:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 count:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)recordInitialQueryForClassFinished:(Class)arg1 scope:(id)arg2 finishedState:(long long)arg3 error:(id*)arg4 ;
@end

