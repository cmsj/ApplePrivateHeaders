/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class NSMutableArray;

@interface PHRecyclableObjectVendor : NSObject {

	NSMutableArray* _recycledObjects;
	Class _targetClass;
	os_unfair_lock_s _lock;
	char _repsondsToPrepareForReuse;
	char _threadSafe;
	/*^block*/id _builder;

}
-(id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(char)arg2 initialPoolSize:(long long)arg3 prototypeStep:(/*^block*/id)arg4 ;
-(id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(char)arg2 initialPoolSize:(long long)arg3 ;
-(id)dequeueRecyclableObject;
-(void)recycleObject:(id)arg1 ;
@end

