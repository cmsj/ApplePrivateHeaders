/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECDKIMVerifier : NSObject
-(char)verifyMessageWithContext:(id)arg1 options:(long long)arg2 error:(out id*)arg3 ;
-(id)verificationContextForMessageData:(id)arg1 error:(id*)arg2 ;
-(char)verifyMessageWithContext:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3 error:(out id*)arg4 ;
-(char)verifyMessageBodyData:(id)arg1 withContext:(id)arg2 usingSignature:(id)arg3 ;
-(char)verifyMessageHeaders:(id)arg1 usingSignature:(id)arg2 publicKeySource:(id)arg3 error:(out id*)arg4 ;
-(void)canonicalizeBodyDataUsingSimpleAlgorithm:(id)arg1 ;
-(void)canonicalizeBodyDataUsingRelaxedAlgorithm:(id)arg1 ;
-(id)_base64HashBodyData:(id)arg1 usingSignature:(id)arg2 ;
-(id)canonicalizeHeaders:(id)arg1 usingSimpleAlgorithmWithSignatureHeader:(id)arg2 ;
-(id)canonicalizeHeaders:(id)arg1 usingRelaxedAlgorithmWithSignatureHeader:(id)arg2 ;
-(id)_relaxedCanonicalizationForHeaderName:(id)arg1 headerBody:(id)arg2 ;
-(char)verifyMessageData:(id)arg1 ;
-(char)verifyMessageData:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3 ;
@end

