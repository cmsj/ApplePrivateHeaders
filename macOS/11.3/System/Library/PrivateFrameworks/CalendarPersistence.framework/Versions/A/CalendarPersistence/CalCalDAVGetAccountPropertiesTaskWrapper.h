/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalCalDAVSynchronousTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVGetAccountPropertiesTaskGroupDelegate.h>

@class NSString;

@interface CalCalDAVGetAccountPropertiesTaskWrapper : CalCalDAVSynchronousTaskGroup <CoreDAVGetAccountPropertiesTaskGroupDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
@end

