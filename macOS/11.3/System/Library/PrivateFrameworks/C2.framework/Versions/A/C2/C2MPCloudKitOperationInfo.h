/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/Versions/A/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPCloudKitOperationInfo : PBCodable <NSCopying> {

	unsigned _operationGroupIndex;
	NSString* _operationId;
	NSString* _operationType;
	char _operationTriggered;
	SCD_Struct_C21 _has;

}

@property (nonatomic,readonly) char hasOperationId; 
@property (nonatomic,retain) NSString * operationId;                    //@synthesize operationId=_operationId - In the implementation block
@property (nonatomic,readonly) char hasOperationType; 
@property (nonatomic,retain) NSString * operationType;                  //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) char hasOperationTriggered; 
@property (assign,nonatomic) char operationTriggered;                   //@synthesize operationTriggered=_operationTriggered - In the implementation block
@property (assign,nonatomic) char hasOperationGroupIndex; 
@property (assign,nonatomic) unsigned operationGroupIndex;              //@synthesize operationGroupIndex=_operationGroupIndex - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)operationType;
-(void)setOperationType:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)operationId;
-(void)setOperationId:(NSString *)arg1 ;
-(void)setOperationTriggered:(char)arg1 ;
-(void)setOperationGroupIndex:(unsigned)arg1 ;
-(char)hasOperationId;
-(char)hasOperationType;
-(void)setHasOperationTriggered:(char)arg1 ;
-(char)hasOperationTriggered;
-(void)setHasOperationGroupIndex:(char)arg1 ;
-(char)hasOperationGroupIndex;
-(char)operationTriggered;
-(unsigned)operationGroupIndex;
@end
