/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OITSUProgress.h>

@protocol OS_dispatch_queue;
@class OITSUScaledProgressStorage, OITSUProgress, NSObject;

@interface OITSUScaledProgress : OITSUProgress {

	OITSUScaledProgressStorage* mStorage;
	OITSUProgress* mProgress;
	id mProgressObserver;
	NSObject*<OS_dispatch_queue> mProgressQueue;

}

@property (retain) OITSUProgress * progress; 
@property (assign) double maxValue; 
-(void)dealloc;
-(id)init;
-(double)value;
-(OITSUProgress *)progress;
-(char)isIndeterminate;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setProgress:(OITSUProgress *)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
@end

