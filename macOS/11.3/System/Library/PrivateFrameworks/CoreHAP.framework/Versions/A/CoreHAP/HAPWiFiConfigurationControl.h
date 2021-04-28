/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPWiFiConfigurationOperationTypeWrapper, HAPTLVUnsignedNumberValue, HAPWiFiConfigurationUpdateStatusWrapper, NSString, HAPWiFiStationConfiguration;

@interface HAPWiFiConfigurationControl : NSObject <NSCopying, HAPTLVProtocol> {

	HAPWiFiConfigurationOperationTypeWrapper* _operationType;
	HAPTLVUnsignedNumberValue* _cookie;
	HAPWiFiConfigurationUpdateStatusWrapper* _updateStatus;
	HAPTLVUnsignedNumberValue* _operationTimeout;
	NSString* _countryCodeConfiguration;
	HAPWiFiStationConfiguration* _stationConfiguration;

}

@property (nonatomic,retain) HAPWiFiConfigurationOperationTypeWrapper * operationType;              //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * cookie;                                    //@synthesize cookie=_cookie - In the implementation block
@property (nonatomic,retain) HAPWiFiConfigurationUpdateStatusWrapper * updateStatus;                //@synthesize updateStatus=_updateStatus - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * operationTimeout;                          //@synthesize operationTimeout=_operationTimeout - In the implementation block
@property (nonatomic,retain) NSString * countryCodeConfiguration;                                   //@synthesize countryCodeConfiguration=_countryCodeConfiguration - In the implementation block
@property (nonatomic,retain) HAPWiFiStationConfiguration * stationConfiguration;                    //@synthesize stationConfiguration=_stationConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPWiFiConfigurationOperationTypeWrapper *)operationType;
-(void)setOperationType:(HAPWiFiConfigurationOperationTypeWrapper *)arg1 ;
-(HAPWiFiConfigurationUpdateStatusWrapper *)updateStatus;
-(HAPTLVUnsignedNumberValue *)operationTimeout;
-(void)setOperationTimeout:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)cookie;
-(void)setCookie:(HAPTLVUnsignedNumberValue *)arg1 ;
-(char)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setUpdateStatus:(HAPWiFiConfigurationUpdateStatusWrapper *)arg1 ;
-(void)setCountryCodeConfiguration:(NSString *)arg1 ;
-(void)setStationConfiguration:(HAPWiFiStationConfiguration *)arg1 ;
-(NSString *)countryCodeConfiguration;
-(HAPWiFiStationConfiguration *)stationConfiguration;
-(id)initWithOperationType:(id)arg1 cookie:(id)arg2 updateStatus:(id)arg3 operationTimeout:(id)arg4 countryCodeConfiguration:(id)arg5 stationConfiguration:(id)arg6 ;
@end
