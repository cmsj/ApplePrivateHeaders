/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/Versions/A/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface OTApplicantToSponsorRound2M1 : PBCodable <NSCopying> {

	NSString* _peerID;
	NSData* _permanentInfo;
	NSData* _permanentInfoSig;
	NSData* _stableInfo;
	NSData* _stableInfoSig;

}

@property (nonatomic,readonly) char hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                       //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) char hasPermanentInfo; 
@property (nonatomic,retain) NSData * permanentInfo;                  //@synthesize permanentInfo=_permanentInfo - In the implementation block
@property (nonatomic,readonly) char hasPermanentInfoSig; 
@property (nonatomic,retain) NSData * permanentInfoSig;               //@synthesize permanentInfoSig=_permanentInfoSig - In the implementation block
@property (nonatomic,readonly) char hasStableInfo; 
@property (nonatomic,retain) NSData * stableInfo;                     //@synthesize stableInfo=_stableInfo - In the implementation block
@property (nonatomic,readonly) char hasStableInfoSig; 
@property (nonatomic,retain) NSData * stableInfoSig;                  //@synthesize stableInfoSig=_stableInfoSig - In the implementation block
-(char)hasPermanentInfo;
-(char)hasPermanentInfoSig;
-(char)hasStableInfo;
-(char)hasStableInfoSig;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(NSData *)stableInfo;
-(NSData *)permanentInfo;
-(NSData *)permanentInfoSig;
-(NSData *)stableInfoSig;
-(void)setStableInfo:(NSData *)arg1 ;
-(void)setStableInfoSig:(NSData *)arg1 ;
-(void)setPermanentInfo:(NSData *)arg1 ;
-(void)setPermanentInfoSig:(NSData *)arg1 ;
-(char)hasPeerID;
@end
