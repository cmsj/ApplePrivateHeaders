/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSDate, NSMutableArray, PHImportTimerCollection, NSObject;

@interface PHImportBatch : NSObject {

	NSDate* _start;
	NSMutableArray* _records;
	PHImportTimerCollection* _timers;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,readonly) NSMutableArray * records;                                //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) PHImportTimerCollection * timers;                        //@synthesize timers=_timers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
-(id)init;
-(double)duration;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(PHImportTimerCollection *)timers;
-(NSMutableArray *)records;
@end
