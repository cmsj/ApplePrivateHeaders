/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRealTimeEncryptionMissingPrekeys : PBCodable <NSCopying> {

	unsigned long long _activeParticipants;
	unsigned long long _missingPrekeys;
	unsigned long long _timestamp;
	NSString* _serviceName;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                             //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) char hasActiveParticipants; 
@property (assign,nonatomic) unsigned long long activeParticipants;              //@synthesize activeParticipants=_activeParticipants - In the implementation block
@property (assign,nonatomic) char hasMissingPrekeys; 
@property (assign,nonatomic) unsigned long long missingPrekeys;                  //@synthesize missingPrekeys=_missingPrekeys - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasServiceName;
-(void)setActiveParticipants:(unsigned long long)arg1 ;
-(void)setHasActiveParticipants:(char)arg1 ;
-(char)hasActiveParticipants;
-(void)setMissingPrekeys:(unsigned long long)arg1 ;
-(void)setHasMissingPrekeys:(char)arg1 ;
-(char)hasMissingPrekeys;
-(unsigned long long)activeParticipants;
-(unsigned long long)missingPrekeys;
@end

