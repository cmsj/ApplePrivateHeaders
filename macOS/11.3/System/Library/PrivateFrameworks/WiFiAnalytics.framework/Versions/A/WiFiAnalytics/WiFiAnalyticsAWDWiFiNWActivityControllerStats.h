/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics, WiFiAnalyticsAWDWiFiNWActivityBtCoex, WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions, WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation, WiFiAnalyticsAWDWiFiNWActivityPowerPStats, WiFiAnalyticsAWDWiFiNWActivityScanActivity;

@interface WiFiAnalyticsAWDWiFiNWActivityControllerStats : PBCodable <NSCopying> {

	WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics* _aggregateMetrics;
	unsigned _backoffStuck;
	WiFiAnalyticsAWDWiFiNWActivityBtCoex* _btCoex;
	unsigned _channel;
	unsigned _channelBandwidth;
	unsigned _channelsVisited0;
	unsigned _channelsVisited1;
	unsigned _controllerResets;
	WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions* _impedingFunctions;
	WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation* _phyrate;
	WiFiAnalyticsAWDWiFiNWActivityPowerPStats* _powerActivity;
	WiFiAnalyticsAWDWiFiNWActivityScanActivity* _scanActivity;
	SCD_Struct_Wi12 _has;

}

@property (assign,nonatomic) char hasControllerResets; 
@property (assign,nonatomic) unsigned controllerResets;                                                        //@synthesize controllerResets=_controllerResets - In the implementation block
@property (assign,nonatomic) char hasBackoffStuck; 
@property (assign,nonatomic) unsigned backoffStuck;                                                            //@synthesize backoffStuck=_backoffStuck - In the implementation block
@property (nonatomic,readonly) char hasScanActivity; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityScanActivity * scanActivity;                        //@synthesize scanActivity=_scanActivity - In the implementation block
@property (nonatomic,readonly) char hasPowerActivity; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityPowerPStats * powerActivity;                        //@synthesize powerActivity=_powerActivity - In the implementation block
@property (nonatomic,readonly) char hasImpedingFunctions; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions * impedingFunctions;              //@synthesize impedingFunctions=_impedingFunctions - In the implementation block
@property (nonatomic,readonly) char hasAggregateMetrics; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics * aggregateMetrics;                //@synthesize aggregateMetrics=_aggregateMetrics - In the implementation block
@property (nonatomic,readonly) char hasBtCoex; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityBtCoex * btCoex;                                    //@synthesize btCoex=_btCoex - In the implementation block
@property (assign,nonatomic) char hasChannelsVisited0; 
@property (assign,nonatomic) unsigned channelsVisited0;                                                        //@synthesize channelsVisited0=_channelsVisited0 - In the implementation block
@property (assign,nonatomic) char hasChannelsVisited1; 
@property (assign,nonatomic) unsigned channelsVisited1;                                                        //@synthesize channelsVisited1=_channelsVisited1 - In the implementation block
@property (nonatomic,readonly) char hasPhyrate; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation * phyrate;                       //@synthesize phyrate=_phyrate - In the implementation block
@property (assign,nonatomic) char hasChannel; 
@property (assign,nonatomic) unsigned channel;                                                                 //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) char hasChannelBandwidth; 
@property (assign,nonatomic) unsigned channelBandwidth;                                                        //@synthesize channelBandwidth=_channelBandwidth - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)channel;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(char)arg1 ;
-(char)hasChannel;
-(void)setScanActivity:(WiFiAnalyticsAWDWiFiNWActivityScanActivity *)arg1 ;
-(void)setPowerActivity:(WiFiAnalyticsAWDWiFiNWActivityPowerPStats *)arg1 ;
-(void)setImpedingFunctions:(WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *)arg1 ;
-(void)setAggregateMetrics:(WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *)arg1 ;
-(void)setBtCoex:(WiFiAnalyticsAWDWiFiNWActivityBtCoex *)arg1 ;
-(void)setPhyrate:(WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *)arg1 ;
-(void)setControllerResets:(unsigned)arg1 ;
-(void)setHasControllerResets:(char)arg1 ;
-(char)hasControllerResets;
-(void)setBackoffStuck:(unsigned)arg1 ;
-(void)setHasBackoffStuck:(char)arg1 ;
-(char)hasBackoffStuck;
-(char)hasScanActivity;
-(char)hasPowerActivity;
-(char)hasImpedingFunctions;
-(char)hasAggregateMetrics;
-(char)hasBtCoex;
-(void)setChannelsVisited0:(unsigned)arg1 ;
-(void)setHasChannelsVisited0:(char)arg1 ;
-(char)hasChannelsVisited0;
-(void)setChannelsVisited1:(unsigned)arg1 ;
-(void)setHasChannelsVisited1:(char)arg1 ;
-(char)hasChannelsVisited1;
-(char)hasPhyrate;
-(void)setChannelBandwidth:(unsigned)arg1 ;
-(void)setHasChannelBandwidth:(char)arg1 ;
-(char)hasChannelBandwidth;
-(unsigned)controllerResets;
-(unsigned)backoffStuck;
-(WiFiAnalyticsAWDWiFiNWActivityScanActivity *)scanActivity;
-(WiFiAnalyticsAWDWiFiNWActivityPowerPStats *)powerActivity;
-(WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *)impedingFunctions;
-(WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *)aggregateMetrics;
-(WiFiAnalyticsAWDWiFiNWActivityBtCoex *)btCoex;
-(unsigned)channelsVisited0;
-(unsigned)channelsVisited1;
-(WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *)phyrate;
-(unsigned)channelBandwidth;
@end
