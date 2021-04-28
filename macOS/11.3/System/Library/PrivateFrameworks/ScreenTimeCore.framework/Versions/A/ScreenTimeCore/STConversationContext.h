/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface STConversationContext : NSObject {

	char _allowedByScreenTime;
	char _applicationCurrentlyLimited;
	char _shouldBeAllowedByScreenTimeWhenLimited;
	char _shouldBeAllowedDuringGeneralScreenTime;
	char _emergencyModeEnabled;
	NSDictionary* _allowedByContactsHandle;
	NSDictionary* _contactsByHandle;
	NSArray* _whitelistedHandles;
	unsigned long long _currentApplicationState;

}

@property (assign) char allowedByScreenTime;                                 //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (copy) NSDictionary * allowedByContactsHandle;                     //@synthesize allowedByContactsHandle=_allowedByContactsHandle - In the implementation block
@property (assign) char applicationCurrentlyLimited;                         //@synthesize applicationCurrentlyLimited=_applicationCurrentlyLimited - In the implementation block
@property (assign) char shouldBeAllowedByScreenTimeWhenLimited;              //@synthesize shouldBeAllowedByScreenTimeWhenLimited=_shouldBeAllowedByScreenTimeWhenLimited - In the implementation block
@property (assign) char shouldBeAllowedDuringGeneralScreenTime;              //@synthesize shouldBeAllowedDuringGeneralScreenTime=_shouldBeAllowedDuringGeneralScreenTime - In the implementation block
@property (copy) NSDictionary * contactsByHandle;                            //@synthesize contactsByHandle=_contactsByHandle - In the implementation block
@property (copy) NSArray * whitelistedHandles;                               //@synthesize whitelistedHandles=_whitelistedHandles - In the implementation block
@property (assign) unsigned long long currentApplicationState;               //@synthesize currentApplicationState=_currentApplicationState - In the implementation block
@property (assign) char emergencyModeEnabled;                                //@synthesize emergencyModeEnabled=_emergencyModeEnabled - In the implementation block
-(id)init;
-(char)shouldBeAllowedDuringGeneralScreenTime;
-(void)setShouldBeAllowedDuringGeneralScreenTime:(char)arg1 ;
-(char)shouldBeAllowedByScreenTimeWhenLimited;
-(void)setShouldBeAllowedByScreenTimeWhenLimited:(char)arg1 ;
-(unsigned long long)currentApplicationState;
-(void)setCurrentApplicationState:(unsigned long long)arg1 ;
-(char)emergencyModeEnabled;
-(void)setEmergencyModeEnabled:(char)arg1 ;
-(char)applicationCurrentlyLimited;
-(void)setApplicationCurrentlyLimited:(char)arg1 ;
-(char)allowedByScreenTime;
-(void)setAllowedByScreenTime:(char)arg1 ;
-(void)updateShouldBeAllowedDuringGeneralScreenTime:(char)arg1 shouldBeAllowedByScreenTimeWhenLimited:(char)arg2 currentApplicationState:(unsigned long long)arg3 emergencyModeEnabled:(char)arg4 ;
-(void)updateForThirdPartyApplicationState:(long long)arg1 ;
-(NSDictionary *)allowedByContactsHandle;
-(void)setAllowedByContactsHandle:(NSDictionary *)arg1 ;
-(NSDictionary *)contactsByHandle;
-(void)setContactsByHandle:(NSDictionary *)arg1 ;
-(NSArray *)whitelistedHandles;
-(void)setWhitelistedHandles:(NSArray *)arg1 ;
@end
