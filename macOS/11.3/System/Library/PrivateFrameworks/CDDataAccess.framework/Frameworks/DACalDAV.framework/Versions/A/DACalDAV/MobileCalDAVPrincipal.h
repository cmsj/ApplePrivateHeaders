/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/Versions/A/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVOAuthInfoProvider.h>
#import <libobjc.A.dylib/CalDAVPrincipal.h>

@protocol CalDAVAccount;
@class NSString, NSSet, NSURL, NSDictionary, NSNumber, NSDateComponents, REMDAChangeTrackingHelper, NSMutableSet, NSMutableDictionary, CalDAVRefreshContext, AKAppleIDSession, MobileCalDAVAccount;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CalDAVPrincipal> {

	REMDAChangeTrackingHelper* _rem_changeTracking;
	char _calendarsAreDirty;
	char _isDelegate;
	char _isWritable;
	char _isEnabled;
	char _canCreateCalendars;
	char _isExpandPropertyReportSupported;
	char _supportsCalendarUserSearch;
	char _supportsFreebusy;
	char _supportsSyncToken;
	char _supportsPush;
	char _shouldRefreshPrincipalSearchProperties;
	char _shouldUpdatePushDelegate;
	char _isDirty;
	NSURL* _calendarHomeURL;
	NSMutableSet* _deletedCalendarURLs;
	NSURL* _notificationCollectionURL;
	NSString* _notificationCollectionCTag;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropBoxURL;
	NSURL* _defaultCalendarURL;
	NSString* _uid;
	id<CalDAVAccount> _account;
	NSSet* _preferredCalendarUserAddresses;
	NSString* _fullName;
	NSString* _principalPath;
	NSString* _inboxCTag;
	NSString* _notificationURLString;
	NSDictionary* _pushTransports;
	NSString* _calendarHomePushKey;
	NSNumber* _quotaFreeBytes;
	NSString* _supportedCalendarComponentSets;
	NSMutableDictionary* _calendarUserAddressesPerCalendar;
	NSURL* _preferredCalendarUserAddress;
	NSString* _preferredCalendarEmailAddress;
	NSString* _preferredCalendarPhoneNumber;
	NSMutableSet* _addedCalendars;
	NSMutableSet* _modifiedCalendars;
	CalDAVRefreshContext* _refreshContext;
	NSURL* _legacy_principalURL;
	AKAppleIDSession* _appleIDSession;

}

@property (nonatomic,retain) NSString * uid;                                                      //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) id<CalDAVAccount> account;                                           //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) MobileCalDAVAccount * daAccount; 
@property (nonatomic,retain) NSMutableDictionary * calendarUserAddressesPerCalendar;              //@synthesize calendarUserAddressesPerCalendar=_calendarUserAddressesPerCalendar - In the implementation block
@property (nonatomic,retain) NSURL * preferredCalendarUserAddress;                                //@synthesize preferredCalendarUserAddress=_preferredCalendarUserAddress - In the implementation block
@property (nonatomic,retain) NSString * preferredCalendarEmailAddress;                            //@synthesize preferredCalendarEmailAddress=_preferredCalendarEmailAddress - In the implementation block
@property (nonatomic,retain) NSString * preferredCalendarPhoneNumber;                             //@synthesize preferredCalendarPhoneNumber=_preferredCalendarPhoneNumber - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedCalendarURLs;                                  //@synthesize deletedCalendarURLs=_deletedCalendarURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedCalendars;                                       //@synthesize addedCalendars=_addedCalendars - In the implementation block
@property (nonatomic,retain) NSMutableSet * modifiedCalendars;                                    //@synthesize modifiedCalendars=_modifiedCalendars - In the implementation block
@property (nonatomic,retain) CalDAVRefreshContext * refreshContext;                               //@synthesize refreshContext=_refreshContext - In the implementation block
@property (nonatomic,retain) NSURL * legacy_principalURL;                                         //@synthesize legacy_principalURL=_legacy_principalURL - In the implementation block
@property (nonatomic,retain) AKAppleIDSession * appleIDSession;                                   //@synthesize appleIDSession=_appleIDSession - In the implementation block
@property (nonatomic,retain) NSSet * preferredCalendarUserAddresses;                              //@synthesize preferredCalendarUserAddresses=_preferredCalendarUserAddresses - In the implementation block
@property (nonatomic,retain) NSString * fullName;                                                 //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSURL * calendarHomeURL;                                             //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (nonatomic,retain) NSString * calendarHomeSyncToken; 
@property (nonatomic,readonly) NSDictionary * subCalPropertiesByURL; 
@property (nonatomic,retain) NSString * principalPath;                                            //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,retain) NSURL * principalURL; 
@property (nonatomic,retain) NSURL * defaultCalendarURL;                                          //@synthesize defaultCalendarURL=_defaultCalendarURL - In the implementation block
@property (nonatomic,retain) NSURL * notificationCollectionURL;                                   //@synthesize notificationCollectionURL=_notificationCollectionURL - In the implementation block
@property (nonatomic,retain) NSString * notificationCollectionCTag;                               //@synthesize notificationCollectionCTag=_notificationCollectionCTag - In the implementation block
@property (nonatomic,retain) NSURL * inboxURL;                                                    //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) NSString * inboxCTag;                                                //@synthesize inboxCTag=_inboxCTag - In the implementation block
@property (nonatomic,retain) NSURL * outboxURL;                                                   //@synthesize outboxURL=_outboxURL - In the implementation block
@property (nonatomic,retain) NSURL * dropBoxURL;                                                  //@synthesize dropBoxURL=_dropBoxURL - In the implementation block
@property (nonatomic,retain) NSString * notificationURLString;                                    //@synthesize notificationURLString=_notificationURLString - In the implementation block
@property (nonatomic,retain) NSDictionary * pushTransports;                                       //@synthesize pushTransports=_pushTransports - In the implementation block
@property (nonatomic,retain) NSString * calendarHomePushKey;                                      //@synthesize calendarHomePushKey=_calendarHomePushKey - In the implementation block
@property (nonatomic,retain) NSNumber * quotaFreeBytes;                                           //@synthesize quotaFreeBytes=_quotaFreeBytes - In the implementation block
@property (nonatomic,retain) NSString * supportedCalendarComponentSets;                           //@synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets - In the implementation block
@property (assign,nonatomic) char isDelegate;                                                     //@synthesize isDelegate=_isDelegate - In the implementation block
@property (assign,nonatomic) char isWritable;                                                     //@synthesize isWritable=_isWritable - In the implementation block
@property (assign,nonatomic) char isEnabled;                                                      //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) char canCreateCalendars;                                             //@synthesize canCreateCalendars=_canCreateCalendars - In the implementation block
@property (assign,nonatomic) char isExpandPropertyReportSupported;                                //@synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported - In the implementation block
@property (assign,nonatomic) char supportsCalendarUserSearch;                                     //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
@property (assign,nonatomic) char supportsFreebusy;                                               //@synthesize supportsFreebusy=_supportsFreebusy - In the implementation block
@property (assign,nonatomic) char supportsSyncToken;                                              //@synthesize supportsSyncToken=_supportsSyncToken - In the implementation block
@property (nonatomic,readonly) char supportsExtendedCalendarQuery; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,readonly) NSString * APSTopic; 
@property (nonatomic,readonly) NSURL * APSSubscriptionURL; 
@property (nonatomic,readonly) NSString * APSEnv; 
@property (assign,nonatomic) char supportsPush;                                                   //@synthesize supportsPush=_supportsPush - In the implementation block
@property (assign,nonatomic) char shouldRefreshPrincipalSearchProperties;                         //@synthesize shouldRefreshPrincipalSearchProperties=_shouldRefreshPrincipalSearchProperties - In the implementation block
@property (assign,nonatomic) char shouldUpdatePushDelegate;                                       //@synthesize shouldUpdatePushDelegate=_shouldUpdatePushDelegate - In the implementation block
@property (assign,nonatomic) char isDirty;                                                        //@synthesize isDirty=_isDirty - In the implementation block
@property (assign,nonatomic) char calendarsAreDirty;                                              //@synthesize calendarsAreDirty=_calendarsAreDirty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CoreDAVTaskManager> taskManager; 
@property (nonatomic,readonly) char isMergeSync; 
@property (nonatomic,readonly) char isEnabledForEvents; 
@property (nonatomic,readonly) char isEnabledForTodos; 
@property (nonatomic,readonly) NSDateComponents * eventFilterStartDate; 
@property (nonatomic,readonly) NSDateComponents * eventFilterEndDate; 
+(char)compareAddressURL:(id)arg1 localString:(id)arg2 ;
-(id)init;
-(id)scheme;
-(id)host;
-(long long)port;
-(id)user;
-(id)password;
-(char)isEnabled;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(id)configuration;
-(char)isDirty;
-(id<CalDAVAccount>)account;
-(void)setAccount:(id<CalDAVAccount>)arg1 ;
-(NSString *)fullName;
-(id)accountID;
-(NSSet *)calendars;
-(void)setIsEnabled:(char)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(char)isDelegate;
-(void)setIsDelegate:(char)arg1 ;
-(NSURL *)principalURL;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(char)isWritable;
-(id)userAgentHeader;
-(id)clientToken;
-(id<CoreDAVTaskManager>)taskManager;
-(id)additionalHeaderValues;
-(char)supportsFreebusy;
-(NSString *)supportedCalendarComponentSets;
-(void)setSupportedCalendarComponentSets:(NSString *)arg1 ;
-(NSURL *)inboxURL;
-(NSURL *)outboxURL;
-(char)supportsCalendarUserSearch;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(char)supportsExtendedCalendarQuery;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(void)setOutboxURL:(NSURL *)arg1 ;
-(void)setDropBoxURL:(NSURL *)arg1 ;
-(void)setNotificationCollectionURL:(NSURL *)arg1 ;
-(void)setSupportsCalendarUserSearch:(char)arg1 ;
-(char)isExpandPropertyReportSupported;
-(void)setIsExpandPropertyReportSupported:(char)arg1 ;
-(void)setPreferredCalendarUserAddresses:(NSSet *)arg1 ;
-(NSURL *)calendarHomeURL;
-(char)isMergeSync;
-(NSString *)calendarHomeSyncToken;
-(NSMutableSet *)modifiedCalendars;
-(NSMutableSet *)deletedCalendarURLs;
-(NSMutableSet *)addedCalendars;
-(void)prepareCalendarsForSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)isEnabledForEvents;
-(char)isEnabledForTodos;
-(id)calendarOfType:(int)arg1 atURL:(id)arg2 withOptions:(id)arg3 ;
-(NSSet *)preferredCalendarUserAddresses;
-(void)setDefaultCalendarURL:(NSURL *)arg1 ;
-(void)setSupportsFreebusy:(char)arg1 ;
-(void)removeCalendar:(id)arg1 ;
-(id)defaultEventCalendarTitle;
-(id)defaultTodoCalendarTitle;
-(NSDictionary *)pushTransports;
-(void)setPushTransports:(NSDictionary *)arg1 ;
-(void)setCalendarHomePushKey:(NSString *)arg1 ;
-(void)setQuotaFreeBytes:(NSNumber *)arg1 ;
-(void)setCanCreateCalendars:(char)arg1 ;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(void)removecalendarWithURL:(id)arg1 ;
-(char)supportsPush;
-(char)calendarUserAddressIsEquivalentToURL:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)handleTrustChallenge:(id)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(id)calendarUserAddresses;
-(NSString *)inboxCTag;
-(void)setInboxCTag:(NSString *)arg1 ;
-(void)setNotificationCollectionCTag:(NSString *)arg1 ;
-(AKAppleIDSession *)appleIDSession;
-(id)oauthInfoProvider;
-(id)serverRoot;
-(id)identityPersist;
-(id)serverComplianceClasses;
-(char)handleCertificateError:(id)arg1 ;
-(char)shouldFailAllTasks;
-(id)customConnectionProperties;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(CFURLStorageSessionRef)copyStorageSession;
-(char)shouldUseOpportunisticSockets;
-(char)shouldCompressRequests;
-(void)clientTokenRequestedByServer;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)getAppleIDSession;
-(id)oauth2Token;
-(unsigned long long)oauthVariant;
-(void)setAppleIDSession:(AKAppleIDSession *)arg1 ;
-(NSString *)notificationURLString;
-(NSString *)notificationCollectionCTag;
-(NSString *)calendarHomePushKey;
-(NSNumber *)quotaFreeBytes;
-(void)setNotificationURLString:(NSString *)arg1 ;
-(void)setIsWritable:(char)arg1 ;
-(id)initWithConfiguration:(id)arg1 account:(id)arg2 ;
-(NSURL *)legacy_principalURL;
-(char)canCreateCalendars;
-(CalDAVRefreshContext *)refreshContext;
-(NSString *)APSTopic;
-(void)setSupportsPush:(char)arg1 ;
-(char)shouldUpdatePushDelegate;
-(void)setShouldUpdatePushDelegate:(char)arg1 ;
-(void)setIsDirty:(char)arg1 ;
-(void)setCalendarsAreDirty:(char)arg1 ;
-(void)setRefreshContext:(CalDAVRefreshContext *)arg1 ;
-(char)useSSL;
-(NSMutableDictionary *)calendarUserAddressesPerCalendar;
-(NSURL *)defaultCalendarURL;
-(NSURL *)notificationCollectionURL;
-(NSURL *)dropBoxURL;
-(char)supportsSyncToken;
-(char)_userAddressSet:(id)arg1 isEqualToSet:(id)arg2 ;
-(void)setPreferredCalendarUserAddress:(NSURL *)arg1 ;
-(void)setPreferredCalendarEmailAddress:(NSString *)arg1 ;
-(void)setPreferredCalendarPhoneNumber:(NSString *)arg1 ;
-(MobileCalDAVAccount *)daAccount;
-(id)_startDateFromDaysToSync:(int)arg1 ;
-(id)_eventSyncEndDate;
-(void)setAddedCalendars:(NSMutableSet *)arg1 ;
-(void)setModifiedCalendars:(NSMutableSet *)arg1 ;
-(void)setDeletedCalendarURLs:(NSMutableSet *)arg1 ;
-(id)rem_changeTracking;
-(void)clear_rem_changeTracking;
-(NSURL *)preferredCalendarUserAddress;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 numUploadedElements:(long long)arg2 ;
-(NSDictionary *)subCalPropertiesByURL;
-(void)setSupportsSyncToken:(char)arg1 ;
-(char)clearCalendarChanges;
-(id)preferredCalendarUserAddressesForCalendar:(id)arg1 ;
-(void)setPreferredCalendarUserAddresses:(id)arg1 forCalendar:(id)arg2 ;
-(char)calendarsAreDirty;
-(NSURL *)APSSubscriptionURL;
-(NSString *)APSEnv;
-(NSString *)preferredCalendarEmailAddress;
-(NSString *)preferredCalendarPhoneNumber;
-(char)hasCalendarUserAddress:(id)arg1 ;
-(char)shouldRefreshPrincipalSearchProperties;
-(void)setShouldRefreshPrincipalSearchProperties:(char)arg1 ;
-(void)setCalendarUserAddressesPerCalendar:(NSMutableDictionary *)arg1 ;
-(void)setLegacy_principalURL:(NSURL *)arg1 ;
@end

