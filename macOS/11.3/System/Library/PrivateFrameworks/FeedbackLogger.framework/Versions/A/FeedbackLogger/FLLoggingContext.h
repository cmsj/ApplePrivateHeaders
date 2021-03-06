/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FeedbackLogger.framework/Versions/A/FeedbackLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FLLoggingContext.h>
@class NSString, NSFileManager, NSUserDefaults;


@protocol FLLoggingContext <FLTelemetryReporter>
@property (nonatomic,readonly) unsigned long long now; 
@property (nonatomic,copy,readonly) NSString * timestampReferenceIdentifier; 
@property (nonatomic,readonly) NSFileManager * fileManager; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSUserDefaults * userDefaults; 
@required
-(unsigned long long)now;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSFileManager *)fileManager;
-(NSUserDefaults *)userDefaults;
-(NSString *)timestampReferenceIdentifier;

@end


@protocol OS_dispatch_queue;
@class NSString, NSFileManager, NSUserDefaults, NSObject;

@interface FLLoggingContext : NSObject <FLLoggingContext> {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;
	NSString* _timestampReferenceIdentifier;
	NSFileManager* _fileManager;

}

@property (nonatomic,copy) NSString * timestampReferenceIdentifier;              //@synthesize timestampReferenceIdentifier=_timestampReferenceIdentifier - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                        //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) unsigned long long now; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)now;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSFileManager *)fileManager;
-(id)initWithFileManager:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(NSString *)timestampReferenceIdentifier;
-(void)setTimestampReferenceIdentifier:(NSString *)arg1 ;
-(void)report:(id)arg1 payload:(id)arg2 ;
-(void)setFileManager:(NSFileManager *)arg1 ;
@end

