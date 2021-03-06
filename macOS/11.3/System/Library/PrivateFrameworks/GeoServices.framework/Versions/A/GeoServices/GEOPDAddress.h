/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _localizedAddress;
	NSMutableArray* _spokenNavigationAddress;
	NSMutableArray* _spokenStructuredAddress;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _knownAccuracy;
	struct {
		unsigned has_knownAccuracy : 1;
		unsigned read_unknownFields : 1;
		unsigned read_localizedAddress : 1;
		unsigned read_spokenNavigationAddress : 1;
		unsigned read_spokenStructuredAddress : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * localizedAddress; 
@property (nonatomic,retain) NSMutableArray * spokenNavigationAddress; 
@property (nonatomic,retain) NSMutableArray * spokenStructuredAddress; 
@property (assign,nonatomic) char hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)localizedAddressType;
+(Class)spokenNavigationAddressType;
+(Class)spokenStructuredAddressType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)addLocalizedAddress:(id)arg1 ;
-(unsigned long long)localizedAddressCount;
-(void)clearLocalizedAddress;
-(id)localizedAddressAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedAddress;
-(void)setLocalizedAddress:(NSMutableArray *)arg1 ;
-(char)hasKnownAccuracy;
-(int)knownAccuracy;
-(void)addSpokenNavigationAddress:(id)arg1 ;
-(void)addSpokenStructuredAddress:(id)arg1 ;
-(void)setKnownAccuracy:(int)arg1 ;
-(unsigned long long)spokenNavigationAddressCount;
-(void)clearSpokenNavigationAddress;
-(id)spokenNavigationAddressAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenStructuredAddressCount;
-(void)clearSpokenStructuredAddress;
-(id)spokenStructuredAddressAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)spokenNavigationAddress;
-(void)setSpokenNavigationAddress:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spokenStructuredAddress;
-(void)setSpokenStructuredAddress:(NSMutableArray *)arg1 ;
-(void)setHasKnownAccuracy:(char)arg1 ;
-(id)knownAccuracyAsString:(int)arg1 ;
-(int)StringAsKnownAccuracy:(id)arg1 ;
@end

