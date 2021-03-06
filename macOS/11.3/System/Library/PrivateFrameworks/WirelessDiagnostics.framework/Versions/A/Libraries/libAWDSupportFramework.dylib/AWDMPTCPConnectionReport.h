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

@class NSString, NSMutableArray;

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying> {

	double _establishmentTime;
	double _postConnectSessionLifetime;
	unsigned long long _timestamp;
	NSString* _clientId;
	int _establishmentFailureError;
	NSString* _establishmentInterfaceName;
	int _establishmentSynRetransmits;
	NSMutableArray* _interfaceReports;
	int _postConnectSubflowAttemptCount;
	int _postConnectSubflowMaxSubflowCount;
	int _subflowSwitchingCount;
	NSMutableArray* _subflowSwitchingReports;
	char _establishmentCellularFallback;
	char _establishmentForcedTcpFallback;
	char _establishmentSuccess;
	char _establishmentTcpFallback;
	char _postConnectMultiHomed;
	char _postConnectSingleHomed;
	SCD_Struct_AW27 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasClientId; 
@property (nonatomic,retain) NSString * clientId;                                    //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,readonly) char hasEstablishmentInterfaceName; 
@property (nonatomic,retain) NSString * establishmentInterfaceName;                  //@synthesize establishmentInterfaceName=_establishmentInterfaceName - In the implementation block
@property (assign,nonatomic) char hasEstablishmentSuccess; 
@property (assign,nonatomic) char establishmentSuccess;                              //@synthesize establishmentSuccess=_establishmentSuccess - In the implementation block
@property (assign,nonatomic) char hasEstablishmentFailureError; 
@property (assign,nonatomic) int establishmentFailureError;                          //@synthesize establishmentFailureError=_establishmentFailureError - In the implementation block
@property (assign,nonatomic) char hasEstablishmentTcpFallback; 
@property (assign,nonatomic) char establishmentTcpFallback;                          //@synthesize establishmentTcpFallback=_establishmentTcpFallback - In the implementation block
@property (assign,nonatomic) char hasEstablishmentCellularFallback; 
@property (assign,nonatomic) char establishmentCellularFallback;                     //@synthesize establishmentCellularFallback=_establishmentCellularFallback - In the implementation block
@property (assign,nonatomic) char hasEstablishmentTime; 
@property (assign,nonatomic) double establishmentTime;                               //@synthesize establishmentTime=_establishmentTime - In the implementation block
@property (assign,nonatomic) char hasEstablishmentSynRetransmits; 
@property (assign,nonatomic) int establishmentSynRetransmits;                        //@synthesize establishmentSynRetransmits=_establishmentSynRetransmits - In the implementation block
@property (assign,nonatomic) char hasEstablishmentForcedTcpFallback; 
@property (assign,nonatomic) char establishmentForcedTcpFallback;                    //@synthesize establishmentForcedTcpFallback=_establishmentForcedTcpFallback - In the implementation block
@property (assign,nonatomic) char hasPostConnectMultiHomed; 
@property (assign,nonatomic) char postConnectMultiHomed;                             //@synthesize postConnectMultiHomed=_postConnectMultiHomed - In the implementation block
@property (assign,nonatomic) char hasPostConnectSingleHomed; 
@property (assign,nonatomic) char postConnectSingleHomed;                            //@synthesize postConnectSingleHomed=_postConnectSingleHomed - In the implementation block
@property (assign,nonatomic) char hasPostConnectSubflowAttemptCount; 
@property (assign,nonatomic) int postConnectSubflowAttemptCount;                     //@synthesize postConnectSubflowAttemptCount=_postConnectSubflowAttemptCount - In the implementation block
@property (assign,nonatomic) char hasPostConnectSubflowMaxSubflowCount; 
@property (assign,nonatomic) int postConnectSubflowMaxSubflowCount;                  //@synthesize postConnectSubflowMaxSubflowCount=_postConnectSubflowMaxSubflowCount - In the implementation block
@property (assign,nonatomic) char hasPostConnectSessionLifetime; 
@property (assign,nonatomic) double postConnectSessionLifetime;                      //@synthesize postConnectSessionLifetime=_postConnectSessionLifetime - In the implementation block
@property (assign,nonatomic) char hasSubflowSwitchingCount; 
@property (assign,nonatomic) int subflowSwitchingCount;                              //@synthesize subflowSwitchingCount=_subflowSwitchingCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * interfaceReports;                      //@synthesize interfaceReports=_interfaceReports - In the implementation block
@property (nonatomic,retain) NSMutableArray * subflowSwitchingReports;               //@synthesize subflowSwitchingReports=_subflowSwitchingReports - In the implementation block
+(Class)interfaceReportsType;
+(Class)subflowSwitchingReportsType;
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
-(NSString *)clientId;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(void)setEstablishmentInterfaceName:(NSString *)arg1 ;
-(void)setInterfaceReports:(NSMutableArray *)arg1 ;
-(void)setSubflowSwitchingReports:(NSMutableArray *)arg1 ;
-(void)addInterfaceReports:(id)arg1 ;
-(void)addSubflowSwitchingReports:(id)arg1 ;
-(unsigned long long)interfaceReportsCount;
-(void)clearInterfaceReports;
-(id)interfaceReportsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)subflowSwitchingReportsCount;
-(void)clearSubflowSwitchingReports;
-(id)subflowSwitchingReportsAtIndex:(unsigned long long)arg1 ;
-(char)hasClientId;
-(char)hasEstablishmentInterfaceName;
-(void)setEstablishmentSuccess:(char)arg1 ;
-(void)setHasEstablishmentSuccess:(char)arg1 ;
-(char)hasEstablishmentSuccess;
-(void)setEstablishmentFailureError:(int)arg1 ;
-(void)setHasEstablishmentFailureError:(char)arg1 ;
-(char)hasEstablishmentFailureError;
-(void)setEstablishmentTcpFallback:(char)arg1 ;
-(void)setHasEstablishmentTcpFallback:(char)arg1 ;
-(char)hasEstablishmentTcpFallback;
-(void)setEstablishmentCellularFallback:(char)arg1 ;
-(void)setHasEstablishmentCellularFallback:(char)arg1 ;
-(char)hasEstablishmentCellularFallback;
-(void)setEstablishmentTime:(double)arg1 ;
-(void)setHasEstablishmentTime:(char)arg1 ;
-(char)hasEstablishmentTime;
-(void)setEstablishmentSynRetransmits:(int)arg1 ;
-(void)setHasEstablishmentSynRetransmits:(char)arg1 ;
-(char)hasEstablishmentSynRetransmits;
-(void)setEstablishmentForcedTcpFallback:(char)arg1 ;
-(void)setHasEstablishmentForcedTcpFallback:(char)arg1 ;
-(char)hasEstablishmentForcedTcpFallback;
-(void)setPostConnectMultiHomed:(char)arg1 ;
-(void)setHasPostConnectMultiHomed:(char)arg1 ;
-(char)hasPostConnectMultiHomed;
-(void)setPostConnectSingleHomed:(char)arg1 ;
-(void)setHasPostConnectSingleHomed:(char)arg1 ;
-(char)hasPostConnectSingleHomed;
-(void)setPostConnectSubflowAttemptCount:(int)arg1 ;
-(void)setHasPostConnectSubflowAttemptCount:(char)arg1 ;
-(char)hasPostConnectSubflowAttemptCount;
-(void)setPostConnectSubflowMaxSubflowCount:(int)arg1 ;
-(void)setHasPostConnectSubflowMaxSubflowCount:(char)arg1 ;
-(char)hasPostConnectSubflowMaxSubflowCount;
-(void)setPostConnectSessionLifetime:(double)arg1 ;
-(void)setHasPostConnectSessionLifetime:(char)arg1 ;
-(char)hasPostConnectSessionLifetime;
-(void)setSubflowSwitchingCount:(int)arg1 ;
-(void)setHasSubflowSwitchingCount:(char)arg1 ;
-(char)hasSubflowSwitchingCount;
-(NSString *)establishmentInterfaceName;
-(char)establishmentSuccess;
-(int)establishmentFailureError;
-(char)establishmentTcpFallback;
-(char)establishmentCellularFallback;
-(double)establishmentTime;
-(int)establishmentSynRetransmits;
-(char)establishmentForcedTcpFallback;
-(char)postConnectMultiHomed;
-(char)postConnectSingleHomed;
-(int)postConnectSubflowAttemptCount;
-(int)postConnectSubflowMaxSubflowCount;
-(double)postConnectSessionLifetime;
-(int)subflowSwitchingCount;
-(NSMutableArray *)interfaceReports;
-(NSMutableArray *)subflowSwitchingReports;
@end

