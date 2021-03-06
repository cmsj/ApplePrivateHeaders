/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, NSData, NSDate;

@interface WFTriggerEvent : WFDatabaseObjectDescriptor {

	char _confirmed;
	NSString* _triggerID;
	NSData* _eventInfo;
	NSDate* _dateCreated;

}

@property (nonatomic,copy,readonly) NSString * triggerID;              //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,copy,readonly) NSData * eventInfo;                //@synthesize eventInfo=_eventInfo - In the implementation block
@property (nonatomic,readonly) NSDate * dateCreated;                   //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) char confirmed;                           //@synthesize confirmed=_confirmed - In the implementation block
-(NSDate *)dateCreated;
-(char)confirmed;
-(void)setConfirmed:(char)arg1 ;
-(NSData *)eventInfo;
-(NSString *)triggerID;
-(id)initWithIdentifier:(id)arg1 triggerID:(id)arg2 eventInfo:(id)arg3 confirmed:(char)arg4 dateCreated:(id)arg5 ;
@end

