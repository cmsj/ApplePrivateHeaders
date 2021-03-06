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

@class NSString, NSMutableArray, DRSProtoRequestDescription;

@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying> {

	NSString* _issueDescription;
	NSMutableArray* _logs;
	DRSProtoRequestDescription* _requestDescription;

}

@property (nonatomic,readonly) char hasRequestDescription; 
@property (nonatomic,retain) DRSProtoRequestDescription * requestDescription;              //@synthesize requestDescription=_requestDescription - In the implementation block
@property (nonatomic,readonly) char hasIssueDescription; 
@property (nonatomic,retain) NSString * issueDescription;                                  //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * logs;                                        //@synthesize logs=_logs - In the implementation block
+(Class)logsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)logs;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLogs:(NSMutableArray *)arg1 ;
-(NSString *)issueDescription;
-(void)setIssueDescription:(NSString *)arg1 ;
-(void)addLogs:(id)arg1 ;
-(void)setRequestDescription:(DRSProtoRequestDescription *)arg1 ;
-(unsigned long long)logsCount;
-(void)clearLogs;
-(id)logsAtIndex:(unsigned long long)arg1 ;
-(char)hasRequestDescription;
-(char)hasIssueDescription;
-(DRSProtoRequestDescription *)requestDescription;
@end

