/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPBundleId : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _fullName;
	NSString* _shortKey;
	SCD_Struct_CL4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasShortKey; 
@property (nonatomic,retain) NSString * shortKey;              //@synthesize shortKey=_shortKey - In the implementation block
@property (nonatomic,readonly) char hasFullName; 
@property (nonatomic,retain) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)fullName;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(char)hasFullName;
-(void)setShortKey:(NSString *)arg1 ;
-(char)hasShortKey;
-(NSString *)shortKey;
@end

