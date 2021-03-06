/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableDictionary;

@interface FBSProfileManager : NSObject {

	char _started;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSSet* _workQueue_managedApplicationBundleIDs;
	NSMutableDictionary* _workQueue_profilesBySignerIdentity;

}

@property (getter=isStarted,nonatomic,readonly) char started; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)isStarted;
-(void)_workQueue_reloadProfiles;
-(void)_workQueue_reloadManagedApplicationBundleIDs;
-(void)startService;
-(char)isManaged:(id)arg1 ;
-(id)profilesForSignerIdentity:(id)arg1 ;
-(void)_reloadProfiles;
-(void)_managedAppsChangedNotification:(id)arg1 ;
@end

