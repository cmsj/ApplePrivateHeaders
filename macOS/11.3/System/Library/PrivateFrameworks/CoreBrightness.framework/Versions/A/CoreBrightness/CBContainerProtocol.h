/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBContainerProtocol <NSObject>
@required
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2;
-(char)start;
-(void)stop;
-(id)copyPropertyForKey:(id)arg1;
-(void)registerNotificationBlock:(/*^block*/id)arg1;
-(void)unregisterNotificationBlock;
-(void)scheduleWithDispatchQueue:(id)arg1;
-(void)unscheduleWithDispatchQueue:(id)arg1;

@end

