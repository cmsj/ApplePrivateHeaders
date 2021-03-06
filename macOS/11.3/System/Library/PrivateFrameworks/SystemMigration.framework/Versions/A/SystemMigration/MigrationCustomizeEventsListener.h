/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MigrationCustomizeEventsListener
@required
-(void)pathingProgressFormatKey:(id)arg1 arguments:(id)arg2;
-(void)sizingCompletedForUserWithUUID:(id)arg1 excludablePaths:(id)arg2 onSystem:(id)arg3;
-(void)preliminarySize:(unsigned long long)arg1 forUserWithUUID:(id)arg2 onSystem:(id)arg3;
-(void)preliminarySize:(unsigned long long)arg1 andCount:(unsigned long long)arg2 forPathGroup:(unsigned long long)arg3 onSystem:(id)arg4;
-(void)sizingCompletedForPathGroup:(unsigned long long)arg1 onSystem:(id)arg2 withSize:(unsigned long long)arg3;
-(void)preliminarySize:(unsigned long long)arg1 forComponent:(id)arg2 onSystem:(id)arg3;
-(void)sizingCompletedForComponent:(id)arg1 onSystem:(id)arg2 withSize:(unsigned long long)arg3;
-(void)preliminarySizeForCustomPaths:(unsigned long long)arg1 type:(unsigned long long)arg2 user:(id)arg3 onSystem:(id)arg4;
-(void)sizingCompletedForCustomPathType:(unsigned long long)arg1 user:(id)arg2 onSystem:(id)arg3 withSize:(unsigned long long)arg4;

@end

