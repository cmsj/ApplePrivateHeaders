/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {

	NSString* _articleId;
	int _articleType;
	NSString* _linkUrl;
	NSString* _referencedArticleId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) char hasLinkUrl; 
@property (nonatomic,retain) NSString * linkUrl;                          //@synthesize linkUrl=_linkUrl - In the implementation block
@property (nonatomic,readonly) char hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                        //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) char hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;              //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) char hasArticleType; 
@property (assign,nonatomic) int articleType;                             //@synthesize articleType=_articleType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(char)hasArticleId;
-(int)articleType;
-(void)setArticleType:(int)arg1 ;
-(void)setHasArticleType:(char)arg1 ;
-(char)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(NSString *)articleId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(char)hasReferencedArticleId;
-(NSString *)referencedArticleId;
-(void)setLinkUrl:(NSString *)arg1 ;
-(char)hasLinkUrl;
-(NSString *)linkUrl;
@end

