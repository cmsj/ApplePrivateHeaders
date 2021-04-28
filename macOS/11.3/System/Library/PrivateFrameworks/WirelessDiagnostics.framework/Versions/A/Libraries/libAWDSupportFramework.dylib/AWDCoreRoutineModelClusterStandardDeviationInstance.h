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

@class NSString;

@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	int _entryStandardDeviation;
	int _exitStandardDeviation;
	SCD_Struct_AW2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasEntryStandardDeviation; 
@property (assign,nonatomic) int entryStandardDeviation;                  //@synthesize entryStandardDeviation=_entryStandardDeviation - In the implementation block
@property (assign,nonatomic) char hasExitStandardDeviation; 
@property (assign,nonatomic) int exitStandardDeviation;                   //@synthesize exitStandardDeviation=_exitStandardDeviation - In the implementation block
-(id)_init;
-(long long)metricId;
-(char)valid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEntryStandardDeviation:(int)arg1 ;
-(void)setExitStandardDeviation:(int)arg1 ;
-(void)setHasEntryStandardDeviation:(char)arg1 ;
-(char)hasEntryStandardDeviation;
-(void)setHasExitStandardDeviation:(char)arg1 ;
-(char)hasExitStandardDeviation;
-(int)entryStandardDeviation;
-(int)exitStandardDeviation;
@end
