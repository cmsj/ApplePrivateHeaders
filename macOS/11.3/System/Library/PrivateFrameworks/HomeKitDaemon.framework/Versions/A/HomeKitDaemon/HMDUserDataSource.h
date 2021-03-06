/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDUserDataSource.h>

@protocol HMDUserDataSource
@required
-(id)userDataControllerWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6;
-(id)userDataBackingStoreControllerWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 home:(id)arg4 shareMessenger:(id)arg5;
-(char)isCurrentUser:(id)arg1;

@end


@interface HMDUserDataSource : NSObject <HMDUserDataSource>
-(id)userDataControllerWithDelegate:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 ;
-(id)userDataBackingStoreControllerWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 home:(id)arg4 shareMessenger:(id)arg5 ;
-(char)isCurrentUser:(id)arg1 ;
@end

