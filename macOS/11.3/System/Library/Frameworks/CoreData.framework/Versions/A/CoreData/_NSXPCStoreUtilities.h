/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSXPCStoreUtilities : NSObject
+(id)newUserInfoFromException:(id)arg1 ;
+(id)classesForFetchArchive;
+(id)newSecureArchivedDataWithRootObject:(id)arg1 ;
+(id)encodableTokenForStore:(id)arg1 queryGenerationToken:(id)arg2 ;
+(void)logMessage:(id)arg1 forComponent:(id)arg2 ;
+(id)classesForErrorArchive;
+(id)classesForSaveArchive;
+(id)decodeSecureArchivedData:(id)arg1 usingDelegate:(id)arg2 classes:(id)arg3 ;
+(id)_decodeBufferResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7 ;
+(id)_decodeResultSetData:(id)arg1 forFetchRequest:(id)arg2 options:(unsigned long long)arg3 store:(id)arg4 context:(id)arg5 rowCacheRows:(id*)arg6 error:(id*)arg7 ;
@end

