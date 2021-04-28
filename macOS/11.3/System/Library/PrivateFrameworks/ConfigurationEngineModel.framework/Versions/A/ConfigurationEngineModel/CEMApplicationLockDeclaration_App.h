/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMApplicationLockDeclaration_AppOptions, CEMApplicationLockDeclaration_AppUserEnabledOptions;

@interface CEMApplicationLockDeclaration_App : CEMPayloadBase {

	NSString* _payloadIdentifier;
	CEMApplicationLockDeclaration_AppOptions* _payloadOptions;
	CEMApplicationLockDeclaration_AppUserEnabledOptions* _payloadUserEnabledOptions;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                                                                 //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) CEMApplicationLockDeclaration_AppOptions * payloadOptions;                                    //@synthesize payloadOptions=_payloadOptions - In the implementation block
@property (nonatomic,copy) CEMApplicationLockDeclaration_AppUserEnabledOptions * payloadUserEnabledOptions;              //@synthesize payloadUserEnabledOptions=_payloadUserEnabledOptions - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withOptions:(id)arg2 withUserEnabledOptions:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadOptions:(CEMApplicationLockDeclaration_AppOptions *)arg1 ;
-(void)setPayloadUserEnabledOptions:(CEMApplicationLockDeclaration_AppUserEnabledOptions *)arg1 ;
-(CEMApplicationLockDeclaration_AppOptions *)payloadOptions;
-(CEMApplicationLockDeclaration_AppUserEnabledOptions *)payloadUserEnabledOptions;
@end
