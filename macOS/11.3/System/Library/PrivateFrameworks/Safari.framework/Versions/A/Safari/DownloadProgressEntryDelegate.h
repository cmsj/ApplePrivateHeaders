/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DownloadProgressEntryDelegate <NSObject>
@required
-(void)downloadProgressEntry:(id)arg1 didResumeWithWK2Download:(id)arg2;
-(void)downloadProgressEntryDidStop:(id)arg1;
-(void)downloadProgressEntryDidFinish:(id)arg1 shouldClear:(char)arg2;
-(void)downloadProgressEntry:(id)arg1 didUpdateFractionCompletedForPath:(id)arg2 fractionCompleted:(float)arg3;
-(void)downloadProgressEntry:(id)arg1 didMarkDownloadBundleAsInProgressAtBundlePath:(id)arg2 creationDate:(id)arg3;

@end

