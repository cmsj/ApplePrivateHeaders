/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBGradedTagID : PBCodable <NSCopying> {

	int _grade;
	int _source;
	NSString* _tagId;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) char hasTagId; 
@property (nonatomic,retain) NSString * tagId;              //@synthesize tagId=_tagId - In the implementation block
@property (assign,nonatomic) char hasGrade; 
@property (assign,nonatomic) int grade;                     //@synthesize grade=_grade - In the implementation block
@property (assign,nonatomic) char hasSource; 
@property (assign,nonatomic) int source;                    //@synthesize source=_source - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)source;
-(id)dictionaryRepresentation;
-(int)grade;
-(void)setGrade:(int)arg1 ;
-(void)setSource:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasSource;
-(void)setHasSource:(char)arg1 ;
-(void)setTagId:(NSString *)arg1 ;
-(char)hasTagId;
-(NSString *)tagId;
-(void)setHasGrade:(char)arg1 ;
-(char)hasGrade;
@end

