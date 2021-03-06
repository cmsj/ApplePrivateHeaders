/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@interface IFCertificateIdentity : NSObject {

	IFCertificateIdentity_Private* _private;

}
+(unsigned)algorithmForString:(id)arg1 ;
+(id)stringForAlgorthm:(unsigned)arg1 ;
-(void)dealloc;
-(SecCertificateRef)certificate;
-(int)policy;
-(id)certificateChain;
-(id)initWithCertArray:(id)arg1 signatureData:(id)arg2 comparisonData:(id)arg3 andType:(id)arg4 ;
-(id)initWithSignature:(id)arg1 andManifestPath:(id)arg2 ignoringPaths:(id)arg3 ;
-(id)_readCerts:(id)arg1 ;
-(char)_verifySignedData:(id)arg1 withData:(id)arg2 andCert:(SecCertificateRef)arg3 ;
-(id)_initWithSignature:(id)arg1 ;
-(char)_manifestMatchesDirectory:(id)arg1 excludingPaths:(id)arg2 ;
-(char)_validateTrustUsingSecManifestData:(id)arg1 ;
-(char)_validateTrust;
-(int)verifyTrustWithPolicy:(int)arg1 ;
-(SecTrustRef)trustRef;
-(int)trustState;
-(SecPolicyRef)_createInstallerPolicy;
-(SecPolicyRef)_createPolicyForType:(int)arg1 withAnchorCerts:(id*)arg2 ;
-(char)_handleTrustResult:(unsigned)arg1 forTrustRef:(SecTrustRef)arg2 ;
-(SecPolicyRef)_createSWUPolicy;
-(char)_manifestMatchesData:(id)arg1 ;
@end

