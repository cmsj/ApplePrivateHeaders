/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ABCMaintenanceActivity : NSObject {

	/*^block*/id _activityBlock;
	NSObject*<OS_dispatch_queue> _activityQueue;
	NSString* _activityIdentifier;

}

@property (nonatomic,copy) id activityBlock;                                          //@synthesize activityBlock=_activityBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;              //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) NSString * activityIdentifier;                           //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(NSString *)activityIdentifier;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)activityBlock;
-(void)setActivityBlock:(id)arg1 ;
@end
