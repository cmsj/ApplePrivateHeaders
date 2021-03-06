/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, NSArray;

@interface CEMApplicationEnterpriseDeclaration_AppPackage : CEMPayloadBase {

	NSString* _payloadDataURL;
	NSString* _payloadContentType;
	NSNumber* _payloadSize;
	NSString* _payloadHashSHA256;
	NSArray* _payloadCertificatePinningIdentifiers;

}

@property (nonatomic,copy) NSString * payloadDataURL;                                   //@synthesize payloadDataURL=_payloadDataURL - In the implementation block
@property (nonatomic,copy) NSString * payloadContentType;                               //@synthesize payloadContentType=_payloadContentType - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSize;                                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,copy) NSString * payloadHashSHA256;                                //@synthesize payloadHashSHA256=_payloadHashSHA256 - In the implementation block
@property (nonatomic,copy) NSArray * payloadCertificatePinningIdentifiers;              //@synthesize payloadCertificatePinningIdentifiers=_payloadCertificatePinningIdentifiers - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 withCertificatePinningIdentifiers:(id)arg5 ;
+(id)buildRequiredOnlyWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)payloadSize;
-(void)setPayloadSize:(NSNumber *)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDataURL:(NSString *)arg1 ;
-(void)setPayloadContentType:(NSString *)arg1 ;
-(void)setPayloadHashSHA256:(NSString *)arg1 ;
-(void)setPayloadCertificatePinningIdentifiers:(NSArray *)arg1 ;
-(NSString *)payloadDataURL;
-(NSString *)payloadContentType;
-(NSString *)payloadHashSHA256;
-(NSArray *)payloadCertificatePinningIdentifiers;
@end

