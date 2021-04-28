/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMultiTabsState : PBCodable <NSCopying> {

	unsigned _currentTabIndex;
	unsigned _numberOfTabsOpen;
	SCD_Struct_GE119 _flags;

}

@property (assign,nonatomic) char hasNumberOfTabsOpen; 
@property (assign,nonatomic) unsigned numberOfTabsOpen; 
@property (assign,nonatomic) char hasCurrentTabIndex; 
@property (assign,nonatomic) unsigned currentTabIndex; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setNumberOfTabsOpen:(unsigned)arg1 ;
-(void)setCurrentTabIndex:(unsigned)arg1 ;
-(unsigned)numberOfTabsOpen;
-(void)setHasNumberOfTabsOpen:(char)arg1 ;
-(char)hasNumberOfTabsOpen;
-(unsigned)currentTabIndex;
-(void)setHasCurrentTabIndex:(char)arg1 ;
-(char)hasCurrentTabIndex;
@end
