/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKInstallOperation.h>

@class PKInstallTask;

@interface PKXPCCacheInstallOperation : PKInstallOperation {

	PKInstallTask* _currentTask;
	char _inSandbox;

}
-(id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 updateInSandbox:(char)arg4 ;
-(id)_pathForTool:(id)arg1 ;
-(char)_shouldRebuildXPCServiceCache;
-(char)_rebuildXPCServiceCacheInSandboxReturningError:(id*)arg1 ;
-(id)description;
-(int)installState;
-(void)cancel;
-(void)main;
-(char)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id*)arg1 ;
@end
