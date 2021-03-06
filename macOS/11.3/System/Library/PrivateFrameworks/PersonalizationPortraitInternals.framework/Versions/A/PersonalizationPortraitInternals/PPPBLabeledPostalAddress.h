/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBLabeledPostalAddress : PBCodable <NSCopying> {

	NSString* _city;
	NSString* _country;
	NSString* _isoCountryCode;
	NSString* _label;
	NSString* _postalCode;
	NSString* _state;
	NSString* _street;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;

}

@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) char hasStreet; 
@property (nonatomic,retain) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) char hasSubLocality; 
@property (nonatomic,retain) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) char hasCity; 
@property (nonatomic,retain) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) char hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) char hasState; 
@property (nonatomic,retain) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) char hasPostalCode; 
@property (nonatomic,retain) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) char hasCountry; 
@property (nonatomic,retain) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) char hasIsoCountryCode; 
@property (nonatomic,retain) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)city;
-(NSString *)country;
-(NSString *)postalCode;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSString *)street;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(char)hasStreet;
-(char)hasLabel;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(char)hasIsoCountryCode;
-(char)hasCountry;
-(char)hasSubAdministrativeArea;
-(char)hasSubLocality;
-(char)hasState;
-(char)hasCity;
-(char)hasPostalCode;
@end

