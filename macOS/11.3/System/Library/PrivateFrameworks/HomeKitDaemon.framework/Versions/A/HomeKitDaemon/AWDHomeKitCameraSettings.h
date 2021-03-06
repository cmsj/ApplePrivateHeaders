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

@class NSString, NSMutableArray;

@interface AWDHomeKitCameraSettings : PBCodable <NSCopying> {

	NSString* _numActivityZonesBinString;
	NSMutableArray* _numPointsInActivityZonesBinStrings;
	unsigned _recordingEventTriggers;
	char _isInclusionZone;
	char _isReachabilityNotificationEnabled;
	char _isRecordingAudioEnabled;
	char _isRecordingCapable;
	char _isRecordingEnabled;
	char _isSmartBulletinBoardNotificationEnabled;
	SCD_Struct_HM29 _has;

}

@property (assign,nonatomic) char hasIsRecordingEnabled; 
@property (assign,nonatomic) char isRecordingEnabled;                                          //@synthesize isRecordingEnabled=_isRecordingEnabled - In the implementation block
@property (assign,nonatomic) char hasIsRecordingAudioEnabled; 
@property (assign,nonatomic) char isRecordingAudioEnabled;                                     //@synthesize isRecordingAudioEnabled=_isRecordingAudioEnabled - In the implementation block
@property (assign,nonatomic) char hasRecordingEventTriggers; 
@property (assign,nonatomic) unsigned recordingEventTriggers;                                  //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
@property (assign,nonatomic) char hasIsSmartBulletinBoardNotificationEnabled; 
@property (assign,nonatomic) char isSmartBulletinBoardNotificationEnabled;                     //@synthesize isSmartBulletinBoardNotificationEnabled=_isSmartBulletinBoardNotificationEnabled - In the implementation block
@property (assign,nonatomic) char hasIsInclusionZone; 
@property (assign,nonatomic) char isInclusionZone;                                             //@synthesize isInclusionZone=_isInclusionZone - In the implementation block
@property (assign,nonatomic) char hasIsReachabilityNotificationEnabled; 
@property (assign,nonatomic) char isReachabilityNotificationEnabled;                           //@synthesize isReachabilityNotificationEnabled=_isReachabilityNotificationEnabled - In the implementation block
@property (assign,nonatomic) char hasIsRecordingCapable; 
@property (assign,nonatomic) char isRecordingCapable;                                          //@synthesize isRecordingCapable=_isRecordingCapable - In the implementation block
@property (nonatomic,readonly) char hasNumActivityZonesBinString; 
@property (nonatomic,retain) NSString * numActivityZonesBinString;                             //@synthesize numActivityZonesBinString=_numActivityZonesBinString - In the implementation block
@property (nonatomic,retain) NSMutableArray * numPointsInActivityZonesBinStrings;              //@synthesize numPointsInActivityZonesBinStrings=_numPointsInActivityZonesBinStrings - In the implementation block
+(Class)numPointsInActivityZonesBinStringsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)isSmartBulletinBoardNotificationEnabled;
-(unsigned)recordingEventTriggers;
-(char)isRecordingAudioEnabled;
-(void)setRecordingEventTriggers:(unsigned)arg1 ;
-(char)isRecordingEnabled;
-(char)isRecordingCapable;
-(void)setIsRecordingCapable:(char)arg1 ;
-(void)setIsRecordingEnabled:(char)arg1 ;
-(void)setIsRecordingAudioEnabled:(char)arg1 ;
-(void)setIsSmartBulletinBoardNotificationEnabled:(char)arg1 ;
-(void)setNumActivityZonesBinString:(NSString *)arg1 ;
-(void)setIsInclusionZone:(char)arg1 ;
-(void)setIsReachabilityNotificationEnabled:(char)arg1 ;
-(NSMutableArray *)numPointsInActivityZonesBinStrings;
-(void)addNumPointsInActivityZonesBinStrings:(id)arg1 ;
-(unsigned long long)numPointsInActivityZonesBinStringsCount;
-(void)clearNumPointsInActivityZonesBinStrings;
-(id)numPointsInActivityZonesBinStringsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsRecordingEnabled:(char)arg1 ;
-(char)hasIsRecordingEnabled;
-(void)setHasIsRecordingAudioEnabled:(char)arg1 ;
-(char)hasIsRecordingAudioEnabled;
-(void)setHasRecordingEventTriggers:(char)arg1 ;
-(char)hasRecordingEventTriggers;
-(void)setHasIsSmartBulletinBoardNotificationEnabled:(char)arg1 ;
-(char)hasIsSmartBulletinBoardNotificationEnabled;
-(void)setHasIsInclusionZone:(char)arg1 ;
-(char)hasIsInclusionZone;
-(void)setHasIsReachabilityNotificationEnabled:(char)arg1 ;
-(char)hasIsReachabilityNotificationEnabled;
-(void)setHasIsRecordingCapable:(char)arg1 ;
-(char)hasIsRecordingCapable;
-(char)hasNumActivityZonesBinString;
-(char)isInclusionZone;
-(char)isReachabilityNotificationEnabled;
-(NSString *)numActivityZonesBinString;
-(void)setNumPointsInActivityZonesBinStrings:(NSMutableArray *)arg1 ;
@end

