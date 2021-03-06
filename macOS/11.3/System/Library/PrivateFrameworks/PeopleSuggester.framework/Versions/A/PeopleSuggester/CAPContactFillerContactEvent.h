/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CAPContactFillerContactEvent : PBCodable <NSCopying> {

	double _averageBehavioralRuleConfidence;
	double _averageBehavioralRuleConviction;
	double _averageBehavioralRuleLift;
	double _averageBehavioralRuleMLScore;
	double _averageBehavioralRulePowerFactor;
	double _averageBehavioralRuleSupport;
	double _interactionModelScore;
	double _maximumBehavioralRuleConfidence;
	double _maximumBehavioralRuleConviction;
	double _maximumBehavioralRuleLift;
	double _maximumBehavioralRuleMLScore;
	double _maximumBehavioralRulePowerFactor;
	double _maximumBehavioralRuleSupport;
	double _minimumBehavioralRuleConfidence;
	double _minimumBehavioralRuleConviction;
	double _minimumBehavioralRuleLift;
	double _minimumBehavioralRuleMLScore;
	double _minimumBehavioralRulePowerFactor;
	double _minimumBehavioralRuleSupport;
	double _stdevBehavioralRuleConfidence;
	double _stdevBehavioralRuleConviction;
	double _stdevBehavioralRuleLift;
	double _stdevBehavioralRuleMLScore;
	double _stdevBehavioralRulePowerFactor;
	double _stdevBehavioralRuleSupport;
	unsigned _normalizedIncomingCallFrequency;
	unsigned _normalizedIncomingTextFrequency;
	unsigned _normalizedOutgoingCallFrequency;
	unsigned _normalizedOutgoingTextFrequency;
	unsigned _normalizedShareFrequency;
	unsigned _numberOfBehavioralRulesAdvocating;
	int _timeSinceLastContactViaIncomingCall;
	int _timeSinceLastContactViaIncomingText;
	int _timeSinceLastContactViaOutgoingCall;
	int _timeSinceLastContactViaOutgoingText;
	int _timeSinceLastContactViaShare;
	char _wasShareRecipient;
	SCD_Struct_CA3 _has;

}

@property (assign,nonatomic) int timeSinceLastContactViaShare;                         //@synthesize timeSinceLastContactViaShare=_timeSinceLastContactViaShare - In the implementation block
@property (assign,nonatomic) int timeSinceLastContactViaIncomingText;                  //@synthesize timeSinceLastContactViaIncomingText=_timeSinceLastContactViaIncomingText - In the implementation block
@property (assign,nonatomic) int timeSinceLastContactViaOutgoingText;                  //@synthesize timeSinceLastContactViaOutgoingText=_timeSinceLastContactViaOutgoingText - In the implementation block
@property (assign,nonatomic) char hasTimeSinceLastContactViaIncomingCall; 
@property (assign,nonatomic) int timeSinceLastContactViaIncomingCall;                  //@synthesize timeSinceLastContactViaIncomingCall=_timeSinceLastContactViaIncomingCall - In the implementation block
@property (assign,nonatomic) char hasTimeSinceLastContactViaOutgoingCall; 
@property (assign,nonatomic) int timeSinceLastContactViaOutgoingCall;                  //@synthesize timeSinceLastContactViaOutgoingCall=_timeSinceLastContactViaOutgoingCall - In the implementation block
@property (assign,nonatomic) unsigned normalizedShareFrequency;                        //@synthesize normalizedShareFrequency=_normalizedShareFrequency - In the implementation block
@property (assign,nonatomic) unsigned normalizedIncomingTextFrequency;                 //@synthesize normalizedIncomingTextFrequency=_normalizedIncomingTextFrequency - In the implementation block
@property (assign,nonatomic) unsigned normalizedOutgoingTextFrequency;                 //@synthesize normalizedOutgoingTextFrequency=_normalizedOutgoingTextFrequency - In the implementation block
@property (assign,nonatomic) char hasNormalizedIncomingCallFrequency; 
@property (assign,nonatomic) unsigned normalizedIncomingCallFrequency;                 //@synthesize normalizedIncomingCallFrequency=_normalizedIncomingCallFrequency - In the implementation block
@property (assign,nonatomic) char hasNormalizedOutgoingCallFrequency; 
@property (assign,nonatomic) unsigned normalizedOutgoingCallFrequency;                 //@synthesize normalizedOutgoingCallFrequency=_normalizedOutgoingCallFrequency - In the implementation block
@property (assign,nonatomic) char hasNumberOfBehavioralRulesAdvocating; 
@property (assign,nonatomic) unsigned numberOfBehavioralRulesAdvocating;               //@synthesize numberOfBehavioralRulesAdvocating=_numberOfBehavioralRulesAdvocating - In the implementation block
@property (assign,nonatomic) char hasAverageBehavioralRuleSupport; 
@property (assign,nonatomic) double averageBehavioralRuleSupport;                      //@synthesize averageBehavioralRuleSupport=_averageBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) char hasAverageBehavioralRuleConfidence; 
@property (assign,nonatomic) double averageBehavioralRuleConfidence;                   //@synthesize averageBehavioralRuleConfidence=_averageBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) char hasAverageBehavioralRuleLift; 
@property (assign,nonatomic) double averageBehavioralRuleLift;                         //@synthesize averageBehavioralRuleLift=_averageBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) char hasAverageBehavioralRuleConviction; 
@property (assign,nonatomic) double averageBehavioralRuleConviction;                   //@synthesize averageBehavioralRuleConviction=_averageBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) char hasAverageBehavioralRulePowerFactor; 
@property (assign,nonatomic) double averageBehavioralRulePowerFactor;                  //@synthesize averageBehavioralRulePowerFactor=_averageBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) char hasAverageBehavioralRuleMLScore; 
@property (assign,nonatomic) double averageBehavioralRuleMLScore;                      //@synthesize averageBehavioralRuleMLScore=_averageBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) char hasMinimumBehavioralRuleSupport; 
@property (assign,nonatomic) double minimumBehavioralRuleSupport;                      //@synthesize minimumBehavioralRuleSupport=_minimumBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) char hasMinimumBehavioralRuleConfidence; 
@property (assign,nonatomic) double minimumBehavioralRuleConfidence;                   //@synthesize minimumBehavioralRuleConfidence=_minimumBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) char hasMinimumBehavioralRuleLift; 
@property (assign,nonatomic) double minimumBehavioralRuleLift;                         //@synthesize minimumBehavioralRuleLift=_minimumBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) char hasMinimumBehavioralRuleConviction; 
@property (assign,nonatomic) double minimumBehavioralRuleConviction;                   //@synthesize minimumBehavioralRuleConviction=_minimumBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) char hasMinimumBehavioralRulePowerFactor; 
@property (assign,nonatomic) double minimumBehavioralRulePowerFactor;                  //@synthesize minimumBehavioralRulePowerFactor=_minimumBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) char hasMinimumBehavioralRuleMLScore; 
@property (assign,nonatomic) double minimumBehavioralRuleMLScore;                      //@synthesize minimumBehavioralRuleMLScore=_minimumBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) char hasMaximumBehavioralRuleSupport; 
@property (assign,nonatomic) double maximumBehavioralRuleSupport;                      //@synthesize maximumBehavioralRuleSupport=_maximumBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) char hasMaximumBehavioralRuleConfidence; 
@property (assign,nonatomic) double maximumBehavioralRuleConfidence;                   //@synthesize maximumBehavioralRuleConfidence=_maximumBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) char hasMaximumBehavioralRuleLift; 
@property (assign,nonatomic) double maximumBehavioralRuleLift;                         //@synthesize maximumBehavioralRuleLift=_maximumBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) char hasMaximumBehavioralRuleConviction; 
@property (assign,nonatomic) double maximumBehavioralRuleConviction;                   //@synthesize maximumBehavioralRuleConviction=_maximumBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) char hasMaximumBehavioralRulePowerFactor; 
@property (assign,nonatomic) double maximumBehavioralRulePowerFactor;                  //@synthesize maximumBehavioralRulePowerFactor=_maximumBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) char hasMaximumBehavioralRuleMLScore; 
@property (assign,nonatomic) double maximumBehavioralRuleMLScore;                      //@synthesize maximumBehavioralRuleMLScore=_maximumBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) char hasStdevBehavioralRuleSupport; 
@property (assign,nonatomic) double stdevBehavioralRuleSupport;                        //@synthesize stdevBehavioralRuleSupport=_stdevBehavioralRuleSupport - In the implementation block
@property (assign,nonatomic) char hasStdevBehavioralRuleConfidence; 
@property (assign,nonatomic) double stdevBehavioralRuleConfidence;                     //@synthesize stdevBehavioralRuleConfidence=_stdevBehavioralRuleConfidence - In the implementation block
@property (assign,nonatomic) char hasStdevBehavioralRuleLift; 
@property (assign,nonatomic) double stdevBehavioralRuleLift;                           //@synthesize stdevBehavioralRuleLift=_stdevBehavioralRuleLift - In the implementation block
@property (assign,nonatomic) char hasStdevBehavioralRuleConviction; 
@property (assign,nonatomic) double stdevBehavioralRuleConviction;                     //@synthesize stdevBehavioralRuleConviction=_stdevBehavioralRuleConviction - In the implementation block
@property (assign,nonatomic) char hasStdevBehavioralRulePowerFactor; 
@property (assign,nonatomic) double stdevBehavioralRulePowerFactor;                    //@synthesize stdevBehavioralRulePowerFactor=_stdevBehavioralRulePowerFactor - In the implementation block
@property (assign,nonatomic) char hasStdevBehavioralRuleMLScore; 
@property (assign,nonatomic) double stdevBehavioralRuleMLScore;                        //@synthesize stdevBehavioralRuleMLScore=_stdevBehavioralRuleMLScore - In the implementation block
@property (assign,nonatomic) char hasInteractionModelScore; 
@property (assign,nonatomic) double interactionModelScore;                             //@synthesize interactionModelScore=_interactionModelScore - In the implementation block
@property (assign,nonatomic) char wasShareRecipient;                                   //@synthesize wasShareRecipient=_wasShareRecipient - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNormalizedShareFrequency:(unsigned)arg1 ;
-(void)setNormalizedIncomingTextFrequency:(unsigned)arg1 ;
-(void)setNormalizedOutgoingTextFrequency:(unsigned)arg1 ;
-(void)setNormalizedOutgoingCallFrequency:(unsigned)arg1 ;
-(void)setNormalizedIncomingCallFrequency:(unsigned)arg1 ;
-(void)setTimeSinceLastContactViaIncomingCall:(int)arg1 ;
-(void)setTimeSinceLastContactViaShare:(int)arg1 ;
-(void)setTimeSinceLastContactViaIncomingText:(int)arg1 ;
-(void)setTimeSinceLastContactViaOutgoingText:(int)arg1 ;
-(id)timeSinceLastContactViaShareAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaShare:(id)arg1 ;
-(id)timeSinceLastContactViaIncomingTextAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaIncomingText:(id)arg1 ;
-(id)timeSinceLastContactViaOutgoingTextAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaOutgoingText:(id)arg1 ;
-(int)timeSinceLastContactViaIncomingCall;
-(void)setHasTimeSinceLastContactViaIncomingCall:(char)arg1 ;
-(char)hasTimeSinceLastContactViaIncomingCall;
-(id)timeSinceLastContactViaIncomingCallAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaIncomingCall:(id)arg1 ;
-(int)timeSinceLastContactViaOutgoingCall;
-(void)setTimeSinceLastContactViaOutgoingCall:(int)arg1 ;
-(void)setHasTimeSinceLastContactViaOutgoingCall:(char)arg1 ;
-(char)hasTimeSinceLastContactViaOutgoingCall;
-(id)timeSinceLastContactViaOutgoingCallAsString:(int)arg1 ;
-(int)StringAsTimeSinceLastContactViaOutgoingCall:(id)arg1 ;
-(void)setHasNormalizedIncomingCallFrequency:(char)arg1 ;
-(char)hasNormalizedIncomingCallFrequency;
-(void)setHasNormalizedOutgoingCallFrequency:(char)arg1 ;
-(char)hasNormalizedOutgoingCallFrequency;
-(void)setNumberOfBehavioralRulesAdvocating:(unsigned)arg1 ;
-(void)setHasNumberOfBehavioralRulesAdvocating:(char)arg1 ;
-(char)hasNumberOfBehavioralRulesAdvocating;
-(void)setAverageBehavioralRuleSupport:(double)arg1 ;
-(void)setHasAverageBehavioralRuleSupport:(char)arg1 ;
-(char)hasAverageBehavioralRuleSupport;
-(void)setAverageBehavioralRuleConfidence:(double)arg1 ;
-(void)setHasAverageBehavioralRuleConfidence:(char)arg1 ;
-(char)hasAverageBehavioralRuleConfidence;
-(void)setAverageBehavioralRuleLift:(double)arg1 ;
-(void)setHasAverageBehavioralRuleLift:(char)arg1 ;
-(char)hasAverageBehavioralRuleLift;
-(void)setAverageBehavioralRuleConviction:(double)arg1 ;
-(void)setHasAverageBehavioralRuleConviction:(char)arg1 ;
-(char)hasAverageBehavioralRuleConviction;
-(void)setAverageBehavioralRulePowerFactor:(double)arg1 ;
-(void)setHasAverageBehavioralRulePowerFactor:(char)arg1 ;
-(char)hasAverageBehavioralRulePowerFactor;
-(void)setAverageBehavioralRuleMLScore:(double)arg1 ;
-(void)setHasAverageBehavioralRuleMLScore:(char)arg1 ;
-(char)hasAverageBehavioralRuleMLScore;
-(void)setMinimumBehavioralRuleSupport:(double)arg1 ;
-(void)setHasMinimumBehavioralRuleSupport:(char)arg1 ;
-(char)hasMinimumBehavioralRuleSupport;
-(void)setMinimumBehavioralRuleConfidence:(double)arg1 ;
-(void)setHasMinimumBehavioralRuleConfidence:(char)arg1 ;
-(char)hasMinimumBehavioralRuleConfidence;
-(void)setMinimumBehavioralRuleLift:(double)arg1 ;
-(void)setHasMinimumBehavioralRuleLift:(char)arg1 ;
-(char)hasMinimumBehavioralRuleLift;
-(void)setMinimumBehavioralRuleConviction:(double)arg1 ;
-(void)setHasMinimumBehavioralRuleConviction:(char)arg1 ;
-(char)hasMinimumBehavioralRuleConviction;
-(void)setMinimumBehavioralRulePowerFactor:(double)arg1 ;
-(void)setHasMinimumBehavioralRulePowerFactor:(char)arg1 ;
-(char)hasMinimumBehavioralRulePowerFactor;
-(void)setMinimumBehavioralRuleMLScore:(double)arg1 ;
-(void)setHasMinimumBehavioralRuleMLScore:(char)arg1 ;
-(char)hasMinimumBehavioralRuleMLScore;
-(void)setMaximumBehavioralRuleSupport:(double)arg1 ;
-(void)setHasMaximumBehavioralRuleSupport:(char)arg1 ;
-(char)hasMaximumBehavioralRuleSupport;
-(void)setMaximumBehavioralRuleConfidence:(double)arg1 ;
-(void)setHasMaximumBehavioralRuleConfidence:(char)arg1 ;
-(char)hasMaximumBehavioralRuleConfidence;
-(void)setMaximumBehavioralRuleLift:(double)arg1 ;
-(void)setHasMaximumBehavioralRuleLift:(char)arg1 ;
-(char)hasMaximumBehavioralRuleLift;
-(void)setMaximumBehavioralRuleConviction:(double)arg1 ;
-(void)setHasMaximumBehavioralRuleConviction:(char)arg1 ;
-(char)hasMaximumBehavioralRuleConviction;
-(void)setMaximumBehavioralRulePowerFactor:(double)arg1 ;
-(void)setHasMaximumBehavioralRulePowerFactor:(char)arg1 ;
-(char)hasMaximumBehavioralRulePowerFactor;
-(void)setMaximumBehavioralRuleMLScore:(double)arg1 ;
-(void)setHasMaximumBehavioralRuleMLScore:(char)arg1 ;
-(char)hasMaximumBehavioralRuleMLScore;
-(void)setStdevBehavioralRuleSupport:(double)arg1 ;
-(void)setHasStdevBehavioralRuleSupport:(char)arg1 ;
-(char)hasStdevBehavioralRuleSupport;
-(void)setStdevBehavioralRuleConfidence:(double)arg1 ;
-(void)setHasStdevBehavioralRuleConfidence:(char)arg1 ;
-(char)hasStdevBehavioralRuleConfidence;
-(void)setStdevBehavioralRuleLift:(double)arg1 ;
-(void)setHasStdevBehavioralRuleLift:(char)arg1 ;
-(char)hasStdevBehavioralRuleLift;
-(void)setStdevBehavioralRuleConviction:(double)arg1 ;
-(void)setHasStdevBehavioralRuleConviction:(char)arg1 ;
-(char)hasStdevBehavioralRuleConviction;
-(void)setStdevBehavioralRulePowerFactor:(double)arg1 ;
-(void)setHasStdevBehavioralRulePowerFactor:(char)arg1 ;
-(char)hasStdevBehavioralRulePowerFactor;
-(void)setStdevBehavioralRuleMLScore:(double)arg1 ;
-(void)setHasStdevBehavioralRuleMLScore:(char)arg1 ;
-(char)hasStdevBehavioralRuleMLScore;
-(void)setInteractionModelScore:(double)arg1 ;
-(void)setHasInteractionModelScore:(char)arg1 ;
-(char)hasInteractionModelScore;
-(int)timeSinceLastContactViaShare;
-(int)timeSinceLastContactViaIncomingText;
-(int)timeSinceLastContactViaOutgoingText;
-(unsigned)normalizedShareFrequency;
-(unsigned)normalizedIncomingTextFrequency;
-(unsigned)normalizedOutgoingTextFrequency;
-(unsigned)normalizedIncomingCallFrequency;
-(unsigned)normalizedOutgoingCallFrequency;
-(unsigned)numberOfBehavioralRulesAdvocating;
-(double)averageBehavioralRuleSupport;
-(double)averageBehavioralRuleConfidence;
-(double)averageBehavioralRuleLift;
-(double)averageBehavioralRuleConviction;
-(double)averageBehavioralRulePowerFactor;
-(double)averageBehavioralRuleMLScore;
-(double)minimumBehavioralRuleSupport;
-(double)minimumBehavioralRuleConfidence;
-(double)minimumBehavioralRuleLift;
-(double)minimumBehavioralRuleConviction;
-(double)minimumBehavioralRulePowerFactor;
-(double)minimumBehavioralRuleMLScore;
-(double)maximumBehavioralRuleSupport;
-(double)maximumBehavioralRuleConfidence;
-(double)maximumBehavioralRuleLift;
-(double)maximumBehavioralRuleConviction;
-(double)maximumBehavioralRulePowerFactor;
-(double)maximumBehavioralRuleMLScore;
-(double)stdevBehavioralRuleSupport;
-(double)stdevBehavioralRuleConfidence;
-(double)stdevBehavioralRuleLift;
-(double)stdevBehavioralRuleConviction;
-(double)stdevBehavioralRulePowerFactor;
-(double)stdevBehavioralRuleMLScore;
-(double)interactionModelScore;
-(char)wasShareRecipient;
-(void)setWasShareRecipient:(char)arg1 ;
@end

