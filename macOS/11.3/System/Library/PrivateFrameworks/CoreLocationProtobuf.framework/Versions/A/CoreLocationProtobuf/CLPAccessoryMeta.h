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

@interface CLPAccessoryMeta : PBCodable <NSCopying> {

	NSString* _make;
	NSString* _model;
	NSString* _version;

}

@property (nonatomic,readonly) char hasMake; 
@property (nonatomic,retain) NSString * make;                 //@synthesize make=_make - In the implementation block
@property (nonatomic,readonly) char hasModel; 
@property (nonatomic,retain) NSString * model;                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) char hasVersion; 
@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(char)hasVersion;
-(char)hasModel;
-(void)setMake:(NSString *)arg1 ;
-(NSString *)make;
-(char)hasMake;
@end
