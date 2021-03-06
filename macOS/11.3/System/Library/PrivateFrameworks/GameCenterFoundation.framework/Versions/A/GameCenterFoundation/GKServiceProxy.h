/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKThreadsafeDictionary, GKDaemonProxy, GKPlayerInternal, NSDictionary;

@interface GKServiceProxy : NSObject {

	unsigned _serviceGeneration;
	GKThreadsafeDictionary* _pendingRequests;
	GKDaemonProxy* _baseProxy;
	GKPlayerInternal* _localPlayer;
	NSDictionary* _serviceLookup;

}

@property (retain) NSDictionary * serviceLookup;                                             //@synthesize serviceLookup=_serviceLookup - In the implementation block
@property (retain) GKThreadsafeDictionary * pendingRequests;                                 //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (assign) unsigned serviceGeneration;                                               //@synthesize serviceGeneration=_serviceGeneration - In the implementation block
@property (retain) GKDaemonProxy * baseProxy;                                                //@synthesize baseProxy=_baseProxy - In the implementation block
@property (__weak) GKPlayerInternal * localPlayer;                                           //@synthesize localPlayer=_localPlayer - In the implementation block
@property (readonly) id<GKAccountService> accountService; 
@property (readonly) id<GKAccountServicePrivate> accountServicePrivate; 
@property (readonly) id<GKProfileService> profileService; 
@property (readonly) id<GKProfileServicePrivate> profileServicePrivate; 
@property (readonly) id<GKFriendService> friendService; 
@property (readonly) id<GKFriendServicePrivate> friendServicePrivate; 
@property (readonly) id<GKGameService> gameService; 
@property (readonly) id<GKGameServicePrivate> gameServicePrivate; 
@property (readonly) id<GKGameStatService> gameStatService; 
@property (readonly) id<GKGameStatServicePrivate> gameStatServicePrivate; 
@property (readonly) id<GKChallengeService> challengeService; 
@property (readonly) id<GKChallengeServicePrivate> challengeServicePrivate; 
@property (readonly) id<GKMultiplayerService> multiplayerService; 
@property (readonly) id<GKMultiplayerServicePrivate> multiplayerServicePrivate; 
@property (readonly) id<GKTurnBasedService> turnBasedService; 
@property (readonly) id<GKTurnBasedServicePrivate> turnBasedServicePrivate; 
@property (readonly) id<GKUtilityService> utilityService; 
@property (readonly) id<GKUtilityServicePrivate> utilityServicePrivate; 
@property (readonly) id<GKBulletinService> bulletinService; 
@property (readonly) id<GKBulletinServicePrivate> bulletinServicePrivate; 
@property (readonly) id<GKAnalyticsService> analyticsService; 
@property (readonly) id<GKAnalyticsServicePrivate> analyticsServicePrivate; 
@property (readonly) id<GKGameSessionService> gameSessionService; 
@property (readonly) id<GKGameSessionServicePrivate> gameSessionServicePrivate; 
@property (readonly) id<GKTournamentService> tournamentService; 
@property (readonly) id<GKTournamentServicePrivate> tournamentServicePrivate; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(GKThreadsafeDictionary *)pendingRequests;
-(void)setPendingRequests:(GKThreadsafeDictionary *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(id<GKAccountService>)accountService;
-(id<GKProfileServicePrivate>)profileServicePrivate;
-(id<GKGameStatServicePrivate>)gameStatServicePrivate;
-(id<GKGameServicePrivate>)gameServicePrivate;
-(GKPlayerInternal *)localPlayer;
-(id<GKTournamentService>)tournamentService;
-(id<GKTournamentServicePrivate>)tournamentServicePrivate;
-(id<GKGameStatService>)gameStatService;
-(id<GKUtilityServicePrivate>)utilityServicePrivate;
-(id<GKFriendService>)friendService;
-(id<GKFriendServicePrivate>)friendServicePrivate;
-(id<GKAccountServicePrivate>)accountServicePrivate;
-(id<GKGameService>)gameService;
-(id<GKAnalyticsService>)analyticsService;
-(id<GKMultiplayerService>)multiplayerService;
-(id<GKUtilityService>)utilityService;
-(id<GKProfileService>)profileService;
-(id<GKTurnBasedService>)turnBasedService;
-(id<GKTurnBasedServicePrivate>)turnBasedServicePrivate;
-(GKDaemonProxy *)baseProxy;
-(void)setLocalPlayer:(GKPlayerInternal *)arg1 ;
-(void)setBaseProxy:(GKDaemonProxy *)arg1 ;
-(unsigned)serviceGeneration;
-(void)setServiceGeneration:(unsigned)arg1 ;
-(void)setServiceLookup:(NSDictionary *)arg1 ;
-(void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3 ;
-(id)requestIdentifierForInvocation:(id)arg1 ;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(void)buildServiceLookupIfNeccessary;
-(NSDictionary *)serviceLookup;
-(void)buildServiceLookup;
-(void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3 ;
-(id<GKChallengeService>)challengeService;
-(id<GKChallengeServicePrivate>)challengeServicePrivate;
-(id<GKMultiplayerServicePrivate>)multiplayerServicePrivate;
-(id<GKBulletinService>)bulletinService;
-(id<GKBulletinServicePrivate>)bulletinServicePrivate;
-(id<GKAnalyticsServicePrivate>)analyticsServicePrivate;
-(id<GKGameSessionService>)gameSessionService;
-(id<GKGameSessionServicePrivate>)gameSessionServicePrivate;
@end

