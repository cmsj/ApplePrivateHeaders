/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHALocalNotificationInterface : NSObject {

	char _isNotificationRegistered;

}

@property (assign) char isNotificationRegistered;              //@synthesize isNotificationRegistered=_isNotificationRegistered - In the implementation block
+(id)localNotificationInterface;
-(id)init;
-(char)isNotificationRegistered;
-(void)fireLocalNotificationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIsNotificationRegistered:(char)arg1 ;
@end

