/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/Versions/A/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class C2MPCloudKitInfo, C2MPDeviceInfo, C2MPGenericEvent, C2MPNetworkEvent, NSString, C2MPServerInfo;

@interface C2MPMetric : PBCodable <NSCopying> {

	unsigned long long _reportFrequency;
	unsigned long long _reportFrequencyBase;
	unsigned long long _triggers;
	C2MPCloudKitInfo* _cloudkitInfo;
	C2MPDeviceInfo* _deviceInfo;
	C2MPGenericEvent* _genericEvent;
	int _metricType;
	C2MPNetworkEvent* _networkEvent;
	NSString* _reportTransportSourceApplicationBundleIdentifier;
	NSString* _reportTransportSourceApplicationSecondaryIdentifier;
	C2MPServerInfo* _serverInfo;
	char _reportTransportAllowExpensiveAccess;
	char _reportTransportAllowPowerNapScheduling;
	SCD_Struct_C26 _has;

}

@property (assign,nonatomic) char hasMetricType; 
@property (assign,nonatomic) int metricType;                                                              //@synthesize metricType=_metricType - In the implementation block
@property (nonatomic,readonly) char hasDeviceInfo; 
@property (nonatomic,retain) C2MPDeviceInfo * deviceInfo;                                                 //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) char hasCloudkitInfo; 
@property (nonatomic,retain) C2MPCloudKitInfo * cloudkitInfo;                                             //@synthesize cloudkitInfo=_cloudkitInfo - In the implementation block
@property (nonatomic,readonly) char hasServerInfo; 
@property (nonatomic,retain) C2MPServerInfo * serverInfo;                                                 //@synthesize serverInfo=_serverInfo - In the implementation block
@property (assign,nonatomic) char hasTriggers; 
@property (assign,nonatomic) unsigned long long triggers;                                                 //@synthesize triggers=_triggers - In the implementation block
@property (assign,nonatomic) char hasReportFrequency; 
@property (assign,nonatomic) unsigned long long reportFrequency;                                          //@synthesize reportFrequency=_reportFrequency - In the implementation block
@property (assign,nonatomic) char hasReportFrequencyBase; 
@property (assign,nonatomic) unsigned long long reportFrequencyBase;                                      //@synthesize reportFrequencyBase=_reportFrequencyBase - In the implementation block
@property (assign,nonatomic) char hasReportTransportAllowExpensiveAccess; 
@property (assign,nonatomic) char reportTransportAllowExpensiveAccess;                                    //@synthesize reportTransportAllowExpensiveAccess=_reportTransportAllowExpensiveAccess - In the implementation block
@property (assign,nonatomic) char hasReportTransportAllowPowerNapScheduling; 
@property (assign,nonatomic) char reportTransportAllowPowerNapScheduling;                                 //@synthesize reportTransportAllowPowerNapScheduling=_reportTransportAllowPowerNapScheduling - In the implementation block
@property (nonatomic,readonly) char hasReportTransportSourceApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * reportTransportSourceApplicationBundleIdentifier;                 //@synthesize reportTransportSourceApplicationBundleIdentifier=_reportTransportSourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasReportTransportSourceApplicationSecondaryIdentifier; 
@property (nonatomic,retain) NSString * reportTransportSourceApplicationSecondaryIdentifier;              //@synthesize reportTransportSourceApplicationSecondaryIdentifier=_reportTransportSourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,readonly) char hasNetworkEvent; 
@property (nonatomic,retain) C2MPNetworkEvent * networkEvent;                                             //@synthesize networkEvent=_networkEvent - In the implementation block
@property (nonatomic,readonly) char hasGenericEvent; 
@property (nonatomic,retain) C2MPGenericEvent * genericEvent;                                             //@synthesize genericEvent=_genericEvent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(C2MPDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(C2MPDeviceInfo *)arg1 ;
-(void)setMetricType:(int)arg1 ;
-(int)metricType;
-(void)setHasMetricType:(char)arg1 ;
-(char)hasMetricType;
-(id)metricTypeAsString:(int)arg1 ;
-(int)StringAsMetricType:(id)arg1 ;
-(void)setNetworkEvent:(C2MPNetworkEvent *)arg1 ;
-(C2MPNetworkEvent *)networkEvent;
-(char)hasNetworkEvent;
-(unsigned long long)reportFrequency;
-(void)setReportFrequency:(unsigned long long)arg1 ;
-(unsigned long long)reportFrequencyBase;
-(void)setReportFrequencyBase:(unsigned long long)arg1 ;
-(void)setTriggers:(unsigned long long)arg1 ;
-(void)setHasTriggers:(char)arg1 ;
-(char)hasTriggers;
-(void)setHasReportFrequency:(char)arg1 ;
-(char)hasReportFrequency;
-(void)setHasReportFrequencyBase:(char)arg1 ;
-(char)hasReportFrequencyBase;
-(unsigned long long)triggers;
-(void)setCloudkitInfo:(C2MPCloudKitInfo *)arg1 ;
-(void)setReportTransportAllowExpensiveAccess:(char)arg1 ;
-(void)setReportTransportAllowPowerNapScheduling:(char)arg1 ;
-(void)setReportTransportSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setReportTransportSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setGenericEvent:(C2MPGenericEvent *)arg1 ;
-(void)setServerInfo:(C2MPServerInfo *)arg1 ;
-(char)hasDeviceInfo;
-(char)hasCloudkitInfo;
-(char)hasServerInfo;
-(void)setHasReportTransportAllowExpensiveAccess:(char)arg1 ;
-(char)hasReportTransportAllowExpensiveAccess;
-(void)setHasReportTransportAllowPowerNapScheduling:(char)arg1 ;
-(char)hasReportTransportAllowPowerNapScheduling;
-(char)hasReportTransportSourceApplicationBundleIdentifier;
-(char)hasReportTransportSourceApplicationSecondaryIdentifier;
-(char)hasGenericEvent;
-(C2MPCloudKitInfo *)cloudkitInfo;
-(C2MPServerInfo *)serverInfo;
-(char)reportTransportAllowExpensiveAccess;
-(char)reportTransportAllowPowerNapScheduling;
-(NSString *)reportTransportSourceApplicationBundleIdentifier;
-(NSString *)reportTransportSourceApplicationSecondaryIdentifier;
-(C2MPGenericEvent *)genericEvent;
@end

