/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Versions/A/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CDDataAccess/CDDataAccess-Structs.h>
@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject {

	os_unfair_lock_s _lock;
	NSString* _buildVersion;
	NSMutableDictionary* _l_refreshingWaiters;
	NSMutableDictionary* _l_failedWaiters;
	NSMutableDictionary* _l_restrictedWaiters;

}

@property (nonatomic,retain) NSString * buildVersion;                                //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * l_refreshingWaiters;              //@synthesize l_refreshingWaiters=_l_refreshingWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * l_failedWaiters;                  //@synthesize l_failedWaiters=_l_failedWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * l_restrictedWaiters;              //@synthesize l_restrictedWaiters=_l_restrictedWaiters - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                                //@synthesize lock=_lock - In the implementation block
+(id)sharedBabysitter;
-(void)dealloc;
-(id)init;
-(os_unfair_lock_s)lock;
-(id)_init;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)giveAccountWithIDAnotherChance:(id)arg1 ;
-(char)accountWithIDShouldContinue:(id)arg1 ;
-(void)_diagnosticReportWithWaiterID:(id)arg1 failureCount:(int)arg2 ;
-(void)_l_reloadBabysitterWaitersWithRefreshingWaitersPrefs:(id)arg1 failedWaitersPrefs:(id)arg2 restrictedWaitersPrefs:(id)arg3 ;
-(void)_reloadBabysitterProperties;
-(void)_l_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(void)_l_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2 ;
-(char)accountShouldContinue:(id)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(char)registerAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)_l_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(void)_l_giveAccountWithIDAnotherChance:(id)arg1 ;
-(id)_populatedStringDictionaryWithWaitersDictionary:(id)arg1 ;
-(id)tokenByRegisteringAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)statusReportWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)l_refreshingWaiters;
-(void)setL_refreshingWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)l_failedWaiters;
-(void)setL_failedWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)l_restrictedWaiters;
-(void)setL_restrictedWaiters:(NSMutableDictionary *)arg1 ;
@end

