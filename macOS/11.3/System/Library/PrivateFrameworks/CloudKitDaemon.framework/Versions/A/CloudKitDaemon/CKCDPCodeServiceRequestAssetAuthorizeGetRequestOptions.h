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

@class NSMutableArray;

@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {

	unsigned long long _contentRequestAuthorizeGetOptions;
	NSMutableArray* _contentRequestHeaders;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;                            //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (assign,nonatomic) char hasContentRequestAuthorizeGetOptions; 
@property (assign,nonatomic) unsigned long long contentRequestAuthorizeGetOptions;              //@synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions - In the implementation block
+(Class)contentRequestHeadersType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContentRequestAuthorizeGetOptions:(unsigned long long)arg1 ;
-(void)setContentRequestHeaders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentRequestHeaders;
-(void)addContentRequestHeaders:(id)arg1 ;
-(unsigned long long)contentRequestHeadersCount;
-(void)clearContentRequestHeaders;
-(id)contentRequestHeadersAtIndex:(unsigned long long)arg1 ;
-(void)setHasContentRequestAuthorizeGetOptions:(char)arg1 ;
-(char)hasContentRequestAuthorizeGetOptions;
-(unsigned long long)contentRequestAuthorizeGetOptions;
@end

