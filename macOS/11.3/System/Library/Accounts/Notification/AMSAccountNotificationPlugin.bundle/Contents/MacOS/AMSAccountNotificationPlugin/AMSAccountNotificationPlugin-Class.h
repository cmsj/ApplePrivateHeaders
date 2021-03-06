/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/Contents/MacOS/AMSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AMSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldProcessChangeForAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 ;
+(id)_stringForAccountChangeType:(int)arg1 ;
+(void)_postAccountsChangedNotificationsIfNeededForAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 ;
+(void)_postStorefontChangedNotificationIfNeededForAccount:(id)arg1 oldAccount:(id)arg2 store:(id)arg3 ;
+(void)_updateLocalAccountStorefrontIfNeededForAccount:(id)arg1 store:(id)arg2 ;
+(void)_saveAccount:(id)arg1 ;
+(void)_logDeltasForCookies:(id)arg1 oldCookies:(id)arg2 ;
+(void)_postAccountsChangedInternalNotification;
+(void)_postAccountsChangedNotification;
+(id)_activeStorefrontIdentifier;
+(void)_setActiveStorefrontIdentifier:(id)arg1 ;
+(void)_postStorefrontChangedNotification;
+(char)_shouldSignOutOfModifiedAccount:(id)arg1 ;
+(char)_shouldRemoveModifiedAccount:(id)arg1 ;
+(id)_mergeCookiesForAccount:(id)arg1 oldAccount:(id)arg2 ;
+(void)_removeAccount:(id)arg1 ;
+(void)_postActiveAccountChangedNotification;
-(void)_logDirtyPropertiesForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)_processAccountAddition:(id)arg1 inStore:(id)arg2 ;
-(void)_processAccountDeletion:(id)arg1 inStore:(id)arg2 ;
-(void)_processAccountModification:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(void)_processAccountFlagsForAccount:(id)arg1 oldAccount:(id)arg2 store:(id)arg3 ;
-(void)_processPrivacyAcknowledgementForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(char)_handleRemoteDeviceChangeLogicForAccountWillChange:(id)arg1 oldAccount:(id)arg2 ;
-(char)_handleAccountMediaTypeLogicForAccountWillChange:(id)arg1 ;
-(char)_handleCookieLogicForAccountWillChange:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(char)_handleLocalAccountLogicForAccountWillChange:(id)arg1 ;
-(char)_handleMultiUserLogicForAccountWillChange:(id)arg1 ;
-(char)_handlePrivacyAcknowledgementLogicForAccountWillChange:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(char)_handleSandboxAccountLogicForAccountWillChange:(id)arg1 inStore:(id)arg2 ;
-(char)_handleStorefrontLogicForAccountWillChange:(id)arg1 ;
-(char)_handleUserManagementLogicForAccountWillChange:(id)arg1 changeType:(int)arg2 ;
-(char)_canSaveAccount:(id)arg1 withOtherAccounts:(id)arg2 ;
-(void)_processiCloudAccountAddition:(id)arg1 inStore:(id)arg2 ;
-(void)_processiTunesAccountAddition:(id)arg1 inStore:(id)arg2 ;
-(void)_logoutOfAccount:(id)arg1 store:(id)arg2 ;
-(void)_processIDMSAccountModification:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(void)_processiTunesAccountModification:(id)arg1 oldAccount:(id)arg2 inStore:(id)arg3 ;
-(void)_deactivateAllAccountsExcept:(id)arg1 inStore:(id)arg2 ;
-(void)_resetBiometricsForAccount:(id)arg1 ;
-(void)_resetFollowUpsForAccount:(id)arg1 ;
-(void)_resetMusicSpecificPreferences;
-(void)_resetSpringBoardDefaultPNGSnapshots;
-(void)_resetStoreDownloadQueue;
-(void)_resetSubscriptionStatusForAccount:(id)arg1 ;
-(void)_resetDeviceOffersIfNeeded;
-(char)_mergeLocalPrivacyAcknowledgementIntoAccount:(id)arg1 withStore:(id)arg2 ;
-(id)_fetchPersonaIDIfCurrentPersonaIsEnterprise;
-(void)_processNotificationsForAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 store:(id)arg4 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(char)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

