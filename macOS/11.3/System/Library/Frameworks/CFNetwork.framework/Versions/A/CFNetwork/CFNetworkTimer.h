/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CFNetworkTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _lastResumeTime;
	double _lastPauseTime;
	double _runTime;
	int _state;

}
-(void)dealloc;
@end

