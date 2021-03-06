/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICPlayActivityController;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) ICPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
-(id)init;
-(void)execute;
-(id)initWithPlayActivityController:(id)arg1 ;
-(ICPlayActivityController *)playActivityController;
@end

