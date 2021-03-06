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

@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying> {

	long long _operationGroupQuantity;
	NSString* _operationGroupId;
	NSString* _operationGroupName;
	NSString* _operationId;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasOperationId; 
@property (nonatomic,retain) NSString * operationId;                        //@synthesize operationId=_operationId - In the implementation block
@property (nonatomic,readonly) char hasOperationGroupId; 
@property (nonatomic,retain) NSString * operationGroupId;                   //@synthesize operationGroupId=_operationGroupId - In the implementation block
@property (nonatomic,readonly) char hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                 //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (assign,nonatomic) char hasOperationGroupQuantity; 
@property (assign,nonatomic) long long operationGroupQuantity;              //@synthesize operationGroupQuantity=_operationGroupQuantity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)operationGroupName;
-(NSString *)operationId;
-(void)setOperationId:(NSString *)arg1 ;
-(NSString *)operationGroupId;
-(void)setOperationGroupId:(NSString *)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(char)hasOperationId;
-(char)hasOperationGroupId;
-(char)hasOperationGroupName;
-(long long)operationGroupQuantity;
-(void)setOperationGroupQuantity:(long long)arg1 ;
-(void)setHasOperationGroupQuantity:(char)arg1 ;
-(char)hasOperationGroupQuantity;
@end

