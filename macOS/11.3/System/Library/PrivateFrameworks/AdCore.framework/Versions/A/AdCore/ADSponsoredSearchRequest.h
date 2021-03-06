/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying> {

	NSString* _deploymentID;
	NSString* _experimentID;
	ADUserTargetingProperties* _properties;
	int _supportedODMLVersion;
	NSString* _treatmentID;
	char _clientExclusive;
	char _enableImagesForDupes;
	char _inAllocation;
	char _isBaseline;
	char _isTest;
	SCD_Struct_AD10 _has;

}

@property (nonatomic,readonly) char hasProperties; 
@property (nonatomic,retain) ADUserTargetingProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) char hasIsTest; 
@property (assign,nonatomic) char isTest;                                         //@synthesize isTest=_isTest - In the implementation block
@property (assign,nonatomic) char hasIsBaseline; 
@property (assign,nonatomic) char isBaseline;                                     //@synthesize isBaseline=_isBaseline - In the implementation block
@property (assign,nonatomic) char hasEnableImagesForDupes; 
@property (assign,nonatomic) char enableImagesForDupes;                           //@synthesize enableImagesForDupes=_enableImagesForDupes - In the implementation block
@property (assign,nonatomic) char hasSupportedODMLVersion; 
@property (assign,nonatomic) int supportedODMLVersion;                            //@synthesize supportedODMLVersion=_supportedODMLVersion - In the implementation block
@property (nonatomic,readonly) char hasExperimentID; 
@property (nonatomic,retain) NSString * experimentID;                             //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,readonly) char hasTreatmentID; 
@property (nonatomic,retain) NSString * treatmentID;                              //@synthesize treatmentID=_treatmentID - In the implementation block
@property (nonatomic,readonly) char hasDeploymentID; 
@property (nonatomic,retain) NSString * deploymentID;                             //@synthesize deploymentID=_deploymentID - In the implementation block
@property (assign,nonatomic) char hasInAllocation; 
@property (assign,nonatomic) char inAllocation;                                   //@synthesize inAllocation=_inAllocation - In the implementation block
@property (assign,nonatomic) char hasClientExclusive; 
@property (assign,nonatomic) char clientExclusive;                                //@synthesize clientExclusive=_clientExclusive - In the implementation block
+(id)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(ADUserTargetingProperties *)properties;
-(void)setProperties:(ADUserTargetingProperties *)arg1 ;
-(NSString *)deploymentID;
-(void)setDeploymentID:(NSString *)arg1 ;
-(NSString *)treatmentID;
-(void)setTreatmentID:(NSString *)arg1 ;
-(NSString *)experimentID;
-(void)setExperimentID:(NSString *)arg1 ;
-(char)hasProperties;
-(char)isTest;
-(void)setIsTest:(char)arg1 ;
-(void)setHasIsTest:(char)arg1 ;
-(char)hasIsTest;
-(void)setIsBaseline:(char)arg1 ;
-(void)setHasIsBaseline:(char)arg1 ;
-(char)hasIsBaseline;
-(void)setEnableImagesForDupes:(char)arg1 ;
-(void)setHasEnableImagesForDupes:(char)arg1 ;
-(char)hasEnableImagesForDupes;
-(void)setSupportedODMLVersion:(int)arg1 ;
-(void)setHasSupportedODMLVersion:(char)arg1 ;
-(char)hasSupportedODMLVersion;
-(char)hasExperimentID;
-(char)hasTreatmentID;
-(char)hasDeploymentID;
-(void)setInAllocation:(char)arg1 ;
-(void)setHasInAllocation:(char)arg1 ;
-(char)hasInAllocation;
-(void)setClientExclusive:(char)arg1 ;
-(void)setHasClientExclusive:(char)arg1 ;
-(char)hasClientExclusive;
-(char)isBaseline;
-(char)enableImagesForDupes;
-(int)supportedODMLVersion;
-(char)inAllocation;
-(char)clientExclusive;
@end

