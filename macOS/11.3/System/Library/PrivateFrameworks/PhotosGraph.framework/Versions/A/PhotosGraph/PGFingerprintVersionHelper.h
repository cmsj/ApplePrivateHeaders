/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGFingerprintVersionHelper : NSObject
+(char)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
+(id)featureExtractorForFingerprintVersion:(long long)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4 ;
+(long long)fingerprintVersionForName:(id)arg1 ;
+(id)fetchOptionPropertySetForFingerprintVersion:(long long)arg1 ;
+(char)isMemoryFingerprintVersion:(long long)arg1 ;
+(char)isMomentFingerprintVersion:(long long)arg1 ;
+(char)isAssetFingerprintVersion:(long long)arg1 ;
+(void)resetPreCalculatedFeatures;
+(id)nameForFingerprintVersion:(long long)arg1 ;
+(id)_assetPrintFeatureExtractorForAssetPrintType:(long long)arg1 transformers:(id)arg2 ;
+(id)_multiModalFeatureExtractorForMutliModalType:(long long)arg1 assetFeatureExtractor:(id)arg2 personaVectorFeatureExtractor:(id)arg3 graph:(id)arg4 transformers:(id)arg5 error:(id*)arg6 ;
+(id)_personaVectorFeatureExtractorForPersonaVectorType:(long long)arg1 fetchOptionPropertySet:(id)arg2 graph:(id)arg3 transformers:(id)arg4 error:(id*)arg5 ;
+(id)_featureExtractors:(id)arg1 withTransformers:(id)arg2 ;
+(id)_featureExtractors:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3 ;
+(id)_featureExtractor:(id)arg1 withTransformers:(id)arg2 ;
+(id)_featureExtractor:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3 ;
+(id)_sceneprintFeatureExtractorInstance;
@end

