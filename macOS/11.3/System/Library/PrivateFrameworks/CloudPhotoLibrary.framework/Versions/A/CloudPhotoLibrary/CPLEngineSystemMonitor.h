/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLNetworkWatcherDelegate.h>
#import <libobjc.A.dylib/_CPLScheduledOverrideDelegate.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, CPLNetworkWatcher, NSMutableDictionary, CPLEngineLibrary, NSString;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLEngineComponent> {

	char _closed;
	NSURL* _volumeURL;
	NSObject*<OS_dispatch_queue> _queue;
	CPLNetworkWatcher* _watcher;
	char _modifyingBudgetOverride;
	unsigned long long _newBudgetsToOverride;
	unsigned long long _newBudgetsToStopOverriding;
	NSMutableDictionary* _reasonsToOverrideSystemBudget;
	NSMutableDictionary* _scheduledOverrides;
	char _allowOperationsBoost;
	char _allowBackgroundOperationsBoost;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (readonly) unsigned long long diskPressureState; 
@property (readonly) unsigned long long freeDiskSpaceSize; 
@property (readonly) char isNetworkConnected; 
@property (readonly) char isNetworkConstrained; 
@property (readonly) char isOnCellularOrUnknown; 
@property (readonly) char isDataBudgetOverriden; 
@property (readonly) char canBoostOperations; 
@property (readonly) char canBoostBackgroundOperations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)descriptionForBudget:(unsigned long long)arg1 ;
+(id)descriptionForBudgets:(unsigned long long)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)componentName;
-(char)isNetworkConstrained;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(unsigned long long)diskPressureState;
-(void)scheduledOverrideDidEnd:(id)arg1 ;
-(void)watcher:(id)arg1 stateDidChangeToNetworkState:(id)arg2 ;
-(void)updateDiskPressureState;
-(unsigned long long)freeDiskSpaceSize;
-(char)isNetworkConnected;
-(char)isOnCellularOrUnknown;
-(char)canBoostOperations;
-(char)canBoostBackgroundOperations;
-(void)_startOverridingBudget:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_stopOverridingBudget:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_withSystemBudgetOverride:(/*^block*/id)arg1 ;
-(void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1 ;
-(void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1 ;
-(char)isDataBudgetOverriden;
@end
