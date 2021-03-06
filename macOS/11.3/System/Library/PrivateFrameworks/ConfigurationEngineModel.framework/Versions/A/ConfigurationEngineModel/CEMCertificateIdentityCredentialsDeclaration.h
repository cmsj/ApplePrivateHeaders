/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSData;

@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase {

	NSData* _payloadCertificate;

}

@property (nonatomic,copy) NSData * payloadCertificate;              //@synthesize payloadCertificate=_payloadCertificate - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithCertificate:(id)arg1 ;
+(id)buildRequiredOnlyWithCertificate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setPayloadCertificate:(NSData *)arg1 ;
-(NSData *)payloadCertificate;
@end

