/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMBCloudDatabaseDelegate <NSObject>
@optional
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;
-(void)cloudDatabase:(id)arg1 didChangeManateeKeysForZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
-(void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;
-(id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;

@end

