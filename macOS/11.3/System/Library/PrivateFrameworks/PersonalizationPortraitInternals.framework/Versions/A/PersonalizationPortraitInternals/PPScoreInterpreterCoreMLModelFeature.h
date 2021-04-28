/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PPScoreInterpreterCoreMLModelFeature : NSObject {

	NSString* _featureName;
	long long _featureType;
	unsigned long long _multiArraySize;

}

@property (nonatomic,readonly) NSString * featureName;                         //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) long long featureType;                          //@synthesize featureType=_featureType - In the implementation block
@property (nonatomic,readonly) unsigned long long multiArraySize;              //@synthesize multiArraySize=_multiArraySize - In the implementation block
-(id)init;
-(long long)featureType;
-(NSString *)featureName;
-(id)initWithFeatureName:(id)arg1 multiArraySize:(unsigned long long)arg2 ;
-(id)initWithFeatureName:(id)arg1 ;
-(unsigned long long)multiArraySize;
@end
