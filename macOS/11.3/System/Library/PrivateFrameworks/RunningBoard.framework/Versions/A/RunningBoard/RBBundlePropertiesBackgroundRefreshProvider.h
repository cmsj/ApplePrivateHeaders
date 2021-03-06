/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RunningBoard/RunningBoard-Structs.h>
@class NSCache;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject {

	NSCache* _backgroundRefreshStateByIdentity;
	os_unfair_lock_s _lock;

}
-(char)isBackgroundRefreshEnabledForIdentity:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)removeIdentity:(id)arg1 ;
@end

