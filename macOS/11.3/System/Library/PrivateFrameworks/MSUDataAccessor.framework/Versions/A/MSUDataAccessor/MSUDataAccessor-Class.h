/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/Versions/A/MSUDataAccessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MSUDataAccessor/MSUDataAccessor-Structs.h>
@interface MSUDataAccessor : NSObject
+(id)errorNameForCode:(long long)arg1 ;
+(void)buildErrorForRef:(id*)arg1 code:(long long)arg2 description:(id)arg3 ;
+(id)ioreg:(id)arg1 property:(id)arg2 error:(id*)arg3 ;
+(id)sharedDataAccessor;
+(id)bootUUIDWithError:(id*)arg1 ;
-(id)init;
-(id)copyMountPointForVolumeType:(int)arg1 error:(id*)arg2 ;
-(id)copyBootManifestHashWithError:(id*)arg1 ;
-(id)personalizedRootWithError:(id*)arg1 ;
-(id)hardwareRootWithError:(id*)arg1 ;
-(id)resolveFilePathForEntry:(const path_table_entry*)arg1 error:(id*)arg2 ;
-(id)copyPathForPersonalizedData:(int)arg1 error:(id*)arg2 ;
-(id)copyPathForPersistentData:(int)arg1 error:(id*)arg2 ;
@end

