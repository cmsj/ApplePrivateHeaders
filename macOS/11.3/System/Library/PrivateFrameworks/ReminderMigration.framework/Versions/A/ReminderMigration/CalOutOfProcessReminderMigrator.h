/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/Versions/A/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalReminderMigrator.h>

@class NSURL, NSString;

@interface CalOutOfProcessReminderMigrator : NSObject <CalReminderMigrator> {

	NSURL* _urlForTool;

}

@property (nonatomic,readonly) NSURL * urlForTool;                  //@synthesize urlForTool=_urlForTool - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)attemptMigrationWithHomeDirectory:(id)arg1 ;
-(id)initWithURLForTool:(id)arg1 ;
-(char)_invokeToolWithArgument:(id)arg1 ;
-(NSURL *)urlForTool;
-(id)initWithBundleContainingTool:(id)arg1 ;
-(char)testInvocationWithSuccess:(char)arg1 ;
@end

