/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProduct.h>
@class NSString, _SFPBURL, NSData;


@protocol _SFPBProduct <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,retain) _SFPBURL * availabilityURL; 
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) char buyable; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setIdentifier:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setAvailabilityURL:(id)arg1;
-(void)setBuyable:(char)arg1;
-(_SFPBURL *)availabilityURL;
-(char)buyable;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBURL, NSData;

@interface _SFPBProduct : PBCodable <_SFPBProduct, NSSecureCoding> {

	char _buyable;
	NSString* _identifier;
	NSString* _productIdentifier;
	_SFPBURL* _availabilityURL;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain) _SFPBURL * availabilityURL;              //@synthesize availabilityURL=_availabilityURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) char buyable;                            //@synthesize buyable=_buyable - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setAvailabilityURL:(_SFPBURL *)arg1 ;
-(void)setBuyable:(char)arg1 ;
-(_SFPBURL *)availabilityURL;
-(char)buyable;
@end

