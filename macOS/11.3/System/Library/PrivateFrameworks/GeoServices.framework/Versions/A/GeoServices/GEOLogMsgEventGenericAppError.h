/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {

	long long _appErrorCode;
	NSString* _appErrorDomain;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) char hasAppErrorDomain; 
@property (nonatomic,retain) NSString * appErrorDomain; 
@property (assign,nonatomic) char hasAppErrorCode; 
@property (assign,nonatomic) long long appErrorCode; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)appErrorDomain;
-(void)setAppErrorDomain:(NSString *)arg1 ;
-(void)setAppErrorCode:(long long)arg1 ;
-(char)hasAppErrorDomain;
-(long long)appErrorCode;
-(void)setHasAppErrorCode:(char)arg1 ;
-(char)hasAppErrorCode;
@end

