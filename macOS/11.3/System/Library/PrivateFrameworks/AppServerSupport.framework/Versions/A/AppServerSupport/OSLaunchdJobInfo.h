/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/Versions/A/AppServerSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OSLaunchdJobExitStatus;

@interface OSLaunchdJobInfo : NSObject {

	int _pid;
	int _lastSpawnError;
	long long _state;
	OSLaunchdJobExitStatus* _lastExitStatus;

}

@property (nonatomic,readonly) long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) int lastSpawnError;                                   //@synthesize lastSpawnError=_lastSpawnError - In the implementation block
@property (nonatomic,readonly) OSLaunchdJobExitStatus * lastExitStatus;              //@synthesize lastExitStatus=_lastExitStatus - In the implementation block
-(id)initWithState:(long long)arg1 pid:(int)arg2 lastSpawnError:(int)arg3 lastExitStatus:(id)arg4 ;
-(int)lastSpawnError;
-(OSLaunchdJobExitStatus *)lastExitStatus;
-(long long)state;
-(int)pid;
@end

