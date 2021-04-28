/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/Versions/A/FeatureFlagsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FeatureFlagsSupport/FeatureFlagsSupport-Structs.h>
@class NSArray, NSMutableSet, NSMutableDictionary, NSSet;

@interface FFConfiguration : NSObject {

	os_unfair_lock_s lock;
	NSArray* searchPaths;
	NSMutableSet* _domains;
	NSMutableDictionary* configByLevel[2][4];
	NSMutableDictionary* metaByLevel[4];

}

@property (nonatomic,readonly) NSSet * domains; 
+(id)shared;
-(char)reset:(id*)arg1 ;
-(void)invalidateCache;
-(id)initPrivate;
-(NSSet *)domains;
-(id)stateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)enableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)disableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(char)commitUpdates:(id*)arg1 ;
-(id)stateForFeature:(id)arg1 domain:(id)arg2 ;
-(void)clearCachedData;
-(char)isValidName:(id)arg1 ;
-(id)fileURLForLevel:(long long)arg1 pathIndex:(int)arg2 ;
-(id)makeFeatureDictionaryFrom:(id)arg1 forDomain:(id)arg2 ;
-(id)fileURLForDomain:(id)arg1 pathIndex:(int)arg2 ;
-(void)addFeaturesForDomain:(id)arg1 pathIndex:(int)arg2 fromURL:(id)arg3 ;
-(void)loadCombinedDataForLevel:(long long)arg1 ;
-(void)loadDomain:(id)arg1 level:(long long)arg2 ;
-(id)effectiveStateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)createMutableDomainConfig:(id)arg1 level:(long long)arg2 ;
-(void)loadAllData;
-(char)isFeatureHidden:(id)arg1 domain:(id)arg2 ;
-(void)setValue:(long long)arg1 feature:(id)arg2 domain:(id)arg3 level:(long long)arg4 ;
-(char)createDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)populateDictionary:(id)arg1 withFeatures:(id)arg2 ;
-(char)writeData:(id)arg1 toFile:(id)arg2 error:(id*)arg3 ;
-(void)validateName:(id)arg1 ;
-(void)loadAllLevelsForDomain:(id)arg1 ;
-(id)resolvedStateForFeature:(id)arg1 domain:(id)arg2 ;
-(void)setFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 value:(long long)arg3 ;
-(char)writeDomainUpdates:(id*)arg1 ;
-(char)writeCombinedUpdates:(id*)arg1 ;
-(id)featuresForDomain:(id)arg1 ;
-(id)defaultStateForFeature:(id)arg1 domain:(id)arg2 ;
-(void)enableFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 ;
-(void)disableFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 ;
-(void)unsetFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)unsetFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 ;
-(char)resetDomain:(id)arg1 error:(id*)arg2 ;
@end
