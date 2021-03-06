/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMReminderChangeItem;

@interface REMReminderSubtaskContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
-(void)addReminderChangeItem:(id)arg1 ;
-(REMReminderChangeItem *)reminderChangeItem;
-(void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2 ;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(id)_listChangeItem;
-(void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2 ;
-(void)undeleteSubtaskWithID:(id)arg1 usingUndo:(id)arg2 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
@end

