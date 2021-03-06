/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADKeyedParameterList : PBCodable <NSCopying> {

	NSString* _key;
	NSMutableArray* _parameterLists;

}

@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameterLists;              //@synthesize parameterLists=_parameterLists - In the implementation block
+(id)options;
+(Class)parameterListType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addParameterList:(id)arg1 ;
-(unsigned long long)parameterListsCount;
-(void)clearParameterLists;
-(id)parameterListAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)parameterLists;
-(void)setParameterLists:(NSMutableArray *)arg1 ;
@end

