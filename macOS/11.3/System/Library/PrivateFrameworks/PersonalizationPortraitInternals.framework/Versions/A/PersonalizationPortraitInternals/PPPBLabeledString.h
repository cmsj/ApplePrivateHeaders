/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBLabeledString : PBCodable <NSCopying> {

	NSString* _label;
	NSString* _value;

}

@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)value;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasValue;
-(char)hasLabel;
@end

