/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFApplicationContextProvider;
@class NSBundle, NSMutableDictionary, NSLock, NSString, NSArray;

@interface WFApplicationContext : NSObject {

	char _canLoadShortcutsDatabase;
	char _inactive;
	char _inBackground;
	char _canLoadShortcutsDatabaseEntitlementChecked;
	id<WFApplicationContextProvider> _provider;
	NSBundle* _applicationBundle;
	long long _userInterfaceStyle;
	NSMutableDictionary* _applicationStateObserversByEvent;
	NSLock* _observersLock;

}

@property (nonatomic,retain) NSMutableDictionary * applicationStateObserversByEvent;              //@synthesize applicationStateObserversByEvent=_applicationStateObserversByEvent - In the implementation block
@property (nonatomic,readonly) NSLock * observersLock;                                            //@synthesize observersLock=_observersLock - In the implementation block
@property (assign,nonatomic) char inactive;                                                       //@synthesize inactive=_inactive - In the implementation block
@property (assign,nonatomic) char inBackground;                                                   //@synthesize inBackground=_inBackground - In the implementation block
@property (assign,nonatomic) char canLoadShortcutsDatabaseEntitlementChecked;                     //@synthesize canLoadShortcutsDatabaseEntitlementChecked=_canLoadShortcutsDatabaseEntitlementChecked - In the implementation block
@property (nonatomic,retain) id<WFApplicationContextProvider> provider;                           //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) NSBundle * applicationBundle;                                      //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) NSString * currentUserInterfaceType; 
@property (nonatomic,readonly) char canLoadShortcutsDatabase;                                     //@synthesize canLoadShortcutsDatabase=_canLoadShortcutsDatabase - In the implementation block
@property (nonatomic,readonly) char shouldReverseLayoutDirection; 
@property (nonatomic,readonly) long long userInterfaceStyle;                                      //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) long long applicationState; 
@property (assign,getter=isIdleTimerDisabled,nonatomic) char idleTimerDisabled; 
@property (nonatomic,readonly) NSArray * applicationBundleURLSchemes; 
+(id)imageNamed:(id)arg1 ;
+(id)sharedContext;
-(void)dealloc;
-(id)init;
-(long long)applicationState;
-(void)openURL:(id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<WFApplicationContextProvider>)provider;
-(NSBundle *)bundle;
-(void)setProvider:(id<WFApplicationContextProvider>)arg1 ;
-(char)inactive;
-(void)setInactive:(char)arg1 ;
-(NSLock *)observersLock;
-(char)canOpenURL:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(char)shouldReverseLayoutDirection;
-(void)applicationDidBecomeActive;
-(long long)userInterfaceStyle;
-(void)setIdleTimerDisabled:(char)arg1 ;
-(char)isIdleTimerDisabled;
-(NSBundle *)applicationBundle;
-(char)inBackground;
-(void)applicationWillResignActive;
-(void)handleApplicationStateEvent:(long long)arg1 ;
-(NSMutableDictionary *)applicationStateObserversByEvent;
-(void)addApplicationStateObserver:(id)arg1 forEvent:(long long)arg2 ;
-(void)removeApplicationStateObserver:(id)arg1 forEvent:(long long)arg2 ;
-(void)openURL:(id)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 withBundleIdentifier:(id)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSArray *)applicationBundleURLSchemes;
-(NSString *)currentUserInterfaceType;
-(char)canLoadShortcutsDatabase;
-(void)setApplicationStateObserversByEvent:(NSMutableDictionary *)arg1 ;
-(void)setInBackground:(char)arg1 ;
-(char)canLoadShortcutsDatabaseEntitlementChecked;
-(void)setCanLoadShortcutsDatabaseEntitlementChecked:(char)arg1 ;
@end

