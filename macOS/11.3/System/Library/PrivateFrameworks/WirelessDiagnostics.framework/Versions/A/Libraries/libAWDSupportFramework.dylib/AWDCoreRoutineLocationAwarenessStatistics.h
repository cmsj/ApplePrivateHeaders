/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram, NSString;

@interface AWDCoreRoutineLocationAwarenessStatistics : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestInterrupted;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithCoarseLocation;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithLocationServiceDisabled;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithOtherReasons;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _skippedRequestDueToRecentFix;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _skippedRequestDueToStationary;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringDelayedCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringDelayedMaxSeconds;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringDelayedTotalSeconds;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _validLocationCount;
	SCD_Struct_AW2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                                                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                                                                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) char hasTimerFiringCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringCount;                                                                 //@synthesize timerFiringCount=_timerFiringCount - In the implementation block
@property (nonatomic,readonly) char hasActiveRequestCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestCount;                                                               //@synthesize activeRequestCount=_activeRequestCount - In the implementation block
@property (nonatomic,readonly) char hasValidLocationCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * validLocationCount;                                                               //@synthesize validLocationCount=_validLocationCount - In the implementation block
@property (nonatomic,readonly) char hasTimerFiringDelayedCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringDelayedCount;                                                          //@synthesize timerFiringDelayedCount=_timerFiringDelayedCount - In the implementation block
@property (nonatomic,readonly) char hasTimerFiringDelayedTotalSeconds; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringDelayedTotalSeconds;                                                   //@synthesize timerFiringDelayedTotalSeconds=_timerFiringDelayedTotalSeconds - In the implementation block
@property (nonatomic,readonly) char hasTimerFiringDelayedMaxSeconds; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringDelayedMaxSeconds;                                                     //@synthesize timerFiringDelayedMaxSeconds=_timerFiringDelayedMaxSeconds - In the implementation block
@property (nonatomic,readonly) char hasSkippedRequestDueToRecentFix; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * skippedRequestDueToRecentFix;                                                     //@synthesize skippedRequestDueToRecentFix=_skippedRequestDueToRecentFix - In the implementation block
@property (nonatomic,readonly) char hasSkippedRequestDueToStationary; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * skippedRequestDueToStationary;                                                    //@synthesize skippedRequestDueToStationary=_skippedRequestDueToStationary - In the implementation block
@property (nonatomic,readonly) char hasActiveRequestTimeoutWithCoarseLocation; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithCoarseLocation;                                           //@synthesize activeRequestTimeoutWithCoarseLocation=_activeRequestTimeoutWithCoarseLocation - In the implementation block
@property (nonatomic,readonly) char hasActiveRequestTimeoutWithLocationServiceDisabled; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithLocationServiceDisabled;                                  //@synthesize activeRequestTimeoutWithLocationServiceDisabled=_activeRequestTimeoutWithLocationServiceDisabled - In the implementation block
@property (nonatomic,readonly) char hasActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;                    //@synthesize activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled=_activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled - In the implementation block
@property (nonatomic,readonly) char hasActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;              //@synthesize activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff=_activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff - In the implementation block
@property (nonatomic,readonly) char hasActiveRequestTimeoutWithOtherReasons; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithOtherReasons;                                             //@synthesize activeRequestTimeoutWithOtherReasons=_activeRequestTimeoutWithOtherReasons - In the implementation block
@property (nonatomic,readonly) char hasActiveRequestInterrupted; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestInterrupted;                                                         //@synthesize activeRequestInterrupted=_activeRequestInterrupted - In the implementation block
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringDelayedCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringDelayedTotalSeconds;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringDelayedMaxSeconds;
-(void)setActiveRequestInterrupted:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestInterrupted;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)validLocationCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithCoarseLocation;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithLocationServiceDisabled;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithOtherReasons;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)skippedRequestDueToStationary;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)skippedRequestDueToRecentFix;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setTimerFiringCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setValidLocationCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setTimerFiringDelayedCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setTimerFiringDelayedTotalSeconds:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setTimerFiringDelayedMaxSeconds:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setSkippedRequestDueToRecentFix:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setSkippedRequestDueToStationary:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithCoarseLocation:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithLocationServiceDisabled:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithOtherReasons:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(char)hasTimerFiringCount;
-(char)hasActiveRequestCount;
-(char)hasValidLocationCount;
-(char)hasTimerFiringDelayedCount;
-(char)hasTimerFiringDelayedTotalSeconds;
-(char)hasTimerFiringDelayedMaxSeconds;
-(char)hasSkippedRequestDueToRecentFix;
-(char)hasSkippedRequestDueToStationary;
-(char)hasActiveRequestTimeoutWithCoarseLocation;
-(char)hasActiveRequestTimeoutWithLocationServiceDisabled;
-(char)hasActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
-(char)hasActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
-(char)hasActiveRequestTimeoutWithOtherReasons;
-(char)hasActiveRequestInterrupted;
@end

