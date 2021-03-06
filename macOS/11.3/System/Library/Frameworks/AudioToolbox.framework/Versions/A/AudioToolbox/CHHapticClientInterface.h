/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHHapticClientInterface
@required
-(void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2;
-(void)clientCompletedWithError:(id)arg1;
-(void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2;
-(void)clientDisconnectingForReason:(unsigned long long)arg1 error:(id)arg2;

@end

