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

@class NSNumber, NSArray, NSString;

@interface CEMLegacyRestrictionsAppsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowChat;
	NSNumber* _payloadAllowiTunes;
	NSNumber* _payloadAllowNews;
	NSNumber* _payloadAllowPodcasts;
	NSNumber* _payloadAllowSafari;
	NSNumber* _payloadAllowVideoConferencing;
	NSArray* _payloadBlacklistedAppBundleIDs;

}

@property (nonatomic,copy) NSNumber * payloadAllowChat;                           //@synthesize payloadAllowChat=_payloadAllowChat - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowiTunes;                         //@synthesize payloadAllowiTunes=_payloadAllowiTunes - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowNews;                           //@synthesize payloadAllowNews=_payloadAllowNews - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPodcasts;                       //@synthesize payloadAllowPodcasts=_payloadAllowPodcasts - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowSafari;                         //@synthesize payloadAllowSafari=_payloadAllowSafari - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowVideoConferencing;              //@synthesize payloadAllowVideoConferencing=_payloadAllowVideoConferencing - In the implementation block
@property (nonatomic,copy) NSArray * payloadBlacklistedAppBundleIDs;              //@synthesize payloadBlacklistedAppBundleIDs=_payloadBlacklistedAppBundleIDs - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withAllowChat:(id)arg2 withAllowiTunes:(id)arg3 withAllowNews:(id)arg4 withAllowPodcasts:(id)arg5 withAllowSafari:(id)arg6 withAllowVideoConferencing:(id)arg7 withBlacklistedAppBundleIDs:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowChat:(NSNumber *)arg1 ;
-(void)setPayloadAllowiTunes:(NSNumber *)arg1 ;
-(void)setPayloadAllowNews:(NSNumber *)arg1 ;
-(void)setPayloadAllowPodcasts:(NSNumber *)arg1 ;
-(void)setPayloadAllowSafari:(NSNumber *)arg1 ;
-(void)setPayloadAllowVideoConferencing:(NSNumber *)arg1 ;
-(void)setPayloadBlacklistedAppBundleIDs:(NSArray *)arg1 ;
-(NSNumber *)payloadAllowChat;
-(NSNumber *)payloadAllowiTunes;
-(NSNumber *)payloadAllowNews;
-(NSNumber *)payloadAllowPodcasts;
-(NSNumber *)payloadAllowSafari;
-(NSNumber *)payloadAllowVideoConferencing;
-(NSArray *)payloadBlacklistedAppBundleIDs;
@end

