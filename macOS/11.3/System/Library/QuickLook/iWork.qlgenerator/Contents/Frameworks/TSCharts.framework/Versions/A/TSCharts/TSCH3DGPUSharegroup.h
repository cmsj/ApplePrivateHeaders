/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DSharegroup.h>

@class TSCH3DContext, NSRecursiveLock;

@interface TSCH3DGPUSharegroup : TSCH3DSharegroup {

	TSCH3DContext* _GPUContext;
	long long _lockLevel;
	NSRecursiveLock* _lock;

}
+(id)sharegroupForToken:(id)arg1 ;
+(char)hasInterestForSharegroupToken:(id)arg1 ;
+(void)addInterestForSharegroupTokens:(id)arg1 ;
+(void)removeInterestForSharegroupTokens:(id)arg1 ;
+(void)flushSharegroupForToken:(id)arg1 ;
+(void)deleteSharegroupForToken:(id)arg1 ;
-(id)description;
-(void)lock;
-(void)unlock;
-(id)GPUContext;
-(void)garbageCollectAllUnretainedResources;
-(void)garbageCollectResources:(id)arg1 ;
-(id)initWithOwningThread:(id)arg1 token:(id)arg2 ;
-(void)p_owningThreadWillChange;
-(void)p_flushCache;
-(void)p_flushPurgeableResourceSet;
-(void)p_forceFlushResourceSet:(id)arg1 ;
-(id)targetThreadForFlushing;
-(char)debug_isInteractive;
-(id)initWithOwningThread:(id)arg1 token:(id)arg2 context:(id)arg3 ;
-(void)p_clearContextInCurrentThread;
-(void)updateSharegroupMapToken:(id)arg1 ;
@end
