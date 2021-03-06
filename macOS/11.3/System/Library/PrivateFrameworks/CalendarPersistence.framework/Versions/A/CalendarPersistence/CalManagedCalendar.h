/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedNode.h>
#import <CalendarPersistence/CalendarModelProtocol.h>
#import <libobjc.A.dylib/DefaultAlarmProviderProtocol.h>

@class NSString, NSSet, NSURL, CalManagedDefaultAlarmSet, CalManagedGroup, CalManagedSubscriptionInfo, NSDictionary, NSManagedObjectID;

@interface CalManagedCalendar : CalManagedNode <CalendarModelProtocol, DefaultAlarmProviderProtocol>

@property (retain) NSSet * items; 
@property (retain) CalManagedGroup * group; 
@property (retain) CalManagedSubscriptionInfo * subscriptionInfo; 
@property (assign) char alarmsDisabled; 
@property (assign) long long notificationCount; 
@property (assign) char isMarkedUndeletable; 
@property (assign) char isMarkedImmutableSharees; 
@property (assign) long long maxAttendees; 
@property (assign) char isTaskContainer; 
@property (assign) char isEventContainer; 
@property (retain) NSSet * sharees; 
@property (assign) char hasSharees; 
@property (readonly) char isAffectingAvailability; 
@property (assign) char suppressEventSchedulingNotifications; 
@property (nonatomic,retain) NSSet * alarms; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy,readonly) NSString * colorString; 
@property (nonatomic,copy,readonly) NSString * symbolicColorName; 
@property (nonatomic,readonly) char allowsContentModifications; 
@property (nonatomic,readonly) char allowReminders; 
@property (nonatomic,readonly) char allowEvents; 
@property (nonatomic,copy,readonly) id<CalendarSourceModelProtocol> containerSource; 
@property (nonatomic,readonly) char ignoreAlarms; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (nonatomic,readonly) char cachedHasSharees; 
@property (nonatomic,readonly) char isBirthday; 
@property (nonatomic,readonly) char isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) char isSubscribed; 
@property (nonatomic,readonly) char isShareable; 
@property (nonatomic,readonly) char allowsScheduling; 
@property (nonatomic,readonly) char isSubscribedHolidayCalendar; 
@property (nonatomic,readonly) char isSuggestedEventCalendar; 
@property (nonatomic,readonly) char isNaturalLanguageSuggestedEventCalendar; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * serverPath; 
@property (nonatomic,copy,readonly) NSString * notes; 
@property (nonatomic,readonly) NSString * sharingStatusString; 
@property (nonatomic,readonly) NSString * sharedOwnerName; 
@property (nonatomic,readonly) char isDefaultSchedulingCalendar; 
@property (nonatomic,readonly) char isDistinguishedExchangeCalendar; 
@property (nonatomic,readonly) NSString * sharedOwnerAddress; 
@property (nonatomic,readonly) NSSet * sharedOwnerAddresses; 
@property (nonatomic,readonly) NSString * defaultOrganizerNameForNewItems; 
@property (nonatomic,readonly) NSURL * defaultOrganizerAddressForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEmailForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerEncodedLikenessDataForNewItems; 
@property (nonatomic,readonly) NSString * defaultOrganizerPhoneNumberForNewItems; 
@property (nonatomic,readonly) char defaultOrganizerIsMeForNewItems; 
@property (nonatomic,readonly) NSURL * prePublishURL; 
@property (nonatomic,readonly) NSURL * subscriptionURL; 
@property (nonatomic,copy,readonly) NSURL * publishURL; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForTimedEvents; 
@property (nonatomic,readonly) NSSet * defaultAlarmsForAllDayEvents; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char shareDefaultAlarmSettings; 
@property (retain,readonly) CalManagedDefaultAlarmSet * defaultAlarmSet; 
@property (retain,readonly) CalManagedDefaultAlarmSet * localDefaultAlarmSet; 
+(id)pathExtension;
+(id)entityName;
+(void)enableChangeRequestNotifications;
-(long long)compare:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(char)isShareable;
-(void)setChecked:(long long)arg1 ;
-(long long)checked;
-(id)properties;
-(id)subscriptionID;
-(void)setSubscriptionID:(id)arg1 ;
-(char)isLocal;
-(long long)notificationCount;
-(void)setNotificationCount:(long long)arg1 ;
-(void)didSave;
-(char)isSuggestedEventCalendar;
-(id)refreshDate;
-(char)shouldShowInPrimaryAccounts;
-(char)isEventContainer;
-(char)isTaskContainer;
-(void)setIsEventContainer:(char)arg1 ;
-(void)setIsTaskContainer:(char)arg1 ;
-(void)willSave;
-(char)isSubscribed;
-(double)refreshInterval;
-(int)displayOrder;
-(char)isFamilyCalendar;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(long long)maxAttendees;
-(void)setPublishURL:(NSURL *)arg1 ;
-(void)setMaxAttendees:(long long)arg1 ;
-(char)isAffectingAvailability;
-(char)isRenameable;
-(void)setIsAffectingAvailability:(char)arg1 ;
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(char)allowsContentModifications;
-(char)isBirthday;
-(NSURL *)defaultOrganizerAddressForNewItems;
-(NSString *)defaultOrganizerEmailForNewItems;
-(NSString *)defaultOrganizerPhoneNumberForNewItems;
-(id<CalendarSourceModelProtocol>)containerSource;
-(char)isNaturalLanguageSuggestedEventCalendar;
-(char)allowReminders;
-(char)allowEvents;
-(char)isDefaultSchedulingCalendar;
-(void)applyReasonableDefaultsForNewCalendarInGroup:(id)arg1 ;
-(NSString *)sharingStatusString;
-(id)bestDefaultSymbolicColor;
-(char)shareDefaultAlarmSettings;
-(void)updateShareeDerivedProperties;
-(char)isColorEditable;
-(char)ignoreAlarms;
-(char)cachedHasSharees;
-(char)isFacebookBirthdayCalendar;
-(char)allowsScheduling;
-(char)isSubscribedHolidayCalendar;
-(NSString *)serverPath;
-(NSString *)sharedOwnerName;
-(char)isDistinguishedExchangeCalendar;
-(NSString *)sharedOwnerAddress;
-(NSSet *)sharedOwnerAddresses;
-(NSString *)defaultOrganizerNameForNewItems;
-(NSString *)defaultOrganizerEncodedLikenessDataForNewItems;
-(char)defaultOrganizerIsMeForNewItems;
-(NSSet *)defaultAlarmsForTimedEvents;
-(NSSet *)defaultAlarmsForAllDayEvents;
-(char)removeAlarms;
-(char)removeAttachments;
-(id)subscriptionTitle;
-(id)subscriptionNotes;
-(char)insecureConnectionAllowed;
-(void)blockingImportICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 progressBlock:(/*^block*/id)arg6 abortForIssueBlock:(/*^block*/id)arg7 finishBlock:(/*^block*/id)arg8 ;
-(void)asyncImportICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 callbackQueue:(id)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 ;
-(void)setIgnoreAlarms:(char)arg1 ;
-(void)setRemoveAttachments:(char)arg1 ;
-(void)setRemoveAlarms:(char)arg1 ;
-(void)setSubscriptionTitle:(id)arg1 ;
-(void)setSubscriptionNotes:(id)arg1 ;
-(void)setInsecureConnectionAllowed:(char)arg1 ;
-(char)isAddressMe:(id)arg1 ;
-(void)asyncImportFiles:(id)arg1 intoContext:(id)arg2 importOptionsForInsert:(unsigned long long)arg3 importOptionsForUpdate:(unsigned long long)arg4 processEvents:(char)arg5 processReminders:(char)arg6 callbackQueue:(id)arg7 progressBlock:(/*^block*/id)arg8 abortForIssueBlock:(/*^block*/id)arg9 finishBlock:(/*^block*/id)arg10 ;
-(void)syncImportFiles:(id)arg1 intoContext:(id)arg2 importOptionsForInsert:(unsigned long long)arg3 importOptionsForUpdate:(unsigned long long)arg4 processEvents:(char)arg5 processReminders:(char)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 ;
-(char)isOwnerMe;
-(id)calendarSource;
-(char)shouldShowInPrimaryAccountsShowDelegates:(char)arg1 ;
-(char)isOwnerAddress:(id)arg1 ;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 ;
-(id)iCalendarDocumentWithID:(id)arg1 name:(id)arg2 description:(id)arg3 color:(id)arg4 options:(unsigned long long)arg5 ;
-(char)isMigrateable;
-(void)adoptCalendarDetailsFromCalendar:(id)arg1 ;
-(id)enclosingSource;
-(id)keysOnlyRelevantToNetworkDetails;
-(id)contextForValidationError;
-(id)attributesToCompareForMerge;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 fromServer:(char)arg2 ;
-(char)shouldDisplayAsReminderCalendar;
-(char)shouldDisplayAsEventCalendar;
-(id)subscriptionOrPublishURL;
-(id)_itemPredicate;
-(void)setNeedsPublish:(char)arg1 ;
-(char)isAddressInMeCard:(id)arg1 ;
-(id)bestDefaultSymbolicColorWithExistingNodes:(id)arg1 ;
-(void)prefetchRelationshipsForDelete;
-(char)containsEvents;
-(char)containsTasks;
-(id)nodesForOrdering;
-(char)hasAddressForMe;
-(id)relationshipsToCompareForMerge;
-(char)_componentIsDangerousAlarm:(id)arg1 ;
-(void)_cleanAttachments:(id)arg1 depth:(int)arg2 ;
-(id)calendarsToCheckForDuplicatedUIDS;
-(id)fixAndReportIssuesInNewlyImportedItem:(id)arg1 ;
-(void)moveEventsAndMastersWithDuplicatedUIDSFromOtherCalendars:(id)arg1 sharedUIDS:(id)arg2 ;
-(id)handleDuplicatedUIDSFromThisCalendar:(id)arg1 context:(id)arg2 ;
-(char)importICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 callbackQueue:(id)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 shouldSaveOnSuccess:(char)arg10 synchronousFinishBlock:(char)arg11 ;
-(char)_containsDangerousAlarms:(id)arg1 ;
-(void)_cleanComponent:(id)arg1 ;
-(char)_importCleanedDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 sharedUIDsToImport:(id)arg4 resultObjectIDs:(id*)arg5 progressBlock:(/*^block*/id)arg6 abortForIssueBlock:(/*^block*/id)arg7 ;
-(char)importICSDocument:(id)arg1 importOptionsForInsert:(unsigned long long)arg2 importOptionsForUpdate:(unsigned long long)arg3 processEvents:(char)arg4 processReminders:(char)arg5 callbackQueue:(id)arg6 progressBlock:(/*^block*/id)arg7 abortForIssueBlock:(/*^block*/id)arg8 finishBlock:(/*^block*/id)arg9 ;
-(void)importFiles:(id)arg1 intoContext:(id)arg2 importOptionsForInsert:(unsigned long long)arg3 importOptionsForUpdate:(unsigned long long)arg4 processEvents:(char)arg5 processReminders:(char)arg6 callbackQueue:(id)arg7 progressBlock:(/*^block*/id)arg8 abortForIssueBlock:(/*^block*/id)arg9 finishBlock:(/*^block*/id)arg10 synchronously:(char)arg11 ;
@end

