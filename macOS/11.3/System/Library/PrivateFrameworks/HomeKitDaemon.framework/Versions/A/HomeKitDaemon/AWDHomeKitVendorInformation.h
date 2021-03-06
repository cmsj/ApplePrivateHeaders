/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitVendorInformation : PBCodable <NSCopying> {

	NSString* _category;
	NSString* _firmwareVersion;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _name;
	NSString* _productData;

}

@property (nonatomic,readonly) char hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) char hasModel; 
@property (nonatomic,retain) NSString * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) char hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasProductData; 
@property (nonatomic,retain) NSString * productData;                  //@synthesize productData=_productData - In the implementation block
@property (nonatomic,readonly) char hasCategory; 
@property (nonatomic,retain) NSString * category;                     //@synthesize category=_category - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(char)hasName;
-(char)hasCategory;
-(NSString *)manufacturer;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(char)hasManufacturer;
-(char)hasModel;
-(char)hasFirmwareVersion;
-(NSString *)productData;
-(void)setProductData:(NSString *)arg1 ;
-(char)hasProductData;
@end

