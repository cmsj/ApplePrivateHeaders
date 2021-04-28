/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSBatchTranslationStreamingRequest.h>

@class QSSBatchTranslationRequest, QSSBatchTranslationFeedbackRequest;

@interface QSSMutableBatchTranslationStreamingRequest : QSSBatchTranslationStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) QSSBatchTranslationRequest * contentAsQSSBatchTranslationRequest; 
@property (nonatomic,copy) QSSBatchTranslationFeedbackRequest * contentAsQSSBatchTranslationFeedbackRequest; 
-(QSSBatchTranslationRequest *)contentAsQSSBatchTranslationRequest;
-(QSSBatchTranslationFeedbackRequest *)contentAsQSSBatchTranslationFeedbackRequest;
-(void)setContentAsQSSBatchTranslationRequest:(QSSBatchTranslationRequest *)arg1 ;
-(void)setContentAsQSSBatchTranslationFeedbackRequest:(QSSBatchTranslationFeedbackRequest *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
@end
