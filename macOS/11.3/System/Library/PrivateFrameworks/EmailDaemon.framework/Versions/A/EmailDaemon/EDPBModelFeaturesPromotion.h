/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EDPBModelFeaturesPromotion : PBCodable <NSCopying> {

	unsigned _headerKeyFilteredCount;
	NSString* _language;
	unsigned _toCount;
	unsigned _unknownFeatureCount;
	SCD_Struct_ED5 _has;

}

@property (assign,nonatomic) char hasUnknownFeatureCount; 
@property (assign,nonatomic) unsigned unknownFeatureCount;                 //@synthesize unknownFeatureCount=_unknownFeatureCount - In the implementation block
@property (assign,nonatomic) char hasToCount; 
@property (assign,nonatomic) unsigned toCount;                             //@synthesize toCount=_toCount - In the implementation block
@property (nonatomic,readonly) char hasLanguage; 
@property (nonatomic,retain) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) char hasHeaderKeyFilteredCount; 
@property (assign,nonatomic) unsigned headerKeyFilteredCount;              //@synthesize headerKeyFilteredCount=_headerKeyFilteredCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasLanguage;
-(void)setUnknownFeatureCount:(unsigned)arg1 ;
-(void)setHasUnknownFeatureCount:(char)arg1 ;
-(char)hasUnknownFeatureCount;
-(unsigned)unknownFeatureCount;
-(void)setToCount:(unsigned)arg1 ;
-(void)setHasToCount:(char)arg1 ;
-(char)hasToCount;
-(void)setHeaderKeyFilteredCount:(unsigned)arg1 ;
-(void)setHasHeaderKeyFilteredCount:(char)arg1 ;
-(char)hasHeaderKeyFilteredCount;
-(unsigned)toCount;
-(unsigned)headerKeyFilteredCount;
@end

