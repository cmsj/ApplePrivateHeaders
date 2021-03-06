/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {

	unsigned _evaluationOrder;
	int _limitKind;
	unsigned _limitOrder;
	unsigned _limitValue;
	NSData* _smartCriteria;
	char _dynamic;
	char _enabledItemsOnly;
	char _filtered;
	char _genius;
	char _limited;
	char _reverseLimitOrder;
	SCD_Struct_MI10 _has;

}

@property (assign,nonatomic) char hasDynamic; 
@property (assign,nonatomic) char dynamic;                           //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) char hasFiltered; 
@property (assign,nonatomic) char filtered;                          //@synthesize filtered=_filtered - In the implementation block
@property (assign,nonatomic) char hasLimited; 
@property (assign,nonatomic) char limited;                           //@synthesize limited=_limited - In the implementation block
@property (assign,nonatomic) char hasLimitKind; 
@property (assign,nonatomic) int limitKind;                          //@synthesize limitKind=_limitKind - In the implementation block
@property (assign,nonatomic) char hasEvaluationOrder; 
@property (assign,nonatomic) unsigned evaluationOrder;               //@synthesize evaluationOrder=_evaluationOrder - In the implementation block
@property (assign,nonatomic) char hasLimitOrder; 
@property (assign,nonatomic) unsigned limitOrder;                    //@synthesize limitOrder=_limitOrder - In the implementation block
@property (assign,nonatomic) char hasLimitValue; 
@property (assign,nonatomic) unsigned limitValue;                    //@synthesize limitValue=_limitValue - In the implementation block
@property (assign,nonatomic) char hasEnabledItemsOnly; 
@property (assign,nonatomic) char enabledItemsOnly;                  //@synthesize enabledItemsOnly=_enabledItemsOnly - In the implementation block
@property (assign,nonatomic) char hasReverseLimitOrder; 
@property (assign,nonatomic) char reverseLimitOrder;                 //@synthesize reverseLimitOrder=_reverseLimitOrder - In the implementation block
@property (nonatomic,readonly) char hasSmartCriteria; 
@property (nonatomic,retain) NSData * smartCriteria;                 //@synthesize smartCriteria=_smartCriteria - In the implementation block
@property (assign,nonatomic) char hasGenius; 
@property (assign,nonatomic) char genius;                            //@synthesize genius=_genius - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)dynamic;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)filtered;
-(void)setFiltered:(char)arg1 ;
-(unsigned)limitValue;
-(void)setLimitValue:(unsigned)arg1 ;
-(char)hasLimitValue;
-(void)setHasLimitValue:(char)arg1 ;
-(char)genius;
-(void)setGenius:(char)arg1 ;
-(unsigned)evaluationOrder;
-(char)enabledItemsOnly;
-(char)limited;
-(int)limitKind;
-(unsigned)limitOrder;
-(char)reverseLimitOrder;
-(NSData *)smartCriteria;
-(char)hasEvaluationOrder;
-(char)hasDynamic;
-(char)hasFiltered;
-(char)hasGenius;
-(char)hasEnabledItemsOnly;
-(char)hasLimited;
-(char)hasLimitKind;
-(char)hasLimitOrder;
-(char)hasReverseLimitOrder;
-(char)hasSmartCriteria;
-(void)setSmartCriteria:(NSData *)arg1 ;
-(void)setDynamic:(char)arg1 ;
-(void)setHasDynamic:(char)arg1 ;
-(void)setHasFiltered:(char)arg1 ;
-(void)setLimited:(char)arg1 ;
-(void)setHasLimited:(char)arg1 ;
-(void)setLimitKind:(int)arg1 ;
-(void)setHasLimitKind:(char)arg1 ;
-(void)setEvaluationOrder:(unsigned)arg1 ;
-(void)setHasEvaluationOrder:(char)arg1 ;
-(void)setLimitOrder:(unsigned)arg1 ;
-(void)setHasLimitOrder:(char)arg1 ;
-(void)setEnabledItemsOnly:(char)arg1 ;
-(void)setHasEnabledItemsOnly:(char)arg1 ;
-(void)setReverseLimitOrder:(char)arg1 ;
-(void)setHasReverseLimitOrder:(char)arg1 ;
-(void)setHasGenius:(char)arg1 ;
@end

