/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIMessageHealthCheckPerformed : PBCodable <NSCopying> {

	SCD_Struct_AW21* _aliasesMatcheds;
	SCD_Struct_AW21* _coarseMatcheds;
	SCD_Struct_AW21* _numMisseds;
	SCD_Struct_AW21* _numOutOfOrders;
	unsigned long long _timestamp;
	unsigned _numMessages;
	unsigned _numberOfRequests;
	unsigned _numberOfResponses;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNumberOfRequests; 
@property (assign,nonatomic) unsigned numberOfRequests;                              //@synthesize numberOfRequests=_numberOfRequests - In the implementation block
@property (assign,nonatomic) char hasNumberOfResponses; 
@property (assign,nonatomic) unsigned numberOfResponses;                             //@synthesize numberOfResponses=_numberOfResponses - In the implementation block
@property (assign,nonatomic) char hasNumMessages; 
@property (assign,nonatomic) unsigned numMessages;                                   //@synthesize numMessages=_numMessages - In the implementation block
@property (nonatomic,readonly) unsigned long long numOutOfOrdersCount; 
@property (nonatomic,readonly) unsigned* numOutOfOrders; 
@property (nonatomic,readonly) unsigned long long numMissedsCount; 
@property (nonatomic,readonly) unsigned* numMisseds; 
@property (nonatomic,readonly) unsigned long long aliasesMatchedsCount; 
@property (nonatomic,readonly) unsigned* aliasesMatcheds; 
@property (nonatomic,readonly) unsigned long long coarseMatchedsCount; 
@property (nonatomic,readonly) unsigned* coarseMatcheds; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
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
-(unsigned long long)numOutOfOrdersCount;
-(void)clearNumOutOfOrders;
-(unsigned)numOutOfOrderAtIndex:(unsigned long long)arg1 ;
-(void)addNumOutOfOrder:(unsigned)arg1 ;
-(unsigned long long)numMissedsCount;
-(void)clearNumMisseds;
-(unsigned)numMissedAtIndex:(unsigned long long)arg1 ;
-(void)addNumMissed:(unsigned)arg1 ;
-(unsigned long long)aliasesMatchedsCount;
-(void)clearAliasesMatcheds;
-(unsigned)aliasesMatchedAtIndex:(unsigned long long)arg1 ;
-(void)addAliasesMatched:(unsigned)arg1 ;
-(unsigned long long)coarseMatchedsCount;
-(void)clearCoarseMatcheds;
-(unsigned)coarseMatchedAtIndex:(unsigned long long)arg1 ;
-(void)addCoarseMatched:(unsigned)arg1 ;
-(void)setNumberOfRequests:(unsigned)arg1 ;
-(void)setHasNumberOfRequests:(char)arg1 ;
-(char)hasNumberOfRequests;
-(void)setNumberOfResponses:(unsigned)arg1 ;
-(void)setHasNumberOfResponses:(char)arg1 ;
-(char)hasNumberOfResponses;
-(void)setNumMessages:(unsigned)arg1 ;
-(void)setHasNumMessages:(char)arg1 ;
-(char)hasNumMessages;
-(unsigned*)numOutOfOrders;
-(void)setNumOutOfOrders:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)numMisseds;
-(void)setNumMisseds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)aliasesMatcheds;
-(void)setAliasesMatcheds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)coarseMatcheds;
-(void)setCoarseMatcheds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)numberOfRequests;
-(unsigned)numberOfResponses;
-(unsigned)numMessages;
@end

