/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) char activityAvailable; 
-(void)dealloc;
-(id)init;
-(char)isActivityAvailable;
-(long long)overrideOscarSideband:(char)arg1 withState:(long long)arg2 ;
-(long long)simulateMotionState:(char)arg1 withState:(long long)arg2 ;
-(long long)simulateMotionStateYouthWithState:(long long)arg1 ;
-(void)setActivityHandler:(id)arg1 ;
-(id)activityHandler;
@end

