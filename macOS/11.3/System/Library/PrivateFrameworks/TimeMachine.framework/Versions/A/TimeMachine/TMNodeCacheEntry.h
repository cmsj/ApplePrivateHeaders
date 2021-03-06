/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeMachine/TimeMachine-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMNodeCacheEntry : PBCodable <NSCopying> {

	unsigned long long _destinationFileID;
	unsigned long long _sourceFileID;
	unsigned _flags;
	SCD_Struct_TM14 _has;

}

@property (assign,nonatomic) char hasSourceFileID; 
@property (assign,nonatomic) unsigned long long sourceFileID;                   //@synthesize sourceFileID=_sourceFileID - In the implementation block
@property (assign,nonatomic) char hasDestinationFileID; 
@property (assign,nonatomic) unsigned long long destinationFileID;              //@synthesize destinationFileID=_destinationFileID - In the implementation block
@property (assign,nonatomic) unsigned flags;                                    //@synthesize flags=_flags - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)flags;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setFlags:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)sourceFileID;
-(unsigned long long)destinationFileID;
-(void)setSourceFileID:(unsigned long long)arg1 ;
-(void)setDestinationFileID:(unsigned long long)arg1 ;
-(void)setHasSourceFileID:(char)arg1 ;
-(char)hasSourceFileID;
-(void)setHasDestinationFileID:(char)arg1 ;
-(char)hasDestinationFileID;
@end

