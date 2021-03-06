/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitWatchCompanionConnectivityReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numWatchAddEvents;
	unsigned _numWatchRemoveEvents;
	char _reportComplete;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNumWatchAddEvents; 
@property (assign,nonatomic) unsigned numWatchAddEvents;                 //@synthesize numWatchAddEvents=_numWatchAddEvents - In the implementation block
@property (assign,nonatomic) char hasNumWatchRemoveEvents; 
@property (assign,nonatomic) unsigned numWatchRemoveEvents;              //@synthesize numWatchRemoveEvents=_numWatchRemoveEvents - In the implementation block
@property (assign,nonatomic) char hasReportComplete; 
@property (assign,nonatomic) char reportComplete;                        //@synthesize reportComplete=_reportComplete - In the implementation block
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
-(void)setHasTimestamp:(char)arg1 ;
-(void)setReportComplete:(char)arg1 ;
-(char)reportComplete;
-(void)setNumWatchAddEvents:(unsigned)arg1 ;
-(void)setNumWatchRemoveEvents:(unsigned)arg1 ;
-(void)setHasNumWatchAddEvents:(char)arg1 ;
-(char)hasNumWatchAddEvents;
-(void)setHasNumWatchRemoveEvents:(char)arg1 ;
-(char)hasNumWatchRemoveEvents;
-(void)setHasReportComplete:(char)arg1 ;
-(char)hasReportComplete;
-(unsigned)numWatchAddEvents;
-(unsigned)numWatchRemoveEvents;
@end

