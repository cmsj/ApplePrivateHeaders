/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalSession.h>

@class NSString;

@interface CalSubscriptionSession : CalSession {

	NSString* _username;
	NSString* _password;
	char _tryCredentialsOnNextSync;
	int _isUpdating;
	char _isAutoRefreshed;
	char _needsRefresh;

}

@property (retain) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (retain) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign) char tryCredentialsOnNextSync;              //@synthesize tryCredentialsOnNextSync=_tryCredentialsOnNextSync - In the implementation block
@property (assign) char needsRefresh;                          //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (assign) char isAutoRefreshed;                       //@synthesize isAutoRefreshed=_isAutoRefreshed - In the implementation block
+(char)shouldForceSSL:(id)arg1 ;
+(id)urlUsingHTTPS:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)subscription:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)subscriptionDidFinishLoading:(id)arg1 ;
-(void)subscription:(id)arg1 didFailWithError:(id)arg2 ;
-(void)synchronizeWithFlags:(long long)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(void)deletePersistedErrorAndNotify;
-(void)reschedule;
-(double)timeSinceLastSync;
-(char)needsSync;
-(char)persistErrorAndNotify;
-(void)systemNetworkDidChange;
-(void)setTryCredentialsOnNextSync:(char)arg1 ;
-(char)isAutoRefreshed;
-(char)needsRefresh;
-(void)_doSynchronize;
-(void)setNeedsRefresh:(char)arg1 ;
-(char)tryCredentialsOnNextSync;
-(void)onNextSyncTryUsername:(id)arg1 andPassword:(id)arg2 ;
-(void)setIsAutoRefreshed:(char)arg1 ;
@end

