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

@class WiFiAnalyticsAWDWiFiDPSAWDLSnapshot, WiFiAnalyticsAWDWiFiDPSBTSnapshot, WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot;

@interface WiFiAnalyticsAWDWiFiDPSSnapshot : PBCodable <NSCopying> {

	WiFiAnalyticsAWDWiFiDPSAWDLSnapshot* _awdlSnapshot;
	WiFiAnalyticsAWDWiFiDPSBTSnapshot* _btSnapshot;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBE;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBK;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVI;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVO;

}

@property (nonatomic,readonly) char hasTxCompletionSnapshotBE; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBE;              //@synthesize txCompletionSnapshotBE=_txCompletionSnapshotBE - In the implementation block
@property (nonatomic,readonly) char hasTxCompletionSnapshotBK; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBK;              //@synthesize txCompletionSnapshotBK=_txCompletionSnapshotBK - In the implementation block
@property (nonatomic,readonly) char hasTxCompletionSnapshotVO; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVO;              //@synthesize txCompletionSnapshotVO=_txCompletionSnapshotVO - In the implementation block
@property (nonatomic,readonly) char hasTxCompletionSnapshotVI; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVI;              //@synthesize txCompletionSnapshotVI=_txCompletionSnapshotVI - In the implementation block
@property (nonatomic,readonly) char hasBtSnapshot; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSBTSnapshot * btSnapshot;                                         //@synthesize btSnapshot=_btSnapshot - In the implementation block
@property (nonatomic,readonly) char hasAwdlSnapshot; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSAWDLSnapshot * awdlSnapshot;                                     //@synthesize awdlSnapshot=_awdlSnapshot - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTxCompletionSnapshotBE:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotBK:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVO:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVI:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setBtSnapshot:(WiFiAnalyticsAWDWiFiDPSBTSnapshot *)arg1 ;
-(void)setAwdlSnapshot:(WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *)arg1 ;
-(char)hasTxCompletionSnapshotBE;
-(char)hasTxCompletionSnapshotBK;
-(char)hasTxCompletionSnapshotVO;
-(char)hasTxCompletionSnapshotVI;
-(char)hasBtSnapshot;
-(char)hasAwdlSnapshot;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBE;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBK;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVO;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVI;
-(WiFiAnalyticsAWDWiFiDPSBTSnapshot *)btSnapshot;
-(WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *)awdlSnapshot;
@end

