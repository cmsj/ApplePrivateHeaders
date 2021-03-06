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

@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {

	NSData* _authPutResponse;
	NSMutableArray* _contentResponseHeaders;
	NSMutableArray* _uploadTokens;

}

@property (nonatomic,retain) NSMutableArray * uploadTokens;                        //@synthesize uploadTokens=_uploadTokens - In the implementation block
@property (nonatomic,readonly) char hasAuthPutResponse; 
@property (nonatomic,retain) NSData * authPutResponse;                             //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentResponseHeaders;              //@synthesize contentResponseHeaders=_contentResponseHeaders - In the implementation block
+(Class)uploadTokensType;
+(Class)contentResponseHeadersType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)contentResponseHeaders;
-(void)setContentResponseHeaders:(NSMutableArray *)arg1 ;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(unsigned long long)contentResponseHeadersCount;
-(NSMutableArray *)uploadTokens;
-(void)addUploadTokens:(id)arg1 ;
-(void)addContentResponseHeaders:(id)arg1 ;
-(unsigned long long)uploadTokensCount;
-(void)clearUploadTokens;
-(id)uploadTokensAtIndex:(unsigned long long)arg1 ;
-(void)clearContentResponseHeaders;
-(id)contentResponseHeadersAtIndex:(unsigned long long)arg1 ;
-(char)hasAuthPutResponse;
-(void)setUploadTokens:(NSMutableArray *)arg1 ;
@end

