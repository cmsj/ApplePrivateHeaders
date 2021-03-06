/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDLBClientConnectionReport : PBCodable <NSCopying> {

	long long _bytesReceived;
	long long _bytesSent;
	long long _connectionDuration;
	unsigned long long _connectionServiceId;
	long long _timeToConnectionFailure;
	long long _timeToFirstResponse;
	unsigned long long _timestamp;
	int _connectionJoiningFailure;
	int _connectionJoiningLbConnectionMigration;
	int _connectionJoiningLbConnectionState;
	int _dataPathResult;
	SCD_Struct_NW6 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasConnectionJoiningFailure; 
@property (assign,nonatomic) int connectionJoiningFailure;                                //@synthesize connectionJoiningFailure=_connectionJoiningFailure - In the implementation block
@property (assign,nonatomic) char hasConnectionJoiningLbConnectionState; 
@property (assign,nonatomic) int connectionJoiningLbConnectionState;                      //@synthesize connectionJoiningLbConnectionState=_connectionJoiningLbConnectionState - In the implementation block
@property (assign,nonatomic) char hasConnectionJoiningLbConnectionMigration; 
@property (assign,nonatomic) int connectionJoiningLbConnectionMigration;                  //@synthesize connectionJoiningLbConnectionMigration=_connectionJoiningLbConnectionMigration - In the implementation block
@property (assign,nonatomic) char hasConnectionServiceId; 
@property (assign,nonatomic) unsigned long long connectionServiceId;                      //@synthesize connectionServiceId=_connectionServiceId - In the implementation block
@property (assign,nonatomic) char hasConnectionDuration; 
@property (assign,nonatomic) long long connectionDuration;                                //@synthesize connectionDuration=_connectionDuration - In the implementation block
@property (assign,nonatomic) char hasDataPathResult; 
@property (assign,nonatomic) int dataPathResult;                                          //@synthesize dataPathResult=_dataPathResult - In the implementation block
@property (assign,nonatomic) char hasBytesSent; 
@property (assign,nonatomic) long long bytesSent;                                         //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) char hasBytesReceived; 
@property (assign,nonatomic) long long bytesReceived;                                     //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign,nonatomic) char hasTimeToFirstResponse; 
@property (assign,nonatomic) long long timeToFirstResponse;                               //@synthesize timeToFirstResponse=_timeToFirstResponse - In the implementation block
@property (assign,nonatomic) char hasTimeToConnectionFailure; 
@property (assign,nonatomic) long long timeToConnectionFailure;                           //@synthesize timeToConnectionFailure=_timeToConnectionFailure - In the implementation block
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
-(long long)bytesSent;
-(void)setBytesSent:(long long)arg1 ;
-(long long)bytesReceived;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasBytesSent:(char)arg1 ;
-(char)hasBytesSent;
-(void)setBytesReceived:(long long)arg1 ;
-(void)setHasBytesReceived:(char)arg1 ;
-(char)hasBytesReceived;
-(void)setConnectionJoiningFailure:(int)arg1 ;
-(void)setHasConnectionJoiningFailure:(char)arg1 ;
-(char)hasConnectionJoiningFailure;
-(void)setConnectionJoiningLbConnectionState:(int)arg1 ;
-(void)setHasConnectionJoiningLbConnectionState:(char)arg1 ;
-(char)hasConnectionJoiningLbConnectionState;
-(void)setConnectionJoiningLbConnectionMigration:(int)arg1 ;
-(void)setHasConnectionJoiningLbConnectionMigration:(char)arg1 ;
-(char)hasConnectionJoiningLbConnectionMigration;
-(void)setConnectionServiceId:(unsigned long long)arg1 ;
-(void)setHasConnectionServiceId:(char)arg1 ;
-(char)hasConnectionServiceId;
-(void)setConnectionDuration:(long long)arg1 ;
-(void)setHasConnectionDuration:(char)arg1 ;
-(char)hasConnectionDuration;
-(void)setDataPathResult:(int)arg1 ;
-(void)setHasDataPathResult:(char)arg1 ;
-(char)hasDataPathResult;
-(void)setTimeToFirstResponse:(long long)arg1 ;
-(void)setHasTimeToFirstResponse:(char)arg1 ;
-(char)hasTimeToFirstResponse;
-(void)setTimeToConnectionFailure:(long long)arg1 ;
-(void)setHasTimeToConnectionFailure:(char)arg1 ;
-(char)hasTimeToConnectionFailure;
-(int)connectionJoiningFailure;
-(int)connectionJoiningLbConnectionState;
-(int)connectionJoiningLbConnectionMigration;
-(unsigned long long)connectionServiceId;
-(long long)connectionDuration;
-(int)dataPathResult;
-(long long)timeToFirstResponse;
-(long long)timeToConnectionFailure;
@end

