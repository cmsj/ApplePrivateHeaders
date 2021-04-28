/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate;

@interface HMDCameraRecordingReachabilityEventModel : HMBModel

@property (retain) NSNumber * reachableField; 
@property (retain) NSDate * dateOfOccurrence; 
@property (assign) char reachable; 
+(id)hmbProperties;
+(id)hmbExternalRecordType;
-(void)setReachable:(char)arg1 ;
-(char)reachable;
-(id)createEvent;
@end
