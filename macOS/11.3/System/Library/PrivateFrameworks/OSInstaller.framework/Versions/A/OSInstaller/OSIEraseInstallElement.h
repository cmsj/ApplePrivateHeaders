/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIEraseInstallElement : OSIInstallQueueElement
+(char)performEraseInstallWithTarget:(id)arg1 withOptionalVolumeUUIDToErase:(id)arg2 withError:(id*)arg3 ;
+(id)disksForDiskUUID:(id)arg1 fromDisks:(id)arg2 ;
+(id)volumesToRemove:(id)arg1 exemptingTarget:(id)arg2 ;
-(id)operationName;
-(char)runReturningError:(id*)arg1 ;
-(double)estimatedTimeToComplete;
@end
