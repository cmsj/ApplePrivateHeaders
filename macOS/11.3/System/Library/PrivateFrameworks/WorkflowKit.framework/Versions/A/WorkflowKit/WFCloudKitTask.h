/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFCloudKitTask : NSObject {

	char _cancelled;
	/*^block*/id _cancellationHandler;

}

@property (getter=isCancelled) char cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)cancel;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
@end

