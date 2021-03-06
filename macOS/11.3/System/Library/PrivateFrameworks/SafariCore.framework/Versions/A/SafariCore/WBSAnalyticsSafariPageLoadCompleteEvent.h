/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable <NSCopying> {

	unsigned long long _configurationID;
	long long _errorCode;
	unsigned long long _pageID;
	unsigned long long _pageLoadTime;
	unsigned long long _timestamp;
	SCD_Struct_WB6 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasConfigurationID; 
@property (assign,nonatomic) unsigned long long configurationID;              //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) char hasPageID; 
@property (assign,nonatomic) unsigned long long pageID;                       //@synthesize pageID=_pageID - In the implementation block
@property (assign,nonatomic) char hasPageLoadTime; 
@property (assign,nonatomic) unsigned long long pageLoadTime;                 //@synthesize pageLoadTime=_pageLoadTime - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(long long)errorCode;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(char)arg1 ;
-(char)hasErrorCode;
-(unsigned long long)pageID;
-(void)setPageID:(unsigned long long)arg1 ;
-(void)setConfigurationID:(unsigned long long)arg1 ;
-(void)setHasConfigurationID:(char)arg1 ;
-(char)hasConfigurationID;
-(void)setHasPageID:(char)arg1 ;
-(char)hasPageID;
-(void)setPageLoadTime:(unsigned long long)arg1 ;
-(void)setHasPageLoadTime:(char)arg1 ;
-(char)hasPageLoadTime;
-(unsigned long long)configurationID;
-(unsigned long long)pageLoadTime;
@end

