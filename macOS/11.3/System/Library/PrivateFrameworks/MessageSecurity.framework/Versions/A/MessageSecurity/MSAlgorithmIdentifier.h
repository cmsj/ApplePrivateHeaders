/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/Versions/A/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageSecurity/MessageSecurity-Structs.h>
@class MSOID, NSData;

@interface MSAlgorithmIdentifier : NSObject {

	MSOID* _algorithm;
	NSData* _parameters;
	AlgorithmIdentifier* _asn1AlgId;

}

@property (readonly) AlgorithmIdentifier* asn1AlgId;              //@synthesize asn1AlgId=_asn1AlgId - In the implementation block
@property (readonly) MSOID * algorithm;                           //@synthesize algorithm=_algorithm - In the implementation block
@property (readonly) NSData * parameters;                         //@synthesize parameters=_parameters - In the implementation block
+(id)algorithmIdentifierWithOID:(id)arg1 ;
+(id)algorithmIdentifierWithAsn1AlgId:(AlgorithmIdentifier*)arg1 error:(id*)arg2 ;
+(id)digestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)parameters;
-(MSOID *)algorithm;
-(AlgorithmIdentifier*)encode;
-(id)initWithOID:(id)arg1 ;
-(id)initWithAsn1AlgId:(AlgorithmIdentifier*)arg1 error:(id*)arg2 ;
-(id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id*)arg2 ;
-(id)initWithOID:(id)arg1 parameters:(id)arg2 ;
-(id)signatureAlgorithmWithDigestAlgorithm:(id)arg1 error:(id*)arg2 ;
-(AlgorithmIdentifier*)asn1AlgId;
@end

