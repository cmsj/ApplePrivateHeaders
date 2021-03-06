/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PRSL2FeatureVector : NSObject <NSCopying> {

	PRSL2FeatureScoreSmallCache _cache;
	void* _featureData;
	unsigned short _featureDataSize;
	unsigned char _flags;
	unsigned char _values;
	float _originalL2Score;
	float _experimentalScore;
	float _withinBundleScore;
	NSString* _bundleID;
	NSString* _device_type;
	NSDictionary* _searchThroughCEPData;
	NSDictionary* _roundTripFeatures;
	T _indexScore;
	opaque_pthread_mutex_t _featureDataLock;

}

@property (assign,nonatomic) float originalL2Score;                               //@synthesize originalL2Score=_originalL2Score - In the implementation block
@property (assign,nonatomic) float experimentalScore;                             //@synthesize experimentalScore=_experimentalScore - In the implementation block
@property (assign,nonatomic) float withinBundleScore;                             //@synthesize withinBundleScore=_withinBundleScore - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * device_type;                              //@synthesize device_type=_device_type - In the implementation block
@property (nonatomic,retain) NSDictionary * searchThroughCEPData;                 //@synthesize searchThroughCEPData=_searchThroughCEPData - In the implementation block
@property (assign,nonatomic) T indexScore;                                        //@synthesize indexScore=_indexScore - In the implementation block
@property (assign,nonatomic) char displayNameFuzzySpecialInsertion; 
@property (assign,nonatomic) char isSiriAction; 
@property (assign,nonatomic) char isAppInDock; 
@property (nonatomic,readonly) char vipSenderMatchesQuery; 
@property (nonatomic,readonly) char senderIsVip; 
@property (nonatomic,readonly) char receiverIsVip; 
@property (nonatomic,retain) NSDictionary * roundTripFeatures;                    //@synthesize roundTripFeatures=_roundTripFeatures - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t featureDataLock;              //@synthesize featureDataLock=_featureDataLock - In the implementation block
+(void)initialize;
+(id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3 ;
+(CFSetRef)getL2FeatureSet;
+(FeatureInfo*)featureForName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)cleanup;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)dictionaryRepresentation;
-(char)serializeToJSON:(void*)arg1 options:(long long)arg2 ;
-(float)originalL2Score;
-(NSString *)device_type;
-(void)setDevice_type:(NSString *)arg1 ;
-(float)scoreForFeature:(unsigned short)arg1 ;
-(char)isAppInDock;
-(void)setScores:(float*)arg1 forFeatures:(unsigned short*)arg2 count:(unsigned long long)arg3 ;
-(void)setIndexScore:(T)arg1 ;
-(void)setRoundTripFeatures:(NSDictionary *)arg1 ;
-(float)withinBundleScore;
-(void)setWithinBundleScore:(float)arg1 ;
-(float*)getAllScores:(float)arg1 ;
-(char)vipSenderMatchesQuery;
-(char)senderIsVip;
-(char)receiverIsVip;
-(void)setIsAppInDock:(char)arg1 ;
-(void)setOriginalL2Score:(float)arg1 ;
-(char)displayNameFuzzySpecialInsertion;
-(float)experimentalScore;
-(id)_dictionaryRepresentationWithoutDefaultValues:(char)arg1 ;
-(void)swapFeature:(unsigned short)arg1 withSubstitute:(unsigned short)arg2 scores:(float*)arg3 ;
-(void)swapAllLastUsedDateFeatures:(float*)arg1 ;
-(void)swapAllContentCreationDateFeatures:(float*)arg1 ;
-(void)swapAllRecenyFeatures:(float*)arg1 ;
-(void)restoreFromJazzkonPlusHacks:(float*)arg1 ;
-(id)initWithCache:(PRSL2FeatureScoreSmallCache)arg1 featureData:(void*)arg2 featureDataSize:(unsigned short)arg3 flags:(unsigned char)arg4 values:(unsigned char)arg5 ;
-(void)setExperimentalScore:(float)arg1 ;
-(NSDictionary *)searchThroughCEPData;
-(void)setSearchThroughCEPData:(NSDictionary *)arg1 ;
-(T)indexScore;
-(void)setDisplayNameFuzzySpecialInsertion:(char)arg1 ;
-(char)isSiriAction;
-(void)setIsSiriAction:(char)arg1 ;
-(NSDictionary *)roundTripFeatures;
-(id)dictionaryRepresentationWithoutDefaultValues;
-(opaque_pthread_mutex_t)featureDataLock;
-(void)setFeatureDataLock:(opaque_pthread_mutex_t)arg1 ;
@end

