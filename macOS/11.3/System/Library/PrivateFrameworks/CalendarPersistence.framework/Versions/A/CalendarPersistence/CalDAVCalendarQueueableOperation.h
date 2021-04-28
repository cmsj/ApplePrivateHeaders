/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

@class NSString;

@interface CalDAVCalendarQueueableOperation : CalDAVPersistentQueueableOperation {

	NSString* _sourceUID;

}

@property (copy,readonly) NSString * sourceUID;              //@synthesize sourceUID=_sourceUID - In the implementation block
-(id)initWithChangeRequest:(id)arg1 andSession:(id)arg2 ;
-(NSString *)sourceUID;
-(void)configureOperationDependencies;
-(id)initWithChangeRequest:(id)arg1 sourceUID:(id)arg2 andSession:(id)arg3 ;
@end
