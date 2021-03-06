/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponents;

@interface REMDisplayDateUtils : NSObject {

	char _hasDisplayDate;
	char _hasAlarmDateComponents;
	char _isInitWithDueDateComponents;
	NSDateComponents* _dueDateComponents;
	NSDateComponents* _floatingDateComponents;
	NSDateComponents* _nonFloatingDateComponents;

}

@property (assign,nonatomic) char hasDisplayDate;                                       //@synthesize hasDisplayDate=_hasDisplayDate - In the implementation block
@property (assign,nonatomic) char hasAlarmDateComponents;                               //@synthesize hasAlarmDateComponents=_hasAlarmDateComponents - In the implementation block
@property (assign,nonatomic) char isInitWithDueDateComponents;                          //@synthesize isInitWithDueDateComponents=_isInitWithDueDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * dueDateComponents;                      //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * floatingDateComponents;                 //@synthesize floatingDateComponents=_floatingDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * nonFloatingDateComponents;              //@synthesize nonFloatingDateComponents=_nonFloatingDateComponents - In the implementation block
+(id)displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2 ;
+(id)_displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2 hasAlarmDateComponents:(char)arg3 floatingDateComponents:(id)arg4 nonFloatingDateComponents:(id)arg5 displayDateUtils:(id)arg6 ;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(id)displayDateWithDueDateComponents:(id)arg1 alarms:(id)arg2 ;
-(void)setHasDisplayDate:(char)arg1 ;
-(void)setIsInitWithDueDateComponents:(char)arg1 ;
-(void)setFloatingDateComponents:(NSDateComponents *)arg1 ;
-(void)setNonFloatingDateComponents:(NSDateComponents *)arg1 ;
-(void)setHasAlarmDateComponents:(char)arg1 ;
-(char)hasDisplayDate;
-(char)isInitWithDueDateComponents;
-(char)hasAlarmDateComponents;
-(NSDateComponents *)floatingDateComponents;
-(NSDateComponents *)nonFloatingDateComponents;
-(id)updateDisplayDateWithDueDateComponents:(id)arg1 alarm:(id)arg2 alarmsProviding:(id)arg3 ;
@end

