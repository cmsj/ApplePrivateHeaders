/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachMacUI.framework/Versions/A/NewDeviceOutreachMacUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NDOFollowUp : NSObject
-(void)postFollowUpWithWarranty:(id)arg1 serialNumber:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(void)_setupFollowUpItem:(id)arg1 withWarranty:(id)arg2 serialNumber:(id)arg3 ;
-(void)clearFollowUp;
-(void)postFollowUpWithWarranty:(id)arg1 serialNumber:(id)arg2 ;
-(id)_setupFollowUpNotificationWithWarranty:(id)arg1 ;
-(char)refreshFollowupWithWarranty:(id)arg1 serialNumber:(id)arg2 ;
-(char)followupExists;
-(void)badgeFollowup;
@end
