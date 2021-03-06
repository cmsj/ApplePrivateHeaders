/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSNumber, NSDictionary;

@interface IDSSessionEndedMetric : NSObject <CUTCoreAnalyticsMetric> {

	char _isNetworkEnabled;
	char _isNetworkActive;
	char _isNetworkReachable;
	char _usesRelay;
	char _isInitiator;
	unsigned _endedReason;
	unsigned _genericError;
	unsigned _gameKitError;
	unsigned _conferenceMiscError;
	unsigned _networkCheckResult;
	unsigned _remoteNetworkConnection;
	unsigned _localNetworkConnection;
	unsigned _connectionType;
	NSString* _guid;
	NSNumber* _callDuration;
	NSNumber* _dataRate;
	NSNumber* _gksError;
	NSNumber* _connectDuration;
	NSNumber* _currentNATType;
	NSNumber* _remoteNATType;
	NSNumber* _relayConnectDuration;
	NSNumber* _linkQuality;
	NSNumber* _gksReturnCode;

}

@property (nonatomic,readonly) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned endedReason;                          //@synthesize endedReason=_endedReason - In the implementation block
@property (nonatomic,readonly) unsigned genericError;                         //@synthesize genericError=_genericError - In the implementation block
@property (nonatomic,readonly) unsigned gameKitError;                         //@synthesize gameKitError=_gameKitError - In the implementation block
@property (nonatomic,readonly) unsigned conferenceMiscError;                  //@synthesize conferenceMiscError=_conferenceMiscError - In the implementation block
@property (nonatomic,readonly) NSNumber * callDuration;                       //@synthesize callDuration=_callDuration - In the implementation block
@property (nonatomic,readonly) char isNetworkEnabled;                         //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (nonatomic,readonly) char isNetworkActive;                          //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (nonatomic,readonly) char isNetworkReachable;                       //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (nonatomic,readonly) unsigned networkCheckResult;                   //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (nonatomic,readonly) NSNumber * dataRate;                           //@synthesize dataRate=_dataRate - In the implementation block
@property (nonatomic,readonly) NSNumber * gksError;                           //@synthesize gksError=_gksError - In the implementation block
@property (nonatomic,readonly) NSNumber * connectDuration;                    //@synthesize connectDuration=_connectDuration - In the implementation block
@property (nonatomic,readonly) unsigned remoteNetworkConnection;              //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (nonatomic,readonly) unsigned localNetworkConnection;               //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (nonatomic,readonly) unsigned connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) char usesRelay;                                //@synthesize usesRelay=_usesRelay - In the implementation block
@property (nonatomic,readonly) NSNumber * currentNATType;                     //@synthesize currentNATType=_currentNATType - In the implementation block
@property (nonatomic,readonly) NSNumber * remoteNATType;                      //@synthesize remoteNATType=_remoteNATType - In the implementation block
@property (nonatomic,readonly) NSNumber * relayConnectDuration;               //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (nonatomic,readonly) char isInitiator;                              //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) NSNumber * linkQuality;                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (nonatomic,readonly) NSNumber * gksReturnCode;                      //@synthesize gksReturnCode=_gksReturnCode - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(unsigned)connectionType;
-(NSDictionary *)dictionaryRepresentation;
-(char)isInitiator;
-(char)isNetworkReachable;
-(NSString *)guid;
-(char)isNetworkEnabled;
-(char)isNetworkActive;
-(unsigned)endedReason;
-(unsigned)genericError;
-(unsigned)gameKitError;
-(unsigned)conferenceMiscError;
-(NSNumber *)callDuration;
-(unsigned)networkCheckResult;
-(NSNumber *)dataRate;
-(NSNumber *)gksError;
-(NSNumber *)connectDuration;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(char)usesRelay;
-(NSNumber *)currentNATType;
-(NSNumber *)remoteNATType;
-(NSNumber *)relayConnectDuration;
-(NSNumber *)linkQuality;
-(NSNumber *)gksReturnCode;
-(id)initWithGuid:(id)arg1 endedReason:(unsigned)arg2 genericError:(unsigned)arg3 gameKitError:(unsigned)arg4 conferenceMiscError:(unsigned)arg5 callDuration:(id)arg6 isNetworkEnabled:(char)arg7 isNetworkActive:(char)arg8 isNetworkReachable:(char)arg9 networkCheckResult:(unsigned)arg10 dataRate:(id)arg11 gksError:(id)arg12 connectDuration:(id)arg13 remoteNetworkConnection:(unsigned)arg14 localNetworkConnection:(unsigned)arg15 connectionType:(unsigned)arg16 usesRelay:(char)arg17 currentNATType:(id)arg18 remoteNATType:(id)arg19 relayConnectDuration:(id)arg20 isInitiator:(char)arg21 linkQuality:(id)arg22 gksReturnCode:(id)arg23 ;
@end

