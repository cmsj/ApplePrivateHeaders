/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSigConfig : PBCodable <NSCopying> {

	NSString* _domain;
	NSString* _subtype;
	NSString* _subtypeContext;
	NSString* _type;

}

@property (nonatomic,readonly) char hasDomain; 
@property (nonatomic,retain) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) char hasType; 
@property (nonatomic,retain) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasSubtype; 
@property (nonatomic,retain) NSString * subtype;                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) char hasSubtypeContext; 
@property (nonatomic,retain) NSString * subtypeContext;              //@synthesize subtypeContext=_subtypeContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)domain;
-(NSString *)type;
-(NSString *)subtype;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(char)hasDomain;
-(char)hasType;
-(void)setSubtype:(NSString *)arg1 ;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(NSString *)subtypeContext;
-(char)hasSubtype;
-(char)hasSubtypeContext;
@end

