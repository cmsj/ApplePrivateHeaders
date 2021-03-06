/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface PHAPrivateFederatedLearningFiltersDecoder : NSObject {

	NSDictionary* _assetFeatureExtractorNameToClass;
	NSDictionary* _graphFeatureExtractorNameToClass;
	NSDictionary* _facesFeatureExtractorNameToClass;
	NSDictionary* _assetPhotoLibraryFeatureExtractorNameToClass;
	NSString* _fingerprintVersionString;

}

@property (nonatomic,readonly) NSDictionary * assetFeatureExtractorNameToClass;                          //@synthesize assetFeatureExtractorNameToClass=_assetFeatureExtractorNameToClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * graphFeatureExtractorNameToClass;                          //@synthesize graphFeatureExtractorNameToClass=_graphFeatureExtractorNameToClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * facesFeatureExtractorNameToClass;                          //@synthesize facesFeatureExtractorNameToClass=_facesFeatureExtractorNameToClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetPhotoLibraryFeatureExtractorNameToClass;              //@synthesize assetPhotoLibraryFeatureExtractorNameToClass=_assetPhotoLibraryFeatureExtractorNameToClass - In the implementation block
@property (nonatomic,readonly) NSString * fingerprintVersionString;                                      //@synthesize fingerprintVersionString=_fingerprintVersionString - In the implementation block
-(char)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 ;
-(id)filtersByDatasetNameFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithFingeprintVersionString:(id)arg1 ;
-(NSDictionary *)assetFeatureExtractorNameToClass;
-(NSDictionary *)graphFeatureExtractorNameToClass;
-(NSDictionary *)facesFeatureExtractorNameToClass;
-(NSDictionary *)assetPhotoLibraryFeatureExtractorNameToClass;
-(NSString *)fingerprintVersionString;
-(id)filtersFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)featureValidatorsForFilterConfigList:(id)arg1 featureExtractor:(id)arg2 featureValidatorType:(long long)arg3 featureExtractorType:(long long)arg4 error:(id*)arg5 ;
-(id)featureValidatorForFilterConfig:(id)arg1 featureExtractor:(id)arg2 featureValidatorType:(long long)arg3 featureExtractorType:(long long)arg4 error:(id*)arg5 ;
-(long long)featureValidatorTypeForFeatureExtractorName:(id)arg1 ;
-(long long)featureExtractorTypeForFeatureExtractorName:(id)arg1 ;
-(id)featureExtractorFromName:(id)arg1 error:(id*)arg2 ;
-(char)validateFiltersForDatasetName:(id)arg1 error:(id*)arg2 ;
@end

