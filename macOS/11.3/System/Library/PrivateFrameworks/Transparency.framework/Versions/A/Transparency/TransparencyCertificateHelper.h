/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Transparency/Transparency-Structs.h>
@interface TransparencyCertificateHelper : NSObject
+(char)verifyCertificates:(id)arg1 intermediates:(id)arg2 policy:(SecPolicyRef)arg3 error:(id*)arg4 ;
+(SecCertificateRef)certificateFromData:(id)arg1 error:(id*)arg2 ;
+(id)copyTrustedKeysFromDataArray:(id)arg1 error:(id*)arg2 ;
+(char)addTrustedCertificate:(id)arg1 trustedKeys:(id)arg2 error:(id*)arg3 ;
+(id)createCACertificatesArray:(id)arg1 error:(id*)arg2 ;
+(char)verifyLeaf:(id)arg1 intermediates:(id)arg2 policy:(SecPolicyRef)arg3 error:(id*)arg4 ;
@end

