/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (assign,nonatomic) long long combinedRank; 
@property (assign,nonatomic) double combinedScore; 
@property (nonatomic,copy) NSString * interactionId; 
@property (assign,nonatomic) char onDeviceUtterancesPresent; 
@property (assign,nonatomic) long long originalRank; 
@property (assign,nonatomic) double originalScore; 
@property (nonatomic,copy) NSString * previousUtterance; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * utteranceSource; 
+(id)startCorrectedSpeechRequest;
+(id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(double)combinedScore;
-(void)setCombinedScore:(double)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(long long)combinedRank;
-(void)setCombinedRank:(long long)arg1 ;
-(char)onDeviceUtterancesPresent;
-(void)setOnDeviceUtterancesPresent:(char)arg1 ;
-(long long)originalRank;
-(void)setOriginalRank:(long long)arg1 ;
-(double)originalScore;
-(void)setOriginalScore:(double)arg1 ;
-(NSString *)previousUtterance;
-(void)setPreviousUtterance:(NSString *)arg1 ;
-(NSString *)utteranceSource;
-(void)setUtteranceSource:(NSString *)arg1 ;
@end

