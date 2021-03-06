/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/Versions/A/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMDPersistence/IMDPersistence-Structs.h>
@class UNUserNotificationCenter, UNNotificationCategory, IMBusinessNameManager, CNContact, NSSet;

@interface IMDNotificationsController : NSObject {

	long long _lastAlertedMessageDate;
	long long _lastAlertedFailedMessageDate;
	UNUserNotificationCenter* _notificationCenter;
	UNNotificationCategory* _incomingMessageNotificationCategory;
	UNNotificationCategory* _incomingFilesNotificationCategory;
	IMBusinessNameManager* _businessNameManager;
	CNContact* _meContact;
	NSSet* _meTokens;
	NSSet* _activeAccountAliases;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;                             //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) UNNotificationCategory * incomingMessageNotificationCategory;              //@synthesize incomingMessageNotificationCategory=_incomingMessageNotificationCategory - In the implementation block
@property (nonatomic,retain) UNNotificationCategory * incomingFilesNotificationCategory;                //@synthesize incomingFilesNotificationCategory=_incomingFilesNotificationCategory - In the implementation block
@property (nonatomic,retain) IMBusinessNameManager * businessNameManager;                               //@synthesize businessNameManager=_businessNameManager - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                     //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) NSSet * meTokens;                                                          //@synthesize meTokens=_meTokens - In the implementation block
@property (nonatomic,retain) NSSet * activeAccountAliases;                                              //@synthesize activeAccountAliases=_activeAccountAliases - In the implementation block
@property (assign) long long lastAlertedMessageDate; 
@property (assign) long long lastAlertedFailedMessageDate; 
+(id)sharedInstance;
+(id)_addressForHandle:(IMDHandleRecordStructRef)arg1 ;
+(id)_truncateNameIfNeeded:(id)arg1 ;
+(int)validateAlertCount:(int)arg1 ;
+(int)reminderAlertCount;
+(id)_IMDCoreSpotlightCNContactForAddress:(id)arg1 ;
+(id)_uncanonicalizedAddressForHandle:(IMDHandleRecordStructRef)arg1 ;
+(id)_addressBookNameForAddress:(id)arg1 orContact:(id)arg2 ;
+(id)_countryCodeForHandle:(IMDHandleRecordStructRef)arg1 ;
+(id)_formattedDisplayStringForAddress:(id)arg1 countryCode:(id)arg2 ;
+(id)_displayNameForHandle:(IMDHandleRecordStructRef)arg1 andContact:(id)arg2 suggestionProvider:(/*^block*/id)arg3 ;
+(id)_displayNameForBusinessChatAddress:(id)arg1 businessNameManager:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(UNUserNotificationCenter *)notificationCenter;
-(id)allTokens;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)postNotificationsWithContext:(id)arg1 ;
-(void)retractNotificationsForReadMessages:(id)arg1 ;
-(void)repostNotificationsFromFirstUnlockWithContext:(id)arg1 ;
-(void)postUrgentNotificationForMessages:(id)arg1 withContext:(id)arg2 ;
-(void)postFirstUnlockMessage:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_setupFirstLoad;
-(void)_setUpNotificationCenter;
-(void)_setupBusinessNameManager;
-(void)_setupMeContactAndTokens;
-(void)setBusinessNameManager:(IMBusinessNameManager *)arg1 ;
-(id)_makeNotificationCategories;
-(id)madridCategoryWithIdentifier:(id)arg1 actions:(id)arg2 ;
-(id)madridGroupCategoryWithIdentifier:(id)arg1 actions:(id)arg2 ;
-(id)SMSCategoryWithIdentifier:(id)arg1 actions:(id)arg2 ;
-(void)setMeTokens:(NSSet *)arg1 ;
-(void)_migrateLastedPostedPreferencesIfNeeded;
-(void)_storeLastAlertedMessageDate:(long long)arg1 ;
-(void)setLastAlertedMessageDate:(long long)arg1 ;
-(void)_storeLastAlertedFailedMessageDate:(long long)arg1 ;
-(void)setLastAlertedFailedMessageDate:(long long)arg1 ;
-(id)_chatDictionaryForMessageRecord:(IMDMessageRecordStruct*)arg1 ;
-(id)_messages:(id)arg1 newerThanDate:(long long)arg2 ;
-(id)_messagesSortedByDate:(id)arg1 ;
-(id)_generateNotificationRequestForMessageRecord:(IMDMessageRecordStruct*)arg1 isUrgentMessage:(char)arg2 isCarouselUITriggered:(char)arg3 isMostActive:(char)arg4 shouldAdvanceLastAlertedMessageDate:(char*)arg5 ;
-(void)advanceLastAlertedMessageDate:(long long)arg1 ;
-(void)_shouldPostNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_generateNotificationRequestForDeliveryError:(IMDMessageRecordStruct*)arg1 isCarouselUITriggered:(char)arg2 ;
-(void)advanceLastAlertedFailedMessageDate:(long long)arg1 ;
-(long long)lastAlertedMessageDate;
-(long long)lastAlertedFailedMessageDate;
-(void)_registerUserNotificationsForFailedDeliveryMessageRecords:(id)arg1 isCarouselUITriggered:(char)arg2 ;
-(void)_registerUserNotificationsForMessageRecords:(id)arg1 newerThanDate:(long long)arg2 areUrgentMessages:(char)arg3 isCarouselUITriggered:(char)arg4 isMostActiveDevice:(char)arg5 ;
-(void)_postNotifications;
-(void)__postNotificationsIsMostActiveDevice:(char)arg1 ;
-(void)_isMostActiveDeviceWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setActiveAccountAliases:(NSSet *)arg1 ;
-(id)defaultsSharedInstance;
-(char)_messageIsBusiness:(id)arg1 ;
-(char)_amIMentionedInMessage:(id)arg1 ;
-(char)_isRaiseGestureEnabled;
-(id)_displayNameForHandle:(IMDHandleRecordStructRef)arg1 andContact:(id)arg2 ;
-(id)_displayNameForBusinessChatAddress:(id)arg1 ;
-(char)_isPlaySoundEnabled;
-(id)_messageReceivedSoundIdentifier;
-(id)_previewFileURLForTransferURL:(id)arg1 utiType:(id)arg2 ;
-(void)_proceedMostActiveDevice:(char)arg1 isBlockCalled:(char*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_getMessagesSpokenWhitelistLevel:(char*)arg1 ;
-(char)_messageIsFromKnownContact:(id)arg1 ;
-(char)_messageIsFromFavorite:(id)arg1 ;
-(id)_lastTwoMessagesForChat:(IMDChatRecordStruct*)arg1 ;
-(id)_suggestedDisplayNameForAddress:(id)arg1 ;
-(id)_nicknameDisplayNameForID:(id)arg1 ;
-(id)_nicknameInfoForAddress:(id)arg1 ;
-(IMBusinessNameManager *)businessNameManager;
-(char)_filteringSettingConfirmed;
-(char)_isUnknownSenderFilteringOn;
-(char)_chatHasDNDSet:(id)arg1 ;
-(char)_notificationIsFromAFilteredSender:(id)arg1 messageDictionary:(id)arg2 ;
-(NSSet *)meTokens;
-(NSSet *)activeAccountAliases;
-(char)areMyTokens:(id)arg1 inMessage:(id)arg2 ;
-(char)_overrideDNDForMessagesAddressingMe;
-(char)_haveMigrated;
-(unsigned long long)screenTimeNotificationOptionsForContext:(id)arg1 ;
-(id)_messageDictionaryForMessageRecord:(IMDMessageRecordStruct*)arg1 copyThreadOriginator:(char)arg2 ;
-(char)_messageShouldBeSilentlyDeliveredForBusinessChat:(id)arg1 ;
-(unsigned long long)screenTimeNotificationOptionsForChatDictionary:(id)arg1 ;
-(char)_shouldOverrideChatSilencingBecauseImMentioned:(id)arg1 ;
-(char)_messageShouldBeSpoken:(id)arg1 chatDictionary:(id)arg2 isMostActive:(char)arg3 ;
-(char)_shouldPostNotificationForChat:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateBasicNotificationIdentifyingContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isCarouselUITriggered:(char)arg4 ;
-(void)_populateBodyForNotificationContent:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateTitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 ;
-(void)_populateSubtitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 ;
-(void)_populateSoundAndDisplayActivationForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isMostActive:(char)arg4 ;
-(void)_populateIgnoresDoNotDisturb:(id)arg1 messageDictionary:(id)arg2 isUrgentMessage:(char)arg3 ;
-(void)_populateAttachmentsForNotificationContent:(id)arg1 messageDictionary:(id)arg2 messageRecord:(IMDMessageRecordStruct*)arg3 ;
-(void)_populateUserInfoOnContentForWatch:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3 isCarouselUITriggered:(char)arg4 ;
-(void)_populateNotificationCategoryContent:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3 ;
-(void)_populateUserInfoForMessageContent:(id)arg1 messageDictionary:(id)arg2 messageIsAddressedToMe:(char)arg3 ;
-(void)_populateRealertCountForNotificationContent:(id)arg1 ;
-(id)_messageDictionaryForMessageRecord:(IMDMessageRecordStruct*)arg1 ;
-(void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_populateBodyAndTitleForSendFailedNotificationContent:(id)arg1 messageDictionary:(id)arg2 ;
-(void)_setContactInMessageDictionary:(IMDHandleRecordStructRef)arg1 messageDictionary:(id)arg2 ;
-(char)_chatHasDNDSetBasedOnChatGUID:(id)arg1 chatIdentifier:(id)arg2 groupID:(id)arg3 handles:(id)arg4 lastAddressedHandleString:(id)arg5 originalGroupID:(id)arg6 style:(long long)arg7 ;
-(id)_lastMessageTimeForChat:(IMDChatRecordStruct*)arg1 ;
-(char)_chatHasDNDSetBasedOnDNDIdentifier:(id)arg1 ;
-(id)_groupHashForHandles:(id)arg1 lastAddressedHandle:(id)arg2 ;
-(id)_previewFileURLForTransferURL:(id)arg1 ;
-(char)_UTITypeMightBeAnimated:(id)arg1 ;
-(char)_fileURLIsActuallyAnimated:(id)arg1 ;
-(char)_handleIsSpokenMessageWhitelisted:(IMDHandleRecordStructRef)arg1 chat:(id)arg2 message:(id)arg3 ;
-(unsigned long long)_getSpokenMessageWhitelistLevelVersion;
-(void)_setSpokenMessageWhitelistLevelVersion:(unsigned long long)arg1 ;
-(void)_setMessagesSpokenWhitelistLevelInPreferences:(unsigned long long)arg1 ;
-(void)_setUpSuggestionService;
-(char)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
-(char)_isSpamFilteringOn;
-(UNNotificationCategory *)incomingMessageNotificationCategory;
-(void)setIncomingMessageNotificationCategory:(UNNotificationCategory *)arg1 ;
-(UNNotificationCategory *)incomingFilesNotificationCategory;
-(void)setIncomingFilesNotificationCategory:(UNNotificationCategory *)arg1 ;
@end

