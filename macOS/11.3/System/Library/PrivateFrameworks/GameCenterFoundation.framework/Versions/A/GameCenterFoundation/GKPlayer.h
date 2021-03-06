/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/GKBasePlayer.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKPlayerInternal, NSAttributedString, NSArray, CNContact, NSString, NSNumber, NSDate, GKGame;

@interface GKPlayer : GKBasePlayer <NSCoding, NSSecureCoding> {

	GKPlayerInternal* _internal;
	NSAttributedString* _whenString;
	NSArray* _friends;

}

@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSString * reason2; 
@property (assign,nonatomic) unsigned rid; 
@property (assign,nonatomic) int source; 
@property (readonly) NSString * referenceKey; 
@property (nonatomic,retain) NSArray * friends;                                          //@synthesize friends=_friends - In the implementation block
@property (assign,nonatomic) char isFriend; 
@property (retain) NSString * playerID; 
@property (retain) GKPlayerInternal * internal;                                          //@synthesize internal=_internal - In the implementation block
@property (copy) NSString * status; 
@property (copy) NSString * alias; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSNumber * friendLevel; 
@property (nonatomic,readonly) NSNumber * friendBiDirectional; 
@property (nonatomic,readonly) NSNumber * friendPlayedWith; 
@property (nonatomic,readonly) NSNumber * friendPlayedNearby; 
@property (nonatomic,readonly) NSNumber * acceptedGameInviteFromThisFriend; 
@property (nonatomic,readonly) NSNumber * initiatedGameInviteToThisFriend; 
@property (nonatomic,readonly) NSNumber * automatchedTogether; 
@property (nonatomic,readonly) long long avatarType; 
@property (nonatomic,retain) NSArray * monogramComponents; 
@property (nonatomic,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) GKGame * lastPlayedGame; 
@property (nonatomic,readonly) char hasPhoto; 
@property (getter=isLoaded,nonatomic,readonly) char loaded; 
@property (nonatomic,readonly) char isFamiliarFriend; 
@property (assign,nonatomic) unsigned long long numberOfFriends; 
@property (nonatomic,readonly) SCD_Struct_GK4 stats; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,retain) NSAttributedString * whenString;                            //@synthesize whenString=_whenString - In the implementation block
@property (nonatomic,readonly) char isLocalPlayer; 
@property (nonatomic,readonly) char isAnonymousPlayer; 
@property (nonatomic,readonly) char isUnknownPlayer; 
@property (nonatomic,readonly) char isAutomatchPlayer; 
@property (nonatomic,readonly) char isGuestPlayer; 
@property (retain,readonly) NSString * gamePlayerID; 
@property (retain,readonly) NSString * teamPlayerID; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * guestIdentifier; 
@property (readonly) char isInvitable; 
+(long long)sizeForPhotoSize:(long long)arg1 ;
+(id)monogramComponentsForDisplayName:(id)arg1 ;
+(void)stringForMonogramWithDisplayNameComponents:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)monogramQueue;
+(void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2 ;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(char)supportsSecureCoding;
+(id)canonicalizedPlayerForInternal:(id)arg1 ;
+(void)loadPlayersForIdentifiersPrivate:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)cacheKeyForPlayerID:(id)arg1 ;
+(void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)anonymousPlayer;
+(id)unknownPlayer;
+(id)automatchPlayer;
+(id)anonymousGuestPlayerWithIdentifier:(id)arg1 ;
+(void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)playerFromPlayerID:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)avatarImageRenderer;
-(void)monogramImageWithPhotoSize:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)photoURLForSize:(long long)arg1 ;
-(void)clearInMemoryCachedAvatars;
-(void)displayNameComponentsWithHandler:(/*^block*/id)arg1 ;
-(id)renderingScopeForPhotoSize:(long long)arg1 ;
-(void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stringForMonogramWithHandler:(/*^block*/id)arg1 ;
-(void)_playerAvatarWithSize:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)placeholderImageWithPhotoSize:(long long)arg1 ;
-(void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mutableContactFromDisplayNameComponentsWithHandler:(/*^block*/id)arg1 ;
-(void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKPlayerInternal *)internal;
-(void)setInternal:(GKPlayerInternal *)arg1 ;
-(id)email;
-(SCD_Struct_GK4)stats;
-(NSString *)alias;
-(NSString *)cacheKey;
-(char)hasPhoto;
-(id)emails;
-(NSArray *)friends;
-(void)setFriends:(NSArray *)arg1 ;
-(NSString *)referenceKey;
-(void)_postChangeNotification;
-(NSString *)playerID;
-(id)sortName;
-(long long)avatarType;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKGame *)lastPlayedGame;
-(NSNumber *)friendBiDirectional;
-(NSString *)teamPlayerID;
-(void)postChangeNotification;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(NSString *)gamePlayerID;
-(char)scopedIDsArePersistent;
-(NSNumber *)friendLevel;
-(NSNumber *)friendPlayedWith;
-(NSNumber *)friendPlayedNearby;
-(NSNumber *)acceptedGameInviteFromThisFriend;
-(NSNumber *)initiatedGameInviteToThisFriend;
-(NSNumber *)automatchedTogether;
-(void)setFriendLevel:(NSNumber *)arg1 ;
-(void)setFriendBiDirectional:(NSNumber *)arg1 ;
-(void)setFriendPlayedWith:(NSNumber *)arg1 ;
-(void)setFriendPlayedNearby:(NSNumber *)arg1 ;
-(void)setAcceptedGameInviteFromThisFriend:(NSNumber *)arg1 ;
-(void)setInitiatedGameInviteToThisFriend:(NSNumber *)arg1 ;
-(void)setAutomatchedTogether:(NSNumber *)arg1 ;
-(void)loadCommonFriends:(char)arg1 asPlayersWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadGamesPlayedIncludingInstalledGames:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isInvitable;
-(char)isFamiliarFriend;
-(void)loadFriendsAsPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadFriendsWithFilter:(id)arg1 withComplationHandler:(/*^block*/id)arg2 ;
-(void)loadRecentMatchesForGame:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)loadGamesPlayed:(/*^block*/id)arg1 ;
-(void)loadGamesPlayedDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)identifierForIDS;
-(void)loadProfileWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isFriendablePlayer;
-(NSAttributedString *)whenString;
-(void)setWhenString:(NSAttributedString *)arg1 ;
-(id)minimalPlayer;
@end

