/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPPBDictionaryMatchingRuleFieldExists : PBCodable <NSCopying> {

	NSString* _fieldName;

}

@property (nonatomic,readonly) char hasFieldName; 
@property (nonatomic,retain) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
-(char)matches:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
-(char)hasFieldName;
@end
