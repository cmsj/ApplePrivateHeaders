/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface AMDelayedUpdateManager : NSObject {

	NSMutableSet* _updaters;

}

@property (retain) NSMutableSet * updaters;              //@synthesize updaters=_updaters - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)applicationWillTerminate:(id)arg1 ;
-(NSMutableSet *)updaters;
-(void)addUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)setUpdaters:(NSMutableSet *)arg1 ;
-(void)performDelayedUpdates;
-(void)cancelDelayedUpdate;
-(void)startDelayedUpdate;
-(void)removeUpdaterInfo:(id)arg1 ;
-(void)removeUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
@end

