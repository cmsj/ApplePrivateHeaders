/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSLog.framework/Versions/A/OSLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSLog/OSLogEntry.h>
#import <OSLog/OSLogEntryFromProcess.h>

@class NSString;

@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess> {

	int _processIdentifier;
	unsigned long long _activityIdentifier;
	NSString* _process;
	NSString* _sender;
	unsigned long long _threadIdentifier;
	unsigned long long _parentActivityIdentifier;

}

@property (nonatomic,readonly) unsigned long long parentActivityIdentifier;              //@synthesize parentActivityIdentifier=_parentActivityIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long activityIdentifier;                    //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * process;                                       //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                        //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) unsigned long long threadIdentifier;                      //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
-(int)processIdentifier;
-(NSString *)sender;
-(NSString *)process;
-(unsigned long long)threadIdentifier;
-(unsigned long long)activityIdentifier;
-(id)initWithEventProxy:(id)arg1 ;
-(unsigned long long)parentActivityIdentifier;
@end

