/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, DRSProtoRequestDescription;

@interface DRSProtoEnableDataGatheringRequest : PBRequest <NSCopying> {

	NSString* _logType;
	DRSProtoRequestDescription* _requestDescription;
	char _isContinue;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) char hasRequestDescription; 
@property (nonatomic,retain) DRSProtoRequestDescription * requestDescription;              //@synthesize requestDescription=_requestDescription - In the implementation block
@property (nonatomic,readonly) char hasLogType; 
@property (nonatomic,retain) NSString * logType;                                           //@synthesize logType=_logType - In the implementation block
@property (assign,nonatomic) char hasIsContinue; 
@property (assign,nonatomic) char isContinue;                                              //@synthesize isContinue=_isContinue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)logType;
-(void)setLogType:(NSString *)arg1 ;
-(char)hasLogType;
-(void)setRequestDescription:(DRSProtoRequestDescription *)arg1 ;
-(char)hasRequestDescription;
-(DRSProtoRequestDescription *)requestDescription;
-(char)isContinue;
-(void)setIsContinue:(char)arg1 ;
-(void)setHasIsContinue:(char)arg1 ;
-(char)hasIsContinue;
@end
