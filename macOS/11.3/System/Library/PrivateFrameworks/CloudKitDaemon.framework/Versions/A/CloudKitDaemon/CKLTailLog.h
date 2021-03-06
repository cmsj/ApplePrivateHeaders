/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSActivityStream.h>
#import <libobjc.A.dylib/OSLogPersistenceDelegate.h>
#import <libobjc.A.dylib/OSActivityStreamDelegate.h>

@protocol OS_dispatch_queue;
@class OSLogPersistence, OSActivityStream, NSMutableArray, NSObject, NSString;

@interface CKLTailLog : OSActivityStream <OSLogPersistenceDelegate, OSActivityStreamDelegate> {

	char _stillReadingFromArchive;
	char _continueToReturnResults;
	OSLogPersistence* _logPersistence;
	OSActivityStream* _activityStream;
	NSMutableArray* _results;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) OSLogPersistence * logPersistence;               //@synthesize logPersistence=_logPersistence - In the implementation block
@property (nonatomic,retain) OSActivityStream * activityStream;               //@synthesize activityStream=_activityStream - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                        //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) char stillReadingFromArchive;                    //@synthesize stillReadingFromArchive=_stillReadingFromArchive - In the implementation block
@property (assign,nonatomic) char continueToReturnResults;                    //@synthesize continueToReturnResults=_continueToReturnResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stop;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)streamDidStop:(id)arg1 ;
-(OSActivityStream *)activityStream;
-(char)activityStream:(id)arg1 results:(id)arg2 ;
-(void)streamDidFail:(id)arg1 error:(id)arg2 ;
-(void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(char)persistence:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)startFromStartDate:(id)arg1 ;
-(OSLogPersistence *)logPersistence;
-(void)setLogPersistence:(OSLogPersistence *)arg1 ;
-(void)setActivityStream:(OSActivityStream *)arg1 ;
-(char)stillReadingFromArchive;
-(void)setStillReadingFromArchive:(char)arg1 ;
-(char)continueToReturnResults;
-(void)setContinueToReturnResults:(char)arg1 ;
@end

