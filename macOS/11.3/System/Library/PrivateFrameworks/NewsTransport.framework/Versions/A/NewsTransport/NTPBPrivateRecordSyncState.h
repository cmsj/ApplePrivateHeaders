/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDate, NSString;

@interface NTPBPrivateRecordSyncState : PBCodable <NSCopying> {

	NTPBDate* _lastCleanDate;
	NTPBDate* _lastDirtyDate;
	NSString* _recordName;
	NSString* _recordZoneName;

}

@property (nonatomic,readonly) char hasRecordName; 
@property (nonatomic,retain) NSString * recordName;                  //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,readonly) char hasRecordZoneName; 
@property (nonatomic,retain) NSString * recordZoneName;              //@synthesize recordZoneName=_recordZoneName - In the implementation block
@property (nonatomic,readonly) char hasLastCleanDate; 
@property (nonatomic,retain) NTPBDate * lastCleanDate;               //@synthesize lastCleanDate=_lastCleanDate - In the implementation block
@property (nonatomic,readonly) char hasLastDirtyDate; 
@property (nonatomic,retain) NTPBDate * lastDirtyDate;               //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)recordName;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRecordName:(NSString *)arg1 ;
-(NSString *)recordZoneName;
-(void)setRecordZoneName:(NSString *)arg1 ;
-(void)setLastCleanDate:(NTPBDate *)arg1 ;
-(void)setLastDirtyDate:(NTPBDate *)arg1 ;
-(char)hasRecordName;
-(char)hasRecordZoneName;
-(char)hasLastCleanDate;
-(char)hasLastDirtyDate;
-(NTPBDate *)lastCleanDate;
-(NTPBDate *)lastDirtyDate;
@end

