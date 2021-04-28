/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTCPConnectionInfo : PBCodable <NSCopying> {

	unsigned _dnsResolutionLatency;
	int _interfaceType;
	unsigned _tcpHandshakeLatency;
	unsigned _tcpRetransmissions;
	unsigned _tcpRxBytes;
	unsigned _tcpTxBytes;
	unsigned _tlsLatency;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) char hasDnsResolutionLatency; 
@property (assign,nonatomic) unsigned dnsResolutionLatency;              //@synthesize dnsResolutionLatency=_dnsResolutionLatency - In the implementation block
@property (assign,nonatomic) char hasTcpHandshakeLatency; 
@property (assign,nonatomic) unsigned tcpHandshakeLatency;               //@synthesize tcpHandshakeLatency=_tcpHandshakeLatency - In the implementation block
@property (assign,nonatomic) char hasTlsLatency; 
@property (assign,nonatomic) unsigned tlsLatency;                        //@synthesize tlsLatency=_tlsLatency - In the implementation block
@property (assign,nonatomic) char hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                          //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) char hasTcpRetransmissions; 
@property (assign,nonatomic) unsigned tcpRetransmissions;                //@synthesize tcpRetransmissions=_tcpRetransmissions - In the implementation block
@property (assign,nonatomic) char hasTcpTxBytes; 
@property (assign,nonatomic) unsigned tcpTxBytes;                        //@synthesize tcpTxBytes=_tcpTxBytes - In the implementation block
@property (assign,nonatomic) char hasTcpRxBytes; 
@property (assign,nonatomic) unsigned tcpRxBytes;                        //@synthesize tcpRxBytes=_tcpRxBytes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)interfaceType;
-(void)setInterfaceType:(int)arg1 ;
-(void)setHasInterfaceType:(char)arg1 ;
-(char)hasInterfaceType;
-(id)interfaceTypeAsString:(int)arg1 ;
-(int)StringAsInterfaceType:(id)arg1 ;
-(void)setDnsResolutionLatency:(unsigned)arg1 ;
-(void)setHasDnsResolutionLatency:(char)arg1 ;
-(char)hasDnsResolutionLatency;
-(void)setTcpHandshakeLatency:(unsigned)arg1 ;
-(void)setHasTcpHandshakeLatency:(char)arg1 ;
-(char)hasTcpHandshakeLatency;
-(void)setTlsLatency:(unsigned)arg1 ;
-(void)setHasTlsLatency:(char)arg1 ;
-(char)hasTlsLatency;
-(void)setTcpRetransmissions:(unsigned)arg1 ;
-(void)setHasTcpRetransmissions:(char)arg1 ;
-(char)hasTcpRetransmissions;
-(void)setTcpTxBytes:(unsigned)arg1 ;
-(void)setHasTcpTxBytes:(char)arg1 ;
-(char)hasTcpTxBytes;
-(void)setTcpRxBytes:(unsigned)arg1 ;
-(void)setHasTcpRxBytes:(char)arg1 ;
-(char)hasTcpRxBytes;
-(unsigned)dnsResolutionLatency;
-(unsigned)tcpHandshakeLatency;
-(unsigned)tlsLatency;
-(unsigned)tcpRetransmissions;
-(unsigned)tcpTxBytes;
-(unsigned)tcpRxBytes;
@end
