/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable <NSCopying> {

	unsigned long long _stateHeldForSecs;
	unsigned long long _timestamp;
	int _inState;
	NSString* _symptomName;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasInState; 
@property (assign,nonatomic) int inState;                                      //@synthesize inState=_inState - In the implementation block
@property (assign,nonatomic) char hasStateHeldForSecs; 
@property (assign,nonatomic) unsigned long long stateHeldForSecs;              //@synthesize stateHeldForSecs=_stateHeldForSecs - In the implementation block
@property (nonatomic,readonly) char hasSymptomName; 
@property (nonatomic,retain) NSString * symptomName;                           //@synthesize symptomName=_symptomName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(NSString *)symptomName;
-(void)setSymptomName:(NSString *)arg1 ;
-(int)inState;
-(void)setInState:(int)arg1 ;
-(void)setHasInState:(char)arg1 ;
-(char)hasInState;
-(id)inStateAsString:(int)arg1 ;
-(int)StringAsInState:(id)arg1 ;
-(void)setStateHeldForSecs:(unsigned long long)arg1 ;
-(void)setHasStateHeldForSecs:(char)arg1 ;
-(char)hasStateHeldForSecs;
-(char)hasSymptomName;
-(unsigned long long)stateHeldForSecs;
@end
