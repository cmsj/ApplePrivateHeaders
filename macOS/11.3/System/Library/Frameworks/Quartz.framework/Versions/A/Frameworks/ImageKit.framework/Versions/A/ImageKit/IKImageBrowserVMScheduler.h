/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class IKImageBrowserView, NSDate;

@interface IKImageBrowserVMScheduler : NSObject {

	IKImageBrowserView* _browser;
	char _pause;
	char _idle;
	char _scheduleShouldAbort;
	char _needScheduleVMForScrolling;
	int _scrollScheduleIndex;
	id _firstImageScheduled;
	int _vramBindedCount;
	NSRange _zoomScheduleItemRange;
	NSDate* _lastDebugDisplay;

}
-(NSRange)currentVRamBindedRange;
-(char)hasVRamLeftToContinueSchedule;
-(void)setFirstImageScheduled:(id)arg1 ;
-(char)hasRamLeftToContinueSchedule;
-(void)scrollScheduleStep;
-(void)browserScroll;
-(void)browserZoom;
-(void)browserDatasourceChanged;
-(void)startSchedule;
-(void)abortSchedule;
-(id)scheduleProgress;
-(id)scheduleTaskPriority;
-(void)dealloc;
-(void)setBrowser:(id)arg1 ;
-(id)browser;
-(void)schedule;
@end
