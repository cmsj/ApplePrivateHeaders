/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@interface _DPBlacklistManager : NSObject <_DPMaintenance>
+(char)createRuntimeBlacklistDirectory:(id)arg1 ;
+(char)removeAllFilesFromDirectory:(id)arg1 ;
+(char)validateBlacklist:(id)arg1 ;
+(char)saveBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 memoryLimit:(unsigned long long)arg4 ;
+(char)removeBlacklistFileWithKey:(id)arg1 fromDirectory:(id)arg2 ;
+(id)keepLatestRuntimeBlacklistInDirectory:(id)arg1 compareToSystemBlacklistInDirectory:(id)arg2 ;
+(unsigned long long)memoryRequiredBySystemBlacklistInDirectory:(id)arg1 runtimeBlacklistInDirectory:(id)arg2 blacklist:(id)arg3 ;
+(char)saveBlacklist:(id)arg1 knownVersionByKey:(id)arg2 systemDirectory:(id)arg3 runtimeDirectory:(id)arg4 ;
+(unsigned long long)memorySizeWithDirectory:(id)arg1 ;
+(char)saveBlacklist:(id)arg1 forKey:(id)arg2 runtimeDirectory:(id)arg3 ;
+(void)processRuntimeBlacklist;
+(void)processRuntimeBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 blacklistLengthLimit:(unsigned long long)arg4 ;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
@end

