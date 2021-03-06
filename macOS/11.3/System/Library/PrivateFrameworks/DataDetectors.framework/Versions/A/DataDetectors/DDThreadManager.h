/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface DDThreadManager : NSObject {

	NSOperationQueue* _queue;
	char _stopping;

}
-(id)init;
-(void)deactivate;
-(id)queueTextToScanInController:(id)arg1 identifier:(id)arg2 delegate:(id)arg3 retryCount:(int)arg4 ;
-(void)cancelOperationForIdentifier:(id)arg1 ;
@end

