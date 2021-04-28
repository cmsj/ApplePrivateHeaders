/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraClip.h>

@class NSURL;

@interface HMDemoCameraClip : HMCameraClip {

	NSURL* _clipURL;

}

@property (copy,readonly) NSURL * clipURL;              //@synthesize clipURL=_clipURL - In the implementation block
-(id)initWithClipURL:(id)arg1 startDate:(id)arg2 duration:(double)arg3 significantEvents:(id)arg4 ;
-(id)initWithCameraProfile:(id)arg1 clipURL:(id)arg2 startDate:(id)arg3 duration:(double)arg4 significantEvents:(id)arg5 ;
-(NSURL *)clipURL;
@end
