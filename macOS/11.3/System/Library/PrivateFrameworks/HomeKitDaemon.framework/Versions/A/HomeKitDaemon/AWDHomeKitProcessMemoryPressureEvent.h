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

@class NSString;

@interface AWDHomeKitProcessMemoryPressureEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _dataSyncState;
	NSString* _processMemoryState;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasProcessMemoryState; 
@property (nonatomic,retain) NSString * processMemoryState;              //@synthesize processMemoryState=_processMemoryState - In the implementation block
@property (nonatomic,readonly) char hasDataSyncState; 
@property (nonatomic,retain) NSString * dataSyncState;                   //@synthesize dataSyncState=_dataSyncState - In the implementation block
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
-(NSString *)dataSyncState;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setDataSyncState:(NSString *)arg1 ;
-(char)hasDataSyncState;
-(NSString *)processMemoryState;
-(void)setProcessMemoryState:(NSString *)arg1 ;
-(char)hasProcessMemoryState;
@end

