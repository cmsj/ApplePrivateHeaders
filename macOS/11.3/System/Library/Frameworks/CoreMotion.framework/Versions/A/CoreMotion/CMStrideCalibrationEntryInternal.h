/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CMStrideCalibrationEntry.h>

@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry

@property (nonatomic,readonly) unsigned pacebin; 
@property (nonatomic,readonly) double kvalue; 
@property (nonatomic,readonly) double kvalueTrack; 
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) int session; 
-(id)description;
-(double)score;
-(int)session;
-(unsigned)pacebin;
-(double)kvalue;
-(double)kvalueTrack;
@end

