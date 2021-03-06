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

@class CLPMotionActivity;

@interface CLPIndoorMotionActivity : PBCodable <NSCopying> {

	double _timestamp;
	CLPMotionActivity* _motionActivity;
	SCD_Struct_CL4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasMotionActivity; 
@property (nonatomic,retain) CLPMotionActivity * motionActivity;              //@synthesize motionActivity=_motionActivity - In the implementation block
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
-(char)hasTimestamp;
-(void)setMotionActivity:(CLPMotionActivity *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(CLPMotionActivity *)motionActivity;
-(char)hasMotionActivity;
@end

