/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _int64Value;
	NSData* _bytesValue;
	NSString* _stringValue;
	char _boolValue;
	SCD_Struct_CK16 _has;

}

@property (assign,nonatomic) char hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                  //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) char hasInt64Value; 
@property (assign,nonatomic) long long int64Value;                //@synthesize int64Value=_int64Value - In the implementation block
@property (assign,nonatomic) char hasBoolValue; 
@property (assign,nonatomic) char boolValue;                      //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) char hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                 //@synthesize bytesValue=_bytesValue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)doubleValue;
-(char)boolValue;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDoubleValue:(char)arg1 ;
-(char)hasDoubleValue;
-(char)hasStringValue;
-(long long)int64Value;
-(void)setBoolValue:(char)arg1 ;
-(void)setHasBoolValue:(char)arg1 ;
-(char)hasBoolValue;
-(NSData *)bytesValue;
-(void)setInt64Value:(long long)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(char)hasBytesValue;
-(void)setHasInt64Value:(char)arg1 ;
-(char)hasInt64Value;
@end
