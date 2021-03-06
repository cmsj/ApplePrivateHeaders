/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDWADiagnosisActionAssociationDifferences, AWDWAQuickDpsStats;

@interface AWDWiFiDPSEpilogue : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	unsigned _actionIntVal;
	int _afterRecommendedAction;
	NSMutableArray* _associationChanges;
	int _beforeAction;
	AWDWADiagnosisActionAssociationDifferences* _changes;
	AWDWAQuickDpsStats* _qDpsStats;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasBeforeAction; 
@property (assign,nonatomic) int beforeAction;                                                  //@synthesize beforeAction=_beforeAction - In the implementation block
@property (assign,nonatomic) char hasAction; 
@property (assign,nonatomic) int action;                                                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) char hasAfterRecommendedAction; 
@property (assign,nonatomic) int afterRecommendedAction;                                        //@synthesize afterRecommendedAction=_afterRecommendedAction - In the implementation block
@property (nonatomic,readonly) char hasChanges; 
@property (nonatomic,retain) AWDWADiagnosisActionAssociationDifferences * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,retain) NSMutableArray * associationChanges;                               //@synthesize associationChanges=_associationChanges - In the implementation block
@property (nonatomic,readonly) char hasQDpsStats; 
@property (nonatomic,retain) AWDWAQuickDpsStats * qDpsStats;                                    //@synthesize qDpsStats=_qDpsStats - In the implementation block
@property (assign,nonatomic) char hasActionIntVal; 
@property (assign,nonatomic) unsigned actionIntVal;                                             //@synthesize actionIntVal=_actionIntVal - In the implementation block
+(Class)associationChangesType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)dictionaryRepresentation;
-(AWDWADiagnosisActionAssociationDifferences *)changes;
-(unsigned long long)timestamp;
-(char)hasChanges;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasAction:(char)arg1 ;
-(char)hasAction;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setChanges:(AWDWADiagnosisActionAssociationDifferences *)arg1 ;
-(void)setAssociationChanges:(NSMutableArray *)arg1 ;
-(void)setQDpsStats:(AWDWAQuickDpsStats *)arg1 ;
-(void)addAssociationChanges:(id)arg1 ;
-(unsigned long long)associationChangesCount;
-(void)clearAssociationChanges;
-(id)associationChangesAtIndex:(unsigned long long)arg1 ;
-(int)beforeAction;
-(void)setBeforeAction:(int)arg1 ;
-(void)setHasBeforeAction:(char)arg1 ;
-(char)hasBeforeAction;
-(id)beforeActionAsString:(int)arg1 ;
-(int)StringAsBeforeAction:(id)arg1 ;
-(int)afterRecommendedAction;
-(void)setAfterRecommendedAction:(int)arg1 ;
-(void)setHasAfterRecommendedAction:(char)arg1 ;
-(char)hasAfterRecommendedAction;
-(id)afterRecommendedActionAsString:(int)arg1 ;
-(int)StringAsAfterRecommendedAction:(id)arg1 ;
-(char)hasQDpsStats;
-(void)setActionIntVal:(unsigned)arg1 ;
-(void)setHasActionIntVal:(char)arg1 ;
-(char)hasActionIntVal;
-(NSMutableArray *)associationChanges;
-(AWDWAQuickDpsStats *)qDpsStats;
-(unsigned)actionIntVal;
@end

