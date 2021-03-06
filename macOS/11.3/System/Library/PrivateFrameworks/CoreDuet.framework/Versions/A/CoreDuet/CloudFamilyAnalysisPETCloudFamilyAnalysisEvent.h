/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CloudFamilyAnalysisPETContactEvents;

@interface CloudFamilyAnalysisPETCloudFamilyAnalysisEvent : PBCodable <NSCopying> {

	int _batch;
	NSString* _collectionId;
	CloudFamilyAnalysisPETContactEvents* _contactEvents;
	NSString* _sessionId;

}

@property (nonatomic,retain) NSString * collectionId;                                          //@synthesize collectionId=_collectionId - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                             //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) int batch;                                                        //@synthesize batch=_batch - In the implementation block
@property (nonatomic,retain) CloudFamilyAnalysisPETContactEvents * contactEvents;              //@synthesize contactEvents=_contactEvents - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setCollectionId:(NSString *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(void)setContactEvents:(CloudFamilyAnalysisPETContactEvents *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)collectionId;
-(NSString *)sessionId;
-(int)batch;
-(void)setBatch:(int)arg1 ;
-(CloudFamilyAnalysisPETContactEvents *)contactEvents;
@end

