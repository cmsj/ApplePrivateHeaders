/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSPersonNameComponents;

@interface BRFieldUserIdentity : PBCodable <NSCopying> {

	NSData* _serializedNameComponents;

}

@property (nonatomic,retain) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) char hasSerializedNameComponents; 
@property (nonatomic,retain) NSData * serializedNameComponents;                    //@synthesize serializedNameComponents=_serializedNameComponents - In the implementation block
+(id)unknownPersonNameComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(id)initWithCKUserIdentity:(id)arg1 ;
-(void)setSerializedNameComponents:(NSData *)arg1 ;
-(char)hasSerializedNameComponents;
-(NSData *)serializedNameComponents;
-(id)nameComponentsAcceptUnknownUser:(char)arg1 ;
@end

