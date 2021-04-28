/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface CertificateUtilities : NSObject
+(char)hasClientCertificateIdentityForProtectionSpace:(id)arg1 ;
+(id)extendedValidationOrganizationNameForServerTrust:(SecTrustRef)arg1 ;
+(id)identitiesWithProtectionSpace:(id)arg1 ;
+(id)labelForCertificates:(id)arg1 ;
+(RetainPtr<__SecPolicy *>*)sslPolicyForHost:(id)arg1 client:(char)arg2 ;
+(RetainPtr<__SecTrust *>*)trustReferenceWithCertificates:(id)arg1 forPolicy:(SecPolicyRef)arg2 ;
+(BOOL)trustIncludesRevokedCertificate:(SecTrustRef)arg1 ;
+(RetainPtr<__SecPolicy *>*)ocspPolicyWithOptions:(unsigned)arg1 ;
+(char)isRevocationServerMetaError:(int)arg1 ;
+(id)subjectNameForCertificate:(SecCertificateRef)arg1 ;
+(id)issuerOrganizationNameForCertificate:(SecCertificateRef)arg1 ;
+(id)subjectFullLocationForCertificate:(SecCertificateRef)arg1 ;
+(char)isCertificateChain:(id)arg1 trustedForHost:(id)arg2 ;
@end
