/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ABCPbSigConfigWhitelist : PBCodable <NSCopying> {

	NSString* _build;
	NSString* _buildVariant;
	NSString* _deviceModel;
	int _globalDecision;
	NSMutableArray* _sigConfigs;
	SCD_Struct_AB4 _has;

}

@property (assign,nonatomic) char hasGlobalDecision; 
@property (assign,nonatomic) int globalDecision;                       //@synthesize globalDecision=_globalDecision - In the implementation block
@property (nonatomic,readonly) char hasBuild; 
@property (nonatomic,retain) NSString * build;                         //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) char hasBuildVariant; 
@property (nonatomic,retain) NSString * buildVariant;                  //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) char hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                   //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSMutableArray * sigConfigs;              //@synthesize sigConfigs=_sigConfigs - In the implementation block
+(Class)sigConfigType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)build;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(char)hasBuild;
-(void)setBuild:(NSString *)arg1 ;
-(char)hasDeviceModel;
-(NSString *)buildVariant;
-(void)setBuildVariant:(NSString *)arg1 ;
-(char)hasBuildVariant;
-(void)addSigConfig:(id)arg1 ;
-(unsigned long long)sigConfigsCount;
-(void)clearSigConfigs;
-(id)sigConfigAtIndex:(unsigned long long)arg1 ;
-(int)globalDecision;
-(void)setGlobalDecision:(int)arg1 ;
-(void)setHasGlobalDecision:(char)arg1 ;
-(char)hasGlobalDecision;
-(id)globalDecisionAsString:(int)arg1 ;
-(int)StringAsGlobalDecision:(id)arg1 ;
-(NSMutableArray *)sigConfigs;
-(void)setSigConfigs:(NSMutableArray *)arg1 ;
@end
