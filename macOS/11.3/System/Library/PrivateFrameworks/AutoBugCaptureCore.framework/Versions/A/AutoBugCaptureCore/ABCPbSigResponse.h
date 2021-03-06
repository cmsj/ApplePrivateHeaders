/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSigResponse : PBCodable <NSCopying> {

	unsigned _caseCount;
	unsigned _caseCountTarget;
	NSString* _caseIdentifier;
	NSString* _caseStatus;
	char _decision;
	SCD_Struct_AB1 _has;

}

@property (nonatomic,readonly) char hasCaseIdentifier; 
@property (nonatomic,retain) NSString * caseIdentifier;              //@synthesize caseIdentifier=_caseIdentifier - In the implementation block
@property (assign,nonatomic) char hasCaseCount; 
@property (assign,nonatomic) unsigned caseCount;                     //@synthesize caseCount=_caseCount - In the implementation block
@property (assign,nonatomic) char hasCaseCountTarget; 
@property (assign,nonatomic) unsigned caseCountTarget;               //@synthesize caseCountTarget=_caseCountTarget - In the implementation block
@property (nonatomic,readonly) char hasCaseStatus; 
@property (nonatomic,retain) NSString * caseStatus;                  //@synthesize caseStatus=_caseStatus - In the implementation block
@property (assign,nonatomic) char hasDecision; 
@property (assign,nonatomic) char decision;                          //@synthesize decision=_decision - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCaseIdentifier:(NSString *)arg1 ;
-(void)setCaseStatus:(NSString *)arg1 ;
-(char)hasCaseIdentifier;
-(void)setCaseCount:(unsigned)arg1 ;
-(void)setHasCaseCount:(char)arg1 ;
-(char)hasCaseCount;
-(void)setCaseCountTarget:(unsigned)arg1 ;
-(void)setHasCaseCountTarget:(char)arg1 ;
-(char)hasCaseCountTarget;
-(char)hasCaseStatus;
-(void)setDecision:(char)arg1 ;
-(void)setHasDecision:(char)arg1 ;
-(char)hasDecision;
-(NSString *)caseIdentifier;
-(unsigned)caseCount;
-(unsigned)caseCountTarget;
-(NSString *)caseStatus;
-(char)decision;
@end

