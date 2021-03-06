/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBContainerModuleProtocol <NSObject>
@required
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2;
-(void)start;
-(void)stop;
-(id)copyPropertyForKey:(id)arg1;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
-(void)registerNotificationBlock:(/*^block*/id)arg1;
-(void)unregisterNotificationBlock;

@end

