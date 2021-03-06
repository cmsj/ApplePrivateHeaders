/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/Versions/A/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaCarPlayHeadUnitContext : SISchemaInstrumentationMessage {

	NSString* _vehicleName;
	NSString* _vehicleModel;
	NSString* _vehicleManufacturer;
	char _hasVehicleName;
	char _hasVehicleModel;
	char _hasVehicleManufacturer;

}

@property (nonatomic,copy) NSString * vehicleName;                      //@synthesize vehicleName=_vehicleName - In the implementation block
@property (assign,nonatomic) char hasVehicleName;                       //@synthesize hasVehicleName=_hasVehicleName - In the implementation block
@property (nonatomic,copy) NSString * vehicleModel;                     //@synthesize vehicleModel=_vehicleModel - In the implementation block
@property (assign,nonatomic) char hasVehicleModel;                      //@synthesize hasVehicleModel=_hasVehicleModel - In the implementation block
@property (nonatomic,copy) NSString * vehicleManufacturer;              //@synthesize vehicleManufacturer=_vehicleManufacturer - In the implementation block
@property (assign,nonatomic) char hasVehicleManufacturer;               //@synthesize hasVehicleManufacturer=_hasVehicleManufacturer - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setVehicleModel:(NSString *)arg1 ;
-(void)setVehicleManufacturer:(NSString *)arg1 ;
-(NSString *)vehicleName;
-(NSString *)vehicleModel;
-(NSString *)vehicleManufacturer;
-(char)hasVehicleName;
-(char)hasVehicleModel;
-(char)hasVehicleManufacturer;
-(void)setHasVehicleName:(char)arg1 ;
-(void)setHasVehicleModel:(char)arg1 ;
-(void)setHasVehicleManufacturer:(char)arg1 ;
@end

