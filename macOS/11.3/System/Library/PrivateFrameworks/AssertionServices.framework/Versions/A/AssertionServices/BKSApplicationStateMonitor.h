/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/Versions/A/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessMonitor, NSArray;

@interface BKSApplicationStateMonitor : NSObject {

	os_unfair_lock_s _lock;
	RBSProcessMonitor* _monitor;
	NSArray* _interestedAssertionReasons;
	char _elevatedPriority;
	unsigned _interestedStates;
	NSArray* _interestedBundleIDs;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned interestedStates;                       //@synthesize interestedStates=_interestedStates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * interestedBundleIDs;              //@synthesize interestedBundleIDs=_interestedBundleIDs - In the implementation block
@property (nonatomic,readonly) char elevatedPriority;                           //@synthesize elevatedPriority=_elevatedPriority - In the implementation block
-(id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned)arg3 elevatedPriority:(char)arg4 ;
-(void)lock_updateConfiguration;
-(unsigned)interestedStates;
-(void)updateInterestedBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(id)_legacyInfoForProcess:(id)arg1 ;
-(unsigned)_legacyStateForProcess:(id)arg1 state:(id)arg2 ;
-(id)_legacyInfoForProcess:(id)arg1 state:(id)arg2 ;
-(char)_clientSubscribedToThisStateChange:(id)arg1 state:(id)arg2 prevState:(id)arg3 ;
-(char)_clientSubscribedToThisReasonChange:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 isUserInteractive:(char)arg3 ;
-(char)elevatedPriority;
-(void)updateInterestedAssertionReasons:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(unsigned)mostElevatedApplicationStateForPID:(int)arg1 ;
-(id)applicationInfoForApplication:(id)arg1 ;
-(void)updateInterestedStates:(unsigned)arg1 ;
-(void)updateInterestedBundleIDs:(id)arg1 ;
-(void)applicationInfoForPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2 ;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 elevatedPriority:(char)arg3 ;
-(unsigned)applicationStateForApplication:(id)arg1 ;
-(NSArray *)interestedBundleIDs;
-(char)isApplicationBeingDebugged:(id)arg1 ;
-(void)applicationInfoForApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

