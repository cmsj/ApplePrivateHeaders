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

@class NSMutableArray, NSData;

@interface ADConfigurationRequest : PBRequest <NSCopying> {

	NSMutableArray* _currentConfigurations;
	NSData* _iAdID;

}

@property (nonatomic,retain) NSMutableArray * currentConfigurations;              //@synthesize currentConfigurations=_currentConfigurations - In the implementation block
@property (nonatomic,readonly) char hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                                      //@synthesize iAdID=_iAdID - In the implementation block
+(id)options;
+(Class)currentConfigurationType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(char)hasIAdID;
-(NSData *)iAdID;
-(void)addCurrentConfiguration:(id)arg1 ;
-(unsigned long long)currentConfigurationsCount;
-(void)clearCurrentConfigurations;
-(id)currentConfigurationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)currentConfigurations;
-(void)setCurrentConfigurations:(NSMutableArray *)arg1 ;
@end
