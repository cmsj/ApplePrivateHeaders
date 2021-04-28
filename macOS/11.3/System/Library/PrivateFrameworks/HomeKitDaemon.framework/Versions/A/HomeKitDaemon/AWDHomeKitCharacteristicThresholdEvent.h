/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCharacteristicThresholdEvent : PBCodable <NSCopying> {

	char _maxPresent;
	char _minPresent;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) char hasMinPresent; 
@property (assign,nonatomic) char minPresent;                 //@synthesize minPresent=_minPresent - In the implementation block
@property (assign,nonatomic) char hasMaxPresent; 
@property (assign,nonatomic) char maxPresent;                 //@synthesize maxPresent=_maxPresent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMinPresent:(char)arg1 ;
-(void)setHasMinPresent:(char)arg1 ;
-(char)hasMinPresent;
-(void)setMaxPresent:(char)arg1 ;
-(void)setHasMaxPresent:(char)arg1 ;
-(char)hasMaxPresent;
-(char)minPresent;
-(char)maxPresent;
@end
