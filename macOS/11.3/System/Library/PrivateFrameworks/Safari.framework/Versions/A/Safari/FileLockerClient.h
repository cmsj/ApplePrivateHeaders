/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FileLockerClient <NSObject>
@required
-(int)fileLocker:(const FileLocker*)arg1 actionForApparentlyAbandonedLock:(id)arg2;
-(void)fileLocker:(const FileLocker*)arg1 lockWasStolen:(id)arg2;

@end
