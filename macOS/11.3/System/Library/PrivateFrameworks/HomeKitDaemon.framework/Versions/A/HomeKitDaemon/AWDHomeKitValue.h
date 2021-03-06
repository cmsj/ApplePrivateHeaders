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

@class NSData, NSString;

@interface AWDHomeKitValue : PBCodable <NSCopying> {

	double _doubleVal;
	long long _intVal;
	NSData* _dataVal;
	float _floatVal;
	NSString* _stringVal;
	char _boolVal;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,readonly) char hasStringVal; 
@property (nonatomic,retain) NSString * stringVal;              //@synthesize stringVal=_stringVal - In the implementation block
@property (assign,nonatomic) char hasIntVal; 
@property (assign,nonatomic) long long intVal;                  //@synthesize intVal=_intVal - In the implementation block
@property (assign,nonatomic) char hasFloatVal; 
@property (assign,nonatomic) float floatVal;                    //@synthesize floatVal=_floatVal - In the implementation block
@property (assign,nonatomic) char hasDoubleVal; 
@property (assign,nonatomic) double doubleVal;                  //@synthesize doubleVal=_doubleVal - In the implementation block
@property (assign,nonatomic) char hasBoolVal; 
@property (assign,nonatomic) char boolVal;                      //@synthesize boolVal=_boolVal - In the implementation block
@property (nonatomic,readonly) char hasDataVal; 
@property (nonatomic,retain) NSData * dataVal;                  //@synthesize dataVal=_dataVal - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStringVal:(NSString *)arg1 ;
-(void)setDataVal:(NSData *)arg1 ;
-(void)setIntVal:(long long)arg1 ;
-(void)setFloatVal:(float)arg1 ;
-(void)setDoubleVal:(double)arg1 ;
-(void)setBoolVal:(char)arg1 ;
-(char)hasStringVal;
-(void)setHasIntVal:(char)arg1 ;
-(char)hasIntVal;
-(void)setHasFloatVal:(char)arg1 ;
-(char)hasFloatVal;
-(void)setHasDoubleVal:(char)arg1 ;
-(char)hasDoubleVal;
-(void)setHasBoolVal:(char)arg1 ;
-(char)hasBoolVal;
-(char)hasDataVal;
-(NSString *)stringVal;
-(long long)intVal;
-(float)floatVal;
-(double)doubleVal;
-(char)boolVal;
-(NSData *)dataVal;
@end

