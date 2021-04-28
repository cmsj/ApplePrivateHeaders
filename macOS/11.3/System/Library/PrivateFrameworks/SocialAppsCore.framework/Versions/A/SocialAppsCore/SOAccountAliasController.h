/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialAppsCore.framework/Versions/A/SocialAppsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMAccount, NSMutableOrderedSet, NSMutableArray, NSMutableDictionary;

@interface SOAccountAliasController : NSObject {

	IMAccount* _account;
	NSMutableOrderedSet* _aliasSet;
	NSMutableArray* _aliasTimers;
	NSMutableDictionary* _aliasLookup;

}

@property (retain) NSMutableOrderedSet * aliasSet;                 //@synthesize aliasSet=_aliasSet - In the implementation block
@property (retain) NSMutableArray * aliasTimers;                   //@synthesize aliasTimers=_aliasTimers - In the implementation block
@property (retain) NSMutableDictionary * aliasLookup;              //@synthesize aliasLookup=_aliasLookup - In the implementation block
@property (__weak,readonly) IMAccount * account;                   //@synthesize account=_account - In the implementation block
+(id)stringForAliasValidationFailure:(long long)arg1 aliasName:(id)arg2 ;
-(void)dealloc;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(id)aliases;
-(id)initWithAccount:(id)arg1 ;
-(void)addAliases:(id)arg1 ;
-(id)vettedAliases;
-(void)removeAliases:(id)arg1 ;
-(id)activeAliases;
-(void)deactivateAliases:(id)arg1 ;
-(long long)validationErrorReasonForAlias:(id)arg1 ;
-(long long)activeAliasCount;
-(char)addAliasWithName:(id)arg1 ;
-(void)confirmNewAlias:(id)arg1 ;
-(void)configureAliasState:(id)arg1 ;
-(void)removeAliasWithName:(id)arg1 ;
-(NSMutableOrderedSet *)aliasSet;
-(NSMutableDictionary *)aliasLookup;
-(void)_stopListeningToNotifications;
-(void)setAliasSet:(NSMutableOrderedSet *)arg1 ;
-(void)setAliasLookup:(NSMutableDictionary *)arg1 ;
-(void)_listenToNotifications;
-(void)_initializeAliases;
-(void)removeAliasesWithNames:(id)arg1 ;
-(void)addAliasesWithNames:(id)arg1 ;
-(void)_addAliasToSet:(id)arg1 ;
-(id)aliasForName:(id)arg1 ;
-(void)_removeAliasFromSet:(id)arg1 ;
-(void)_aliasValidationChanged:(id)arg1 ;
-(void)_aliasesChanged:(id)arg1 ;
-(void)_vettedAliasesChanged:(id)arg1 ;
-(void)_clearTimers;
-(void)_addAliasesToSet:(id)arg1 ;
-(void)_addAliasTimer:(id)arg1 length:(double)arg2 ;
-(NSMutableArray *)aliasTimers;
-(void)setAliasTimers:(NSMutableArray *)arg1 ;
-(void)_validationTimerEnded:(id)arg1 ;
-(long long)vettedAliasCount;
-(void)deleteAlias:(id)arg1 ;
-(void)_removeAliasesFromSet:(id)arg1 ;
-(void)_removeTimerForAliasName:(id)arg1 ;
@end
