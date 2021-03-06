/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	char _shouldSendRecordPCSKeys;
	char _enqueuedOnContainerService;
	char _legacyIsLocalBit;
	char _shouldFetchAssetContentInMemory;
	NSString* _serviceName;
	NSString* _functionName;
	NSArray* _requestLocalSerializations;
	NSArray* _requestLocalEnvelopes;
	NSData* _permittedRemoteMeasurement;
	NSURL* _clientRuntimeProvidedServiceURL;
	NSURL* _resolvedBaseURL;

}

@property (nonatomic,copy) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                              //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalSerializations;                 //@synthesize requestLocalSerializations=_requestLocalSerializations - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalEnvelopes;                      //@synthesize requestLocalEnvelopes=_requestLocalEnvelopes - In the implementation block
@property (nonatomic,copy) NSData * permittedRemoteMeasurement;                  //@synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement - In the implementation block
@property (assign,nonatomic) char shouldSendRecordPCSKeys;                       //@synthesize shouldSendRecordPCSKeys=_shouldSendRecordPCSKeys - In the implementation block
@property (assign,nonatomic) char enqueuedOnContainerService;                    //@synthesize enqueuedOnContainerService=_enqueuedOnContainerService - In the implementation block
@property (nonatomic,copy) NSURL * clientRuntimeProvidedServiceURL;              //@synthesize clientRuntimeProvidedServiceURL=_clientRuntimeProvidedServiceURL - In the implementation block
@property (assign,nonatomic) char legacyIsLocalBit;                              //@synthesize legacyIsLocalBit=_legacyIsLocalBit - In the implementation block
@property (nonatomic,copy) NSURL * resolvedBaseURL;                              //@synthesize resolvedBaseURL=_resolvedBaseURL - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContentInMemory;               //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
+(char)supportsSecureCoding;
+(void)applyDefaultParametersToServiceURLComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)functionName;
-(char)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(char)arg1 ;
-(void)setRequestLocalSerializations:(NSArray *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSArray *)requestLocalSerializations;
-(void)setClientRuntimeProvidedServiceURL:(NSURL *)arg1 ;
-(void)setEnqueuedOnContainerService:(char)arg1 ;
-(void)setLegacyIsLocalBit:(char)arg1 ;
-(char)legacyIsLocalBit;
-(NSURL *)clientRuntimeProvidedServiceURL;
-(NSArray *)requestLocalEnvelopes;
-(NSData *)permittedRemoteMeasurement;
-(char)shouldSendRecordPCSKeys;
-(char)enqueuedOnContainerService;
-(void)setRequestLocalEnvelopes:(NSArray *)arg1 ;
-(void)setPermittedRemoteMeasurement:(NSData *)arg1 ;
-(void)setShouldSendRecordPCSKeys:(char)arg1 ;
-(NSURL *)resolvedBaseURL;
-(void)setResolvedBaseURL:(NSURL *)arg1 ;
@end

