/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DRSProtoDiagnosticRequestOutcomeBucket : PBCodable <NSCopying> {

	unsigned long long _count;
	int _outcome;
	int _requestState;
	SCD_Struct_DR2 _has;

}

@property (assign,nonatomic) char hasOutcome; 
@property (assign,nonatomic) int outcome;                           //@synthesize outcome=_outcome - In the implementation block
@property (assign,nonatomic) char hasRequestState; 
@property (assign,nonatomic) int requestState;                      //@synthesize requestState=_requestState - In the implementation block
@property (assign,nonatomic) char hasCount; 
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)count;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned long long)arg1 ;
-(int)outcome;
-(void)setOutcome:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(char)arg1 ;
-(char)hasCount;
-(void)setHasOutcome:(char)arg1 ;
-(char)hasOutcome;
-(id)outcomeAsString:(int)arg1 ;
-(int)StringAsOutcome:(id)arg1 ;
-(int)requestState;
-(void)setRequestState:(int)arg1 ;
-(void)setHasRequestState:(char)arg1 ;
-(char)hasRequestState;
-(id)requestStateAsString:(int)arg1 ;
-(int)StringAsRequestState:(id)arg1 ;
@end

