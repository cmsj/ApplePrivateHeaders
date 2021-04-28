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

@class NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityControllerStats, WiFiAnalyticsAWDLinkQualityMeasurements;

@interface WiFiAnalyticsAWDWiFiNWActivity : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _activities;
	WiFiAnalyticsAWDWiFiNWActivityControllerStats* _controllerStats;
	NSMutableArray* _interfaceStats;
	WiFiAnalyticsAWDLinkQualityMeasurements* _linkQualSample;
	NSMutableArray* _peerStats;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * activities;                                                  //@synthesize activities=_activities - In the implementation block
@property (nonatomic,retain) NSMutableArray * interfaceStats;                                              //@synthesize interfaceStats=_interfaceStats - In the implementation block
@property (nonatomic,retain) NSMutableArray * peerStats;                                                   //@synthesize peerStats=_peerStats - In the implementation block
@property (nonatomic,readonly) char hasControllerStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityControllerStats * controllerStats;              //@synthesize controllerStats=_controllerStats - In the implementation block
@property (nonatomic,readonly) char hasLinkQualSample; 
@property (nonatomic,retain) WiFiAnalyticsAWDLinkQualityMeasurements * linkQualSample;                     //@synthesize linkQualSample=_linkQualSample - In the implementation block
+(Class)activitiesType;
+(Class)interfaceStatsType;
+(Class)peerStatsType;
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
-(NSMutableArray *)activities;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(void)clearActivities;
-(unsigned long long)activitiesCount;
-(void)addActivities:(id)arg1 ;
-(id)activitiesAtIndex:(unsigned long long)arg1 ;
-(void)setControllerStats:(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)arg1 ;
-(void)setPeerStats:(NSMutableArray *)arg1 ;
-(char)hasControllerStats;
-(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)controllerStats;
-(NSMutableArray *)peerStats;
-(void)setInterfaceStats:(NSMutableArray *)arg1 ;
-(void)setLinkQualSample:(WiFiAnalyticsAWDLinkQualityMeasurements *)arg1 ;
-(void)addInterfaceStats:(id)arg1 ;
-(void)addPeerStats:(id)arg1 ;
-(unsigned long long)interfaceStatsCount;
-(void)clearInterfaceStats;
-(id)interfaceStatsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)peerStatsCount;
-(void)clearPeerStats;
-(id)peerStatsAtIndex:(unsigned long long)arg1 ;
-(char)hasLinkQualSample;
-(NSMutableArray *)interfaceStats;
-(WiFiAnalyticsAWDLinkQualityMeasurements *)linkQualSample;
@end
