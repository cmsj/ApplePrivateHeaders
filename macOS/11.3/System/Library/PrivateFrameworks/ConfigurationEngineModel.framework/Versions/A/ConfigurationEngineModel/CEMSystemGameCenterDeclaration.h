/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowGameCenter;
	NSNumber* _payloadAllowMultiplayerGaming;
	NSNumber* _payloadAllowAddingGameCenterFriends;
	NSNumber* _payloadAllowGameCenterNearbyMultiplayer;
	NSNumber* _payloadAllowGameCenterPrivateMessaging;
	NSNumber* _payloadAllowGameCenterProfilePrivacyModification;
	NSNumber* _payloadAllowGameCenterProfileModification;
	NSNumber* _payloadAllowedGameCenterOtherPlayerTypes;
	NSNumber* _payloadAllowGameCenterFriendsSharingModification;

}

@property (nonatomic,copy) NSNumber * payloadAllowGameCenter;                                        //@synthesize payloadAllowGameCenter=_payloadAllowGameCenter - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowMultiplayerGaming;                                 //@synthesize payloadAllowMultiplayerGaming=_payloadAllowMultiplayerGaming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAddingGameCenterFriends;                           //@synthesize payloadAllowAddingGameCenterFriends=_payloadAllowAddingGameCenterFriends - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowGameCenterNearbyMultiplayer;                       //@synthesize payloadAllowGameCenterNearbyMultiplayer=_payloadAllowGameCenterNearbyMultiplayer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowGameCenterPrivateMessaging;                        //@synthesize payloadAllowGameCenterPrivateMessaging=_payloadAllowGameCenterPrivateMessaging - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowGameCenterProfilePrivacyModification;              //@synthesize payloadAllowGameCenterProfilePrivacyModification=_payloadAllowGameCenterProfilePrivacyModification - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowGameCenterProfileModification;                     //@synthesize payloadAllowGameCenterProfileModification=_payloadAllowGameCenterProfileModification - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowedGameCenterOtherPlayerTypes;                      //@synthesize payloadAllowedGameCenterOtherPlayerTypes=_payloadAllowedGameCenterOtherPlayerTypes - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowGameCenterFriendsSharingModification;              //@synthesize payloadAllowGameCenterFriendsSharingModification=_payloadAllowGameCenterFriendsSharingModification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4 withAllowGameCenterNearbyMultiplayer:(id)arg5 withAllowGameCenterPrivateMessaging:(id)arg6 withAllowGameCenterProfilePrivacyModification:(id)arg7 withAllowGameCenterProfileModification:(id)arg8 withAllowedGameCenterOtherPlayerTypes:(id)arg9 withAllowGameCenterFriendsSharingModification:(id)arg10 ;
+(id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4 withAllowGameCenterNearbyMultiplayer:(id)arg5 withAllowGameCenterPrivateMessaging:(id)arg6 withAllowGameCenterProfilePrivacyModification:(id)arg7 withAllowGameCenterProfileModification:(id)arg8 withAllowedGameCenterOtherPlayerTypes:(id)arg9 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowGameCenter:(NSNumber *)arg1 ;
-(void)setPayloadAllowMultiplayerGaming:(NSNumber *)arg1 ;
-(void)setPayloadAllowAddingGameCenterFriends:(NSNumber *)arg1 ;
-(void)setPayloadAllowGameCenterNearbyMultiplayer:(NSNumber *)arg1 ;
-(void)setPayloadAllowGameCenterPrivateMessaging:(NSNumber *)arg1 ;
-(void)setPayloadAllowGameCenterProfilePrivacyModification:(NSNumber *)arg1 ;
-(void)setPayloadAllowGameCenterProfileModification:(NSNumber *)arg1 ;
-(void)setPayloadAllowedGameCenterOtherPlayerTypes:(NSNumber *)arg1 ;
-(void)setPayloadAllowGameCenterFriendsSharingModification:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowGameCenter;
-(NSNumber *)payloadAllowMultiplayerGaming;
-(NSNumber *)payloadAllowAddingGameCenterFriends;
-(NSNumber *)payloadAllowGameCenterNearbyMultiplayer;
-(NSNumber *)payloadAllowGameCenterPrivateMessaging;
-(NSNumber *)payloadAllowGameCenterProfilePrivacyModification;
-(NSNumber *)payloadAllowGameCenterProfileModification;
-(NSNumber *)payloadAllowedGameCenterOtherPlayerTypes;
-(NSNumber *)payloadAllowGameCenterFriendsSharingModification;
@end

