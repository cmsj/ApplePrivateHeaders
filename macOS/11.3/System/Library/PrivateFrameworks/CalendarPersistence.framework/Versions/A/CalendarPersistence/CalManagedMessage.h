/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>
#import <libobjc.A.dylib/ETagObject.h>
#import <libobjc.A.dylib/EKProtocolCalendarNotification.h>

@class NSString, NSNumber, NSDate, CalManagedMessageContents, NSData, CalManagedEvent, NSURL, CalManagedPrincipal, CalManagedDiff, NSMutableSet, NSDictionary, NSManagedObjectID;

@interface CalManagedMessage : CalManagedObject <ETagObject, EKProtocolCalendarNotification> {

	NSString* _path;
	NSString* _cachedClosestOccurrenceID;
	CalManagedMessage* _cachedBestMessageForDisplayAsInvitation;
	NSString* _eventServerFilename;
	char _isIntentionallyDetached;
	char _isIntentionallyReplyToAll;
	char _notify;

}

@property (assign) int sharedCalendarAccess; 
@property (retain) NSString * sharedCalendarComponentType; 
@property (assign) char responseInProgress; 
@property (retain) NSString * sharedCalendarPath; 
@property (retain) CalManagedMessageContents * messageContents; 
@property (retain,readonly) NSData * contents; 
@property (retain) CalManagedEvent * event; 
@property (retain) NSNumber * sequence; 
@property (retain) NSNumber * count; 
@property (retain) NSString * eTag; 
@property (retain) NSString * filename; 
@property (retain) NSDate * dateStamp; 
@property (retain) NSString * sender; 
@property (retain) NSString * error; 
@property (retain) NSString * attendeeComment; 
@property (retain) NSString * senderHREF; 
@property (retain) NSURL * URL; 
@property (retain) NSString * calendarName; 
@property (retain) NSString * eventTitle; 
@property (retain) CalManagedPrincipal * principal; 
@property (retain) CalManagedDiff * diff; 
@property (retain) NSString * cachedClosestOccurrenceID;                                     //@synthesize cachedClosestOccurrenceID=_cachedClosestOccurrenceID - In the implementation block
@property (retain) NSString * senderFirstName; 
@property (retain) NSString * senderLastName; 
@property (retain) NSNumber * createdCount; 
@property (retain) NSNumber * updatedCount; 
@property (retain) NSNumber * deletedCount; 
@property (retain) NSString * uuid; 
@property (retain) NSDate * proposedStart; 
@property (retain) NSDate * proposedEnd; 
@property (assign) char dismissed; 
@property (assign) unsigned long long junkStatusEnum; 
@property (retain) NSString * eventServerFilename;                                           //@synthesize eventServerFilename=_eventServerFilename - In the implementation block
@property (retain) NSMutableSet * childMessages; 
@property (retain) CalManagedMessage * masterMessage; 
@property (assign) char isVisible; 
@property (assign) int type; 
@property (readonly) NSString * path; 
@property (assign) char isIntentionallyDetached;                                             //@synthesize isIntentionallyDetached=_isIntentionallyDetached - In the implementation block
@property (assign) char isIntentionallyReplyToAll;                                           //@synthesize isIntentionallyReplyToAll=_isIntentionallyReplyToAll - In the implementation block
@property (assign) char notify;                                                              //@synthesize notify=_notify - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * notificationType; 
@property (nonatomic,readonly) NSString * componentType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSNumber * senders; 
@property (nonatomic,readonly) NSDate * proposedStartDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSDate * proposedEndDateUnadjustedFromUTC; 
@property (nonatomic,readonly) char dateChanged; 
@property (nonatomic,readonly) char timeChanged; 
@property (nonatomic,readonly) char locationChanged; 
@property (nonatomic,readonly) char titleChanged; 
@property (nonatomic,readonly) char attachmentsChanged; 
@property (nonatomic,readonly) NSString * principalName; 
@property (nonatomic,readonly) id<EventOccurrenceModelProtocol> occurrence; 
@property (nonatomic,readonly) id<CalendarSourceModelProtocol> containerSource; 
@property (nonatomic,readonly) unsigned long long junkStatus; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
+(id)entityName;
+(id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)newMessagesArrayForCalendarIDs:(id)arg1 andPrincipalIDs:(id)arg2 forClass:(Class)arg3 fromManagedObjectContext:(id)arg4 ;
+(void)coalesceAndSetVisibiltyForMessageOnEvent:(id)arg1 ;
+(id)fetchRequestInboxMessagesInPrincipal:(id)arg1 ;
+(id)fetchRequestNotificationMessagesInPrincipal:(id)arg1 ;
+(Class)classForEvent;
+(Class)classForTask;
+(id)_stringForClass:(Class)arg1 ;
+(id)_formatString:(id)arg1 forClass:(Class)arg2 ;
+(id)notificationTypes;
+(char)_shouldDisplayNotificationForCalendar:(id)arg1 ;
+(char)_shouldDisplayNotificationForPrincipal:(id)arg1 ;
+(id)_messagesForCalendarIDs:(id)arg1 forClass:(Class)arg2 context:(id)arg3 ;
+(id)_messagesForPrincipalIDs:(id)arg1 forClass:(Class)arg2 context:(id)arg3 ;
+(void)_filterMessages:(id)arg1 ;
+(id)nonEventNotificationTypes;
+(id)fetchRequestWithCalendarIDs:(id)arg1 forClass:(Class)arg2 inManagedObjectContext:(id)arg3 ;
+(id)fetchRequestWithCalendars:(id)arg1 forClass:(Class)arg2 inManagedObjectContext:(id)arg3 ;
+(char)_calendarShouldNotShowNOBOsNeedingReplies:(id)arg1 ;
+(id)_futureEventsNeedingNOBOsNeedingRepliesForPrincipal:(id)arg1 ;
+(void)_createMessagesForFutureEvents:(id)arg1 forPrincipal:(id)arg2 ;
+(id)fetchRequestWithCalendar:(id)arg1 forClass:(Class)arg2 inManagedObjectContext:(id)arg3 ;
+(id)messagesArrayForCalendarMainWindowWithManagedObjectContext:(id)arg1 ;
+(void)createMessagesForEventsInTheFutureMissingMessagesForPrincipal:(id)arg1 ;
+(id)sharedCalendarInvitesForClass:(Class)arg1 principals:(id)arg2 context:(id)arg3 ;
-(NSString *)name;
-(NSString *)path;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSData *)contents;
-(id<EventOccurrenceModelProtocol>)occurrence;
-(NSString *)phoneNumber;
-(NSString *)title;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)emailAddress;
-(NSNumber *)notificationType;
-(void)awakeFromInsert;
-(void)setETag:(NSString *)arg1 ;
-(NSString *)componentType;
-(char)isInvitation;
-(NSNumber *)senders;
-(void)awakeFromFetch;
-(unsigned long long)junkStatus;
-(char)isResourceChange;
-(id<CalendarSourceModelProtocol>)containerSource;
-(char)isSharedCalendarInvitation;
-(NSDate *)proposedStartDateUnadjustedFromUTC;
-(NSDate *)proposedEndDateUnadjustedFromUTC;
-(char)isSuggestion;
-(char)isProposedNewTime;
-(id)serverFilename;
-(void)setEventServerFilename:(NSString *)arg1 ;
-(char)dateChanged;
-(char)titleChanged;
-(char)timeChanged;
-(char)locationChanged;
-(char)attachmentsChanged;
-(NSString *)principalName;
-(char)isSharedCalendarReply;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(id)calendarTitle;
-(void)updateContentsWithData:(id)arg1 ;
-(char)isInvitationAndNeedsReply;
-(id)closestLegacyOccurrenceID;
-(id)keysOnlyRelevantToNetworkDetails;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(char)_shouldDisplayNotification;
-(char)associatedWithNotificationCollection;
-(NSString *)cachedClosestOccurrenceID;
-(id)bestChildMessageForDisplayAsInvitation;
-(void)setCachedClosestOccurrenceID:(NSString *)arg1 ;
-(char)isInvitationIgnoringChildren;
-(char)_hasInvitationChildButNotInvitation;
-(id)invitationChildren;
-(void)_updateCachedBestMessageWithMessage:(id)arg1 ;
-(id)pathForMessageWithFilename:(id)arg1 principal:(id)arg2 ;
-(void)_resetCachedValues;
-(id)senderURL;
-(void)setSenderURL:(id)arg1 ;
-(char)hasOneSender;
-(NSString *)eventServerFilename;
-(char)isIntentionallyDetached;
-(void)setIsIntentionallyDetached:(char)arg1 ;
-(char)isIntentionallyReplyToAll;
-(void)setIsIntentionallyReplyToAll:(char)arg1 ;
-(char)notify;
-(void)setNotify:(char)arg1 ;
-(void)processForType:(int)arg1 inManagedObjectContext:(id)arg2 ;
@end

