/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABTimeMachineTempFileHelper : NSObject
+(id)temporaryDatabaseUrlByCopyingDatabaseAtPath:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3 ;
+(id)temporaryDatabaseUrlForDatabasePath:(id)arg1 error:(id*)arg2 ;
+(char)copyDatabaseAtURL:(id)arg1 toUrl:(id)arg2 withCoordinator:(id)arg3 error:(id*)arg4 ;
+(id)createHashedMigrationDirectoryForDatabasePath:(id)arg1 error:(id*)arg2 ;
+(id)standardizedPathForPath:(id)arg1 ;
+(id)temporaryTimeMachineDirectory;
@end
