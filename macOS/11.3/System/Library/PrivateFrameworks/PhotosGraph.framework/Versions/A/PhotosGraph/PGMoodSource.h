/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAssetCollection, PGManager, PGMoodGeneratorOptions, PGMoodVector, NSDictionary;

@interface PGMoodSource : NSObject {

	PHAssetCollection* _assetCollection;
	PGManager* _graphManager;
	PGMoodGeneratorOptions* _options;
	PGMoodVector* _positiveVector;
	PGMoodVector* _negativeVector;
	NSDictionary* _moodSourceDictionary;

}

@property (readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (readonly) PGManager * graphManager;                         //@synthesize graphManager=_graphManager - In the implementation block
@property (readonly) PGMoodGeneratorOptions * options;                 //@synthesize options=_options - In the implementation block
@property (retain) PGMoodVector * positiveVector;                      //@synthesize positiveVector=_positiveVector - In the implementation block
@property (retain) PGMoodVector * negativeVector;                      //@synthesize negativeVector=_negativeVector - In the implementation block
@property (readonly) NSDictionary * moodSourceDictionary;              //@synthesize moodSourceDictionary=_moodSourceDictionary - In the implementation block
+(id)_plistName;
-(PGMoodGeneratorOptions *)options;
-(double)weight;
-(PGManager *)graphManager;
-(PHAssetCollection *)assetCollection;
-(id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3 ;
-(id)_plistMoodIdentifiers;
-(PGMoodVector *)positiveVector;
-(void)setPositiveVector:(PGMoodVector *)arg1 ;
-(PGMoodVector *)negativeVector;
-(void)setNegativeVector:(PGMoodVector *)arg1 ;
-(id)_moodVectorForMoodIdentifier:(id)arg1 ;
-(id)_moodVectors;
-(void)_combineMoodVectors;
-(unsigned long long)_sourceInputCount;
-(NSDictionary *)moodSourceDictionary;
@end

