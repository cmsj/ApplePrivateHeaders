/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, SAHomeMemberSettings;

@interface SAHomeMemberInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSString * companionAssistantId; 
@property (nonatomic,copy) NSString * companionSpeechId; 
@property (nonatomic,copy) NSString * enrollmentName; 
@property (nonatomic,retain) SAHomeMemberSettings * homeMemberSettings; 
@property (nonatomic,copy) NSString * lastVisitedAceHost; 
@property (nonatomic,copy) NSString * loggableCompanionAssistantId; 
@property (nonatomic,copy) NSString * loggableMultiUserSharedUserId; 
@property (nonatomic,copy) NSString * loggableSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserId; 
@property (nonatomic,copy) NSString * speechId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeMemberInfo;
+(id)homeMemberInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)attributes;
-(id)groupIdentifier;
-(void)setAttributes:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(NSString *)companionAssistantId;
-(void)setCompanionAssistantId:(NSString *)arg1 ;
-(NSString *)companionSpeechId;
-(void)setCompanionSpeechId:(NSString *)arg1 ;
-(NSString *)enrollmentName;
-(void)setEnrollmentName:(NSString *)arg1 ;
-(SAHomeMemberSettings *)homeMemberSettings;
-(void)setHomeMemberSettings:(SAHomeMemberSettings *)arg1 ;
-(NSString *)lastVisitedAceHost;
-(void)setLastVisitedAceHost:(NSString *)arg1 ;
-(NSString *)loggableCompanionAssistantId;
-(void)setLoggableCompanionAssistantId:(NSString *)arg1 ;
-(NSString *)loggableMultiUserSharedUserId;
-(void)setLoggableMultiUserSharedUserId:(NSString *)arg1 ;
-(NSString *)loggableSharedUserId;
-(void)setLoggableSharedUserId:(NSString *)arg1 ;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
@end

