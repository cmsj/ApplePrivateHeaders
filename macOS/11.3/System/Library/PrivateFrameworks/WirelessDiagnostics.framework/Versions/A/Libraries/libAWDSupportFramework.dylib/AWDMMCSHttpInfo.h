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

@interface AWDMMCSHttpInfo : PBCodable <NSCopying> {

	long long _duration;
	long long _networkServiceType;
	long long _responseReceivedDuration;
	long long _startTime;
	int _adaptiveTcpReadTimeout;
	int _adaptiveTcpWriteTimeout;
	int _errorCode;
	NSString* _errorDomain;
	NSMutableArray* _httpErrors;
	int _httpStatus;
	NSString* _interfaceIdentifier;
	NSString* _locatorHostname;
	NSString* _locatorPeerAddress;
	unsigned _locatorPort;
	NSString* _locatorScheme;
	NSString* _networkUsed;
	int _qualityOfService;
	int _requestSize;
	int _responseSize;
	NSMutableArray* _tcpInfos;
	char _allowsCellular;
	char _allowsPowerNapScheduling;
	char _cancelled;
	char _connectionReused;
	char _fastFail;
	char _finalTryInRequest;
	char _forceNondiscretionary;
	char _inlineEdgeComplete;
	char _powerPluggedInAtEnd;
	char _powerPluggedInAtStart;
	char _powerPluggedInWhenQueued;
	char _proxyUsed;
	char _requiresPowerPluggedIn;
	char _timedOut;
	char _transactionComplete;
	SCD_Struct_AW32 _has;

}

@property (nonatomic,readonly) char hasLocatorScheme; 
@property (nonatomic,retain) NSString * locatorScheme;                        //@synthesize locatorScheme=_locatorScheme - In the implementation block
@property (nonatomic,readonly) char hasLocatorHostname; 
@property (nonatomic,retain) NSString * locatorHostname;                      //@synthesize locatorHostname=_locatorHostname - In the implementation block
@property (assign,nonatomic) char hasLocatorPort; 
@property (assign,nonatomic) unsigned locatorPort;                            //@synthesize locatorPort=_locatorPort - In the implementation block
@property (assign,nonatomic) char hasConnectionReused; 
@property (assign,nonatomic) char connectionReused;                           //@synthesize connectionReused=_connectionReused - In the implementation block
@property (assign,nonatomic) char hasStartTime; 
@property (assign,nonatomic) long long startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char hasResponseReceivedDuration; 
@property (assign,nonatomic) long long responseReceivedDuration;              //@synthesize responseReceivedDuration=_responseReceivedDuration - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) long long duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasHttpStatus; 
@property (assign,nonatomic) int httpStatus;                                  //@synthesize httpStatus=_httpStatus - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                          //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char hasRequestSize; 
@property (assign,nonatomic) int requestSize;                                 //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) char hasResponseSize; 
@property (assign,nonatomic) int responseSize;                                //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) char hasTransactionComplete; 
@property (assign,nonatomic) char transactionComplete;                        //@synthesize transactionComplete=_transactionComplete - In the implementation block
@property (assign,nonatomic) char hasTimedOut; 
@property (assign,nonatomic) char timedOut;                                   //@synthesize timedOut=_timedOut - In the implementation block
@property (assign,nonatomic) char hasCancelled; 
@property (assign,nonatomic) char cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpInfos;                       //@synthesize tcpInfos=_tcpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * httpErrors;                     //@synthesize httpErrors=_httpErrors - In the implementation block
@property (nonatomic,readonly) char hasInterfaceIdentifier; 
@property (nonatomic,retain) NSString * interfaceIdentifier;                  //@synthesize interfaceIdentifier=_interfaceIdentifier - In the implementation block
@property (nonatomic,readonly) char hasLocatorPeerAddress; 
@property (nonatomic,retain) NSString * locatorPeerAddress;                   //@synthesize locatorPeerAddress=_locatorPeerAddress - In the implementation block
@property (assign,nonatomic) char hasRequiresPowerPluggedIn; 
@property (assign,nonatomic) char requiresPowerPluggedIn;                     //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) char hasAllowsPowerNapScheduling; 
@property (assign,nonatomic) char allowsPowerNapScheduling;                   //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) char hasAllowsCellular; 
@property (assign,nonatomic) char allowsCellular;                             //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) char hasForceNondiscretionary; 
@property (assign,nonatomic) char forceNondiscretionary;                      //@synthesize forceNondiscretionary=_forceNondiscretionary - In the implementation block
@property (assign,nonatomic) char hasFastFail; 
@property (assign,nonatomic) char fastFail;                                   //@synthesize fastFail=_fastFail - In the implementation block
@property (assign,nonatomic) char hasQualityOfService; 
@property (assign,nonatomic) int qualityOfService;                            //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) char hasProxyUsed; 
@property (assign,nonatomic) char proxyUsed;                                  //@synthesize proxyUsed=_proxyUsed - In the implementation block
@property (assign,nonatomic) char hasFinalTryInRequest; 
@property (assign,nonatomic) char finalTryInRequest;                          //@synthesize finalTryInRequest=_finalTryInRequest - In the implementation block
@property (assign,nonatomic) char hasInlineEdgeComplete; 
@property (assign,nonatomic) char inlineEdgeComplete;                         //@synthesize inlineEdgeComplete=_inlineEdgeComplete - In the implementation block
@property (assign,nonatomic) char hasAdaptiveTcpReadTimeout; 
@property (assign,nonatomic) int adaptiveTcpReadTimeout;                      //@synthesize adaptiveTcpReadTimeout=_adaptiveTcpReadTimeout - In the implementation block
@property (assign,nonatomic) char hasAdaptiveTcpWriteTimeout; 
@property (assign,nonatomic) int adaptiveTcpWriteTimeout;                     //@synthesize adaptiveTcpWriteTimeout=_adaptiveTcpWriteTimeout - In the implementation block
@property (assign,nonatomic) char hasPowerPluggedInWhenQueued; 
@property (assign,nonatomic) char powerPluggedInWhenQueued;                   //@synthesize powerPluggedInWhenQueued=_powerPluggedInWhenQueued - In the implementation block
@property (assign,nonatomic) char hasPowerPluggedInAtStart; 
@property (assign,nonatomic) char powerPluggedInAtStart;                      //@synthesize powerPluggedInAtStart=_powerPluggedInAtStart - In the implementation block
@property (assign,nonatomic) char hasPowerPluggedInAtEnd; 
@property (assign,nonatomic) char powerPluggedInAtEnd;                        //@synthesize powerPluggedInAtEnd=_powerPluggedInAtEnd - In the implementation block
@property (nonatomic,readonly) char hasNetworkUsed; 
@property (nonatomic,retain) NSString * networkUsed;                          //@synthesize networkUsed=_networkUsed - In the implementation block
@property (assign,nonatomic) char hasNetworkServiceType; 
@property (assign,nonatomic) long long networkServiceType;                    //@synthesize networkServiceType=_networkServiceType - In the implementation block
+(Class)tcpInfoType;
+(Class)httpErrorType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setQualityOfService:(int)arg1 ;
-(long long)startTime;
-(void)setStartTime:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(int)qualityOfService;
-(char)cancelled;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setCancelled:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)errorCode;
-(char)hasQualityOfService;
-(void)setHasQualityOfService:(char)arg1 ;
-(char)timedOut;
-(void)setHasStartTime:(char)arg1 ;
-(char)hasStartTime;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSString *)errorDomain;
-(char)hasErrorDomain;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(void)setRequiresPowerPluggedIn:(char)arg1 ;
-(void)setHasCancelled:(char)arg1 ;
-(char)hasCancelled;
-(void)setHttpStatus:(int)arg1 ;
-(int)httpStatus;
-(void)setHasHttpStatus:(char)arg1 ;
-(char)hasHttpStatus;
-(long long)networkServiceType;
-(void)setNetworkServiceType:(long long)arg1 ;
-(void)setConnectionReused:(char)arg1 ;
-(char)connectionReused;
-(void)setRequestSize:(int)arg1 ;
-(void)setHasRequestSize:(char)arg1 ;
-(char)hasRequestSize;
-(int)requestSize;
-(void)setLocatorScheme:(NSString *)arg1 ;
-(void)setLocatorHostname:(NSString *)arg1 ;
-(void)setTcpInfos:(NSMutableArray *)arg1 ;
-(void)setHttpErrors:(NSMutableArray *)arg1 ;
-(void)setInterfaceIdentifier:(NSString *)arg1 ;
-(void)setLocatorPeerAddress:(NSString *)arg1 ;
-(void)setNetworkUsed:(NSString *)arg1 ;
-(void)addTcpInfo:(id)arg1 ;
-(void)addHttpError:(id)arg1 ;
-(unsigned long long)tcpInfosCount;
-(void)clearTcpInfos;
-(id)tcpInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)httpErrorsCount;
-(void)clearHttpErrors;
-(id)httpErrorAtIndex:(unsigned long long)arg1 ;
-(char)hasLocatorScheme;
-(char)hasLocatorHostname;
-(void)setLocatorPort:(unsigned)arg1 ;
-(void)setHasLocatorPort:(char)arg1 ;
-(char)hasLocatorPort;
-(void)setHasConnectionReused:(char)arg1 ;
-(char)hasConnectionReused;
-(void)setResponseReceivedDuration:(long long)arg1 ;
-(void)setHasResponseReceivedDuration:(char)arg1 ;
-(char)hasResponseReceivedDuration;
-(void)setResponseSize:(int)arg1 ;
-(void)setHasResponseSize:(char)arg1 ;
-(char)hasResponseSize;
-(void)setTransactionComplete:(char)arg1 ;
-(void)setHasTransactionComplete:(char)arg1 ;
-(char)hasTransactionComplete;
-(void)setTimedOut:(char)arg1 ;
-(void)setHasTimedOut:(char)arg1 ;
-(char)hasTimedOut;
-(char)hasInterfaceIdentifier;
-(char)hasLocatorPeerAddress;
-(void)setHasRequiresPowerPluggedIn:(char)arg1 ;
-(char)hasRequiresPowerPluggedIn;
-(void)setAllowsPowerNapScheduling:(char)arg1 ;
-(void)setHasAllowsPowerNapScheduling:(char)arg1 ;
-(char)hasAllowsPowerNapScheduling;
-(void)setAllowsCellular:(char)arg1 ;
-(void)setHasAllowsCellular:(char)arg1 ;
-(char)hasAllowsCellular;
-(void)setForceNondiscretionary:(char)arg1 ;
-(void)setHasForceNondiscretionary:(char)arg1 ;
-(char)hasForceNondiscretionary;
-(void)setFastFail:(char)arg1 ;
-(void)setHasFastFail:(char)arg1 ;
-(char)hasFastFail;
-(void)setProxyUsed:(char)arg1 ;
-(void)setHasProxyUsed:(char)arg1 ;
-(char)hasProxyUsed;
-(void)setFinalTryInRequest:(char)arg1 ;
-(void)setHasFinalTryInRequest:(char)arg1 ;
-(char)hasFinalTryInRequest;
-(void)setInlineEdgeComplete:(char)arg1 ;
-(void)setHasInlineEdgeComplete:(char)arg1 ;
-(char)hasInlineEdgeComplete;
-(void)setAdaptiveTcpReadTimeout:(int)arg1 ;
-(void)setHasAdaptiveTcpReadTimeout:(char)arg1 ;
-(char)hasAdaptiveTcpReadTimeout;
-(void)setAdaptiveTcpWriteTimeout:(int)arg1 ;
-(void)setHasAdaptiveTcpWriteTimeout:(char)arg1 ;
-(char)hasAdaptiveTcpWriteTimeout;
-(void)setPowerPluggedInWhenQueued:(char)arg1 ;
-(void)setHasPowerPluggedInWhenQueued:(char)arg1 ;
-(char)hasPowerPluggedInWhenQueued;
-(void)setPowerPluggedInAtStart:(char)arg1 ;
-(void)setHasPowerPluggedInAtStart:(char)arg1 ;
-(char)hasPowerPluggedInAtStart;
-(void)setPowerPluggedInAtEnd:(char)arg1 ;
-(void)setHasPowerPluggedInAtEnd:(char)arg1 ;
-(char)hasPowerPluggedInAtEnd;
-(char)hasNetworkUsed;
-(void)setHasNetworkServiceType:(char)arg1 ;
-(char)hasNetworkServiceType;
-(NSString *)locatorScheme;
-(NSString *)locatorHostname;
-(unsigned)locatorPort;
-(long long)responseReceivedDuration;
-(int)responseSize;
-(char)transactionComplete;
-(NSMutableArray *)tcpInfos;
-(NSMutableArray *)httpErrors;
-(NSString *)interfaceIdentifier;
-(NSString *)locatorPeerAddress;
-(char)requiresPowerPluggedIn;
-(char)allowsPowerNapScheduling;
-(char)allowsCellular;
-(char)forceNondiscretionary;
-(char)fastFail;
-(char)proxyUsed;
-(char)finalTryInRequest;
-(char)inlineEdgeComplete;
-(int)adaptiveTcpReadTimeout;
-(int)adaptiveTcpWriteTimeout;
-(char)powerPluggedInWhenQueued;
-(char)powerPluggedInAtStart;
-(char)powerPluggedInAtEnd;
-(NSString *)networkUsed;
@end
