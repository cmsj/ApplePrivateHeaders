/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MCThrowingInvocationOperation.h>

@interface MCMainThreadInvocationOperation : MCThrowingInvocationOperation {

	char _isExecuting;
	char _isFinished;

}
+(char)automaticallyNotifiesObserversOfIsExecuting;
+(char)automaticallyNotifiesObserversOfIsFinished;
-(void)start;
-(void)main;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(void)_setIsExecuting:(char)arg1 ;
-(void)_finish;
@end

