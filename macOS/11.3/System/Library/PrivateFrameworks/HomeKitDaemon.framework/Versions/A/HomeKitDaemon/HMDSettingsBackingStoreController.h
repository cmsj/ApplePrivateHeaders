/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDSettingsBackingStoreController <NSObject>
@required
-(void)start;
-(void)registerForSettingsTransactions:(id)arg1;
-(id)settingTransactionWithName:(id)arg1;
-(void)runSettingTransaction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runSettingTransaction:(id)arg1 waitForCloudPush:(char)arg2 completion:(/*^block*/id)arg3;

@end

