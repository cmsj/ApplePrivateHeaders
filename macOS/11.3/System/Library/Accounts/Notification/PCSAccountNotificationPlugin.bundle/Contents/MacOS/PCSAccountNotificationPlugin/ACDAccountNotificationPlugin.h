/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Accounts/Notification/PCSAccountNotificationPlugin.bundle/Contents/MacOS/PCSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(char)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(char)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(char)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(char)canRemoveAccount:(id)arg1 inStore:(id)arg2;
-(char)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;

@end

