/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/Versions/A/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXPidSuspensionInfo : NSObject {

	NSMutableDictionary* _suspendsPids;
	NSMutableDictionary* _probationPids;
	NSMutableDictionary* _tentativeSuspendedPids;
	NSMutableDictionary* _associatedRemotePidCache;
	NSMutableDictionary* _associatedRemotePids;

}
+(id)shared;
-(id)init;
-(id)timeoutProbationPidsForDisplay:(int)arg1 ;
-(id)suspendedPidsForDisplay:(int)arg1 ;
-(id)associatedRemotePidCacheForDisplay:(int)arg1 ;
-(id)tentativeSuspendedPidsForDisplay:(int)arg1 ;
-(id)associatedRemotePidsForDisplay:(int)arg1 ;
@end

