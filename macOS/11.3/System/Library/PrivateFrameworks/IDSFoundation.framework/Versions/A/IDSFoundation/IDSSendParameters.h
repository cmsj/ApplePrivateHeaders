/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, IDSOutgoingMessageCheckpointTrace, NSDictionary, NSData, NSString, IDSDestination, NSArray, NSNumber, NSDate;

@interface IDSSendParameters : NSObject <NSCopying> {

	NSMutableDictionary* _params;
	IDSOutgoingMessageCheckpointTrace* _checkpointTrace;

}

@property (nonatomic,retain) NSDictionary * message; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSDictionary * protobuf; 
@property (nonatomic,retain) NSString * resourcePath; 
@property (nonatomic,retain) NSDictionary * resourceMetadata; 
@property (nonatomic,retain) IDSDestination * destinations; 
@property (nonatomic,retain) NSArray * finalDestinations; 
@property (nonatomic,retain) NSString * accountUUID; 
@property (nonatomic,retain) NSString * mainAccountUUID; 
@property (nonatomic,retain) NSString * localDestinationDeviceUUID; 
@property (assign,nonatomic) char wantsAppAck; 
@property (assign,nonatomic) char encryptPayload; 
@property (assign,nonatomic) char compressPayload; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,retain) NSNumber * pushPriority; 
@property (assign,nonatomic) char localDelivery; 
@property (assign,nonatomic) char requireBluetooth; 
@property (assign,nonatomic) char requireLocalWiFi; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) char bypassDuet; 
@property (assign,nonatomic) char fakeMessage; 
@property (assign,nonatomic) char bypassStorage; 
@property (assign,nonatomic) char activityContinuation; 
@property (assign,nonatomic) char nonWaking; 
@property (nonatomic,retain) NSNumber * messageType; 
@property (nonatomic,retain) NSString * queueOneIdentifier; 
@property (assign,nonatomic) char fireAndForget; 
@property (nonatomic,retain) NSArray * duetIdentifiersOverride; 
@property (assign,nonatomic) char forceEncryptionOff; 
@property (nonatomic,retain) NSString * subService; 
@property (nonatomic,retain) NSString * subServiceAccountUUID; 
@property (assign,nonatomic) char allowCloudDelivery; 
@property (assign,nonatomic) char nonCloudWaking; 
@property (assign,nonatomic) char alwaysSkipSelf; 
@property (assign,nonatomic) char disallowRefresh; 
@property (nonatomic,retain) NSString * metricReportIdentifier; 
@property (assign,nonatomic) char liveMessageDelivery; 
@property (assign,nonatomic) char sessionForceInternetInvitation; 
@property (assign,nonatomic) char expectsPeerResponse; 
@property (nonatomic,retain) NSString * peerResponseIdentifier; 
@property (assign,nonatomic) char compressed; 
@property (nonatomic,retain) NSString * fromID; 
@property (nonatomic,retain) NSString * originalfromID; 
@property (assign,nonatomic) char useDictAsTopLevel; 
@property (assign,nonatomic) char wantsResponse; 
@property (nonatomic,retain) NSData * dataToEncrypt; 
@property (nonatomic,retain) NSData * messageUUID; 
@property (nonatomic,retain) NSString * alternateCallbackID; 
@property (nonatomic,retain) NSNumber * command; 
@property (nonatomic,retain) NSNumber * commandContext; 
@property (assign,nonatomic) char wantsDeliveryStatus; 
@property (assign,nonatomic) char wantsCertifiedDelivery; 
@property (nonatomic,retain) NSDictionary * deliveryStatusContext; 
@property (nonatomic,retain) NSArray * interestingRegistrationProperties; 
@property (nonatomic,retain) NSArray * requireAllRegistrationProperties; 
@property (nonatomic,retain) NSArray * requireLackOfRegistrationProperties; 
@property (assign,nonatomic) char isProxiedOutgoingMessage; 
@property (nonatomic,retain) NSNumber * dropMessageIndicatorCommand; 
@property (nonatomic,retain) NSNumber * originalTimestamp; 
@property (nonatomic,retain) NSArray * bulkedPayload; 
@property (assign,nonatomic) char daemonDeathResend; 
@property (assign,nonatomic) char bypassSizeCheck; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (assign,nonatomic) char enforceRemoteTimeouts; 
@property (nonatomic,retain) NSString * sessionID; 
@property (nonatomic,retain) IDSOutgoingMessageCheckpointTrace * checkpointTrace;              //@synthesize checkpointTrace=_checkpointTrace - In the implementation block
@property (assign,nonatomic) char wantsProgress; 
@property (assign,nonatomic) char ignoreMaxRetryCount; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) NSData * accessToken; 
@property (assign,nonatomic) char homeKitPayload; 
@property (assign,nonatomic) char disableAliasValidation; 
@property (nonatomic,retain) NSData * groupData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(NSData *)data;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)message;
-(double)timeout;
-(void)setMessage:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)resourcePath;
-(NSDictionary *)dictionaryRepresentation;
-(NSDate *)expirationDate;
-(void)setTimeout:(double)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(NSNumber *)command;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setCommand:(NSNumber *)arg1 ;
-(void)setMessageType:(NSNumber *)arg1 ;
-(NSNumber *)messageType;
-(NSData *)messageUUID;
-(IDSDestination *)destinations;
-(void)setDestinations:(IDSDestination *)arg1 ;
-(void)setDataToEncrypt:(NSData *)arg1 ;
-(void)setWantsResponse:(char)arg1 ;
-(void)setWantsProgress:(char)arg1 ;
-(void)setFromID:(NSString *)arg1 ;
-(void)setNonWaking:(char)arg1 ;
-(void)setEnforceRemoteTimeouts:(char)arg1 ;
-(void)setAccessToken:(NSData *)arg1 ;
-(void)setHomeKitPayload:(char)arg1 ;
-(void)setSubService:(NSString *)arg1 ;
-(void)setFakeMessage:(char)arg1 ;
-(void)setDisableAliasValidation:(char)arg1 ;
-(void)setWantsAppAck:(char)arg1 ;
-(void)setWantsDeliveryStatus:(char)arg1 ;
-(void)setWantsCertifiedDelivery:(char)arg1 ;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(void)setMessageUUID:(NSData *)arg1 ;
-(void)setAlternateCallbackID:(NSString *)arg1 ;
-(void)setOriginalTimestamp:(NSNumber *)arg1 ;
-(void)setEncryptPayload:(char)arg1 ;
-(void)setCompressPayload:(char)arg1 ;
-(void)setLocalDelivery:(char)arg1 ;
-(void)setAllowCloudDelivery:(char)arg1 ;
-(void)setRequireBluetooth:(char)arg1 ;
-(void)setRequireLocalWiFi:(char)arg1 ;
-(void)setUseDictAsTopLevel:(char)arg1 ;
-(void)setExpectsPeerResponse:(char)arg1 ;
-(void)setPeerResponseIdentifier:(NSString *)arg1 ;
-(void)setAlwaysSkipSelf:(char)arg1 ;
-(void)setPushPriority:(NSNumber *)arg1 ;
-(void)setBypassDuet:(char)arg1 ;
-(void)setNonCloudWaking:(char)arg1 ;
-(void)setLiveMessageDelivery:(char)arg1 ;
-(void)setDropMessageIndicatorCommand:(NSNumber *)arg1 ;
-(void)setFireAndForget:(char)arg1 ;
-(void)setBypassStorage:(char)arg1 ;
-(void)setActivityContinuation:(char)arg1 ;
-(void)setQueueOneIdentifier:(NSString *)arg1 ;
-(void)setForceEncryptionOff:(char)arg1 ;
-(void)setDuetIdentifiersOverride:(NSArray *)arg1 ;
-(void)setMetricReportIdentifier:(NSString *)arg1 ;
-(void)setInterestingRegistrationProperties:(NSArray *)arg1 ;
-(void)setRequireAllRegistrationProperties:(NSArray *)arg1 ;
-(void)setRequireLackOfRegistrationProperties:(NSArray *)arg1 ;
-(void)setAccountUUID:(NSString *)arg1 ;
-(void)setCheckpointTrace:(IDSOutgoingMessageCheckpointTrace *)arg1 ;
-(void)setGroupData:(NSData *)arg1 ;
-(NSString *)alternateCallbackID;
-(id)dictionaryRepresentationIncludingTrace:(char)arg1 ;
-(void)setProtobuf:(NSDictionary *)arg1 ;
-(void)setDaemonDeathResend:(char)arg1 ;
-(char)wantsAppAck;
-(NSString *)fromID;
-(char)wantsDeliveryStatus;
-(NSDictionary *)deliveryStatusContext;
-(char)wantsCertifiedDelivery;
-(IDSOutgoingMessageCheckpointTrace *)checkpointTrace;
-(NSNumber *)originalTimestamp;
-(char)expectsPeerResponse;
-(NSString *)peerResponseIdentifier;
-(char)compressed;
-(void)setCompressed:(char)arg1 ;
-(NSDictionary *)protobuf;
-(void)setResourcePath:(NSString *)arg1 ;
-(void)setResourceMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)resourceMetadata;
-(void)setFinalDestinations:(NSArray *)arg1 ;
-(NSArray *)finalDestinations;
-(NSString *)accountUUID;
-(NSData *)dataToEncrypt;
-(void)setCommandContext:(NSNumber *)arg1 ;
-(NSNumber *)commandContext;
-(void)setBulkedPayload:(NSArray *)arg1 ;
-(NSArray *)bulkedPayload;
-(NSArray *)requireAllRegistrationProperties;
-(NSArray *)requireLackOfRegistrationProperties;
-(NSArray *)interestingRegistrationProperties;
-(NSString *)queueOneIdentifier;
-(NSArray *)duetIdentifiersOverride;
-(NSData *)accessToken;
-(NSString *)subService;
-(void)setSubServiceAccountUUID:(NSString *)arg1 ;
-(NSString *)subServiceAccountUUID;
-(void)setMainAccountUUID:(NSString *)arg1 ;
-(NSString *)mainAccountUUID;
-(void)setOriginalfromID:(NSString *)arg1 ;
-(NSString *)originalfromID;
-(void)setLocalDestinationDeviceUUID:(NSString *)arg1 ;
-(NSString *)localDestinationDeviceUUID;
-(NSData *)groupData;
-(NSString *)metricReportIdentifier;
-(NSNumber *)dropMessageIndicatorCommand;
-(NSNumber *)pushPriority;
-(char)useDictAsTopLevel;
-(char)encryptPayload;
-(char)compressPayload;
-(char)wantsResponse;
-(char)wantsProgress;
-(char)localDelivery;
-(char)requireBluetooth;
-(char)requireLocalWiFi;
-(char)bypassDuet;
-(char)fakeMessage;
-(char)bypassStorage;
-(char)activityContinuation;
-(char)nonWaking;
-(char)nonCloudWaking;
-(char)daemonDeathResend;
-(void)setBypassSizeCheck:(char)arg1 ;
-(char)bypassSizeCheck;
-(char)fireAndForget;
-(void)setIsProxiedOutgoingMessage:(char)arg1 ;
-(char)isProxiedOutgoingMessage;
-(char)enforceRemoteTimeouts;
-(char)homeKitPayload;
-(char)disableAliasValidation;
-(char)forceEncryptionOff;
-(char)allowCloudDelivery;
-(char)alwaysSkipSelf;
-(void)setDisallowRefresh:(char)arg1 ;
-(char)disallowRefresh;
-(char)liveMessageDelivery;
-(void)setSessionForceInternetInvitation:(char)arg1 ;
-(char)sessionForceInternetInvitation;
-(void)setIgnoreMaxRetryCount:(char)arg1 ;
-(char)ignoreMaxRetryCount;
@end
