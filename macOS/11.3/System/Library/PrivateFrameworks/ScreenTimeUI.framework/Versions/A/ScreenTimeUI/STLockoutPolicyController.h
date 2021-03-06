/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/Versions/A/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STLockoutPolicyControllerDelegate;
@class STManagementState, STAskForTimeResource, DMFCategoryPolicyMonitor, DMFApplicationPolicyMonitor, NSURL, DMFWebsitePolicyMonitor, NSString, CNContactStore, STConversation, STConversationContext, NSArray, NSSet, CNContainer;

@interface STLockoutPolicyController : NSObject {

	unsigned long long _reuseIdentifier;
	long long _style;
	unsigned long long _stateBeforePending;
	STManagementState* _managementState;
	STAskForTimeResource* _askForTimeResource;
	DMFCategoryPolicyMonitor* _categoryPolicyMonitor;
	DMFApplicationPolicyMonitor* _applicationPolicyMonitor;
	NSURL* _websiteURL;
	DMFWebsitePolicyMonitor* _websitePolicyMonitor;
	id<STLockoutPolicyControllerDelegate> _delegate;
	NSString* _categoryIdentifier;
	NSString* _bundleIdentifier;
	CNContactStore* _contactStore;
	unsigned long long _state;
	STConversation* _conversation;
	STConversationContext* _conversationContext;
	NSArray* _contactsHandles;

}

@property (retain) STConversation * conversation;                               //@synthesize conversation=_conversation - In the implementation block
@property (retain) STConversationContext * conversationContext;                 //@synthesize conversationContext=_conversationContext - In the implementation block
@property (copy) NSArray * contactsHandles;                                     //@synthesize contactsHandles=_contactsHandles - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * websiteURL;                                  //@synthesize websiteURL=_websiteURL - In the implementation block
@property (copy,readonly) NSSet * blockedContactsHandles; 
@property (readonly) CNContactStore * contactStore;                             //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) CNContainer * iCloudContainer; 
@property (readonly) char contactsEditable; 
@property (readonly) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (readonly) char needsToSetRestrictionsPasscode; 
@property (readonly) char shouldAllowOneMoreMinute; 
-(void)dealloc;
-(id)init;
-(unsigned long long)state;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(STConversation *)conversation;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)categoryIdentifier;
-(void)setConversation:(STConversation *)arg1 ;
-(NSURL *)websiteURL;
-(void)setWebsiteURL:(NSURL *)arg1 ;
-(CNContactStore *)contactStore;
-(char)contactsEditable;
-(char)needsToSetRestrictionsPasscode;
-(void)authenticateRestrictionsPasscode:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(STConversationContext *)conversationContext;
-(char)shouldAllowOneMoreMinute;
-(void)_setupCategoryPolicyMonitorForIdentifier:(id)arg1 ;
-(void)_setupWebsitePolicyMonitorForURL:(id)arg1 ;
-(void)setConversationContext:(STConversationContext *)arg1 ;
-(void)_updateAllowedByScreenTime:(char)arg1 applicationCurrentlyLimited:(char)arg2 allowedByContactsHandle:(id)arg3 ;
-(void)_changePolicyToCurrentWithBundleIdentifier:(id)arg1 ;
-(void)_changePolicyToCurrent;
-(char)_requestAdditionalTime:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)_actionRemindMeInMinutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_actionRemindMeInOneHourWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_actionOneMoreMinuteWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_actionIgnoreLimitForTodayWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)contactsHandles;
-(void)_changePolicyToCurrentWithCategoryIdentifier:(id)arg1 ;
-(void)_changePolicyToCurrentWithURL:(id)arg1 ;
-(void)_allowedByScreenTimeDidChange:(char)arg1 conversationContext:(id)arg2 ;
-(void)_applicationCurrentlyLimitedDidChange:(char)arg1 conversationContext:(id)arg2 ;
-(void)_allowedByContactsHandleDidChange:(id)arg1 conversationContext:(id)arg2 ;
-(char)_changeInternalStateTo:(unsigned long long)arg1 ;
-(void)_handleChangeToPolicy:(long long)arg1 ;
-(id)_makeAskForTimeResource;
-(double)_timeIntervalToEndOfDay;
-(void)_authenticatedApproveForAdditionalTime:(double)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_askForTimeResponseWithState:(long long)arg1 respondingParent:(id)arg2 amountGranted:(id)arg3 error:(id)arg4 ;
-(void)_changeStateToBeforePending;
-(id)initWithCategoryIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)initWithWebsiteURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2 delegate:(id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3 delegate:(id)arg4 ;
-(char)handleAction:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSSet *)blockedContactsHandles;
-(CNContainer *)iCloudContainer;
-(char)_shouldRequestMoreTime;
-(char)_isRestrictionsPasscodeSet;
-(void)_changeStateToInitial;
-(void)setContactsHandles:(NSArray *)arg1 ;
@end

