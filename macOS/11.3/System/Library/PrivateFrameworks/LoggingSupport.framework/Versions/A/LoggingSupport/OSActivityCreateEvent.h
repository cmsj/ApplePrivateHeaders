/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityCreateEvent : OSActivityEvent {

	unsigned long long _creatorActivityID;
	unsigned long long _creatorProcessUniqueID;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,readonly) unsigned long long creatorActivityID;                   //@synthesize creatorActivityID=_creatorActivityID - In the implementation block
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueID;              //@synthesize creatorProcessUniqueID=_creatorProcessUniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;                //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
-(void)_addProperties:(id)arg1 ;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(unsigned long long)creatorActivityID;
-(unsigned long long)creatorProcessUniqueID;
-(unsigned long long)senderProgramCounter;
@end

