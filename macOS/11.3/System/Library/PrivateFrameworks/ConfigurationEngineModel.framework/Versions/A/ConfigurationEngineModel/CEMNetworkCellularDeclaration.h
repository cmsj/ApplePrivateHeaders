/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMNetworkCellularDeclaration_AttachAPN, NSArray, NSString;

@interface CEMNetworkCellularDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	CEMNetworkCellularDeclaration_AttachAPN* _payloadAttachAPN;
	NSArray* _payloadAPNs;

}

@property (nonatomic,copy) CEMNetworkCellularDeclaration_AttachAPN * payloadAttachAPN;              //@synthesize payloadAttachAPN=_payloadAttachAPN - In the implementation block
@property (nonatomic,copy) NSArray * payloadAPNs;                                                   //@synthesize payloadAPNs=_payloadAPNs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAttachAPN:(id)arg2 withAPNs:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAttachAPN:(CEMNetworkCellularDeclaration_AttachAPN *)arg1 ;
-(void)setPayloadAPNs:(NSArray *)arg1 ;
-(CEMNetworkCellularDeclaration_AttachAPN *)payloadAttachAPN;
-(NSArray *)payloadAPNs;
@end

