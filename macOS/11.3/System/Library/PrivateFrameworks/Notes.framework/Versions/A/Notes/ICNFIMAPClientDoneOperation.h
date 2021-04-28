/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPSingleClientOperation.h>

@class NSDate;

@interface ICNFIMAPClientDoneOperation : ICNFIMAPSingleClientOperation {

	char _isReallyReady;
	char _shouldQueueIdleWhenFinished;
	char _didQueueIdle;
	NSDate* _resetDate;

}

@property (retain) NSDate * resetDate;              //@synthesize resetDate=_resetDate - In the implementation block
-(id)init;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(void)cancel;
-(char)isReady;
-(id)activityString;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(char)alwaysAllowToComplete;
-(void)setResetDateEarlierThanNow;
-(char)updateReadiness;
-(NSDate *)resetDate;
-(void)setResetDate:(NSDate *)arg1 ;
-(char)setShouldQueueIdleWhenFinished:(char)arg1 ;
-(char)shouldQueueIdleWhenFinished;
-(char)_shouldQueueIdleNow;
@end
