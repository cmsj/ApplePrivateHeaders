/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDate, NSSet;

@interface PPDecayedFeedbackCounts : NSObject <MLFeatureProvider> {

	double _engagedExplicitly;
	double _engagedImplicitly;
	double _rejectedExplicitly;
	double _rejectedImplicitly;
	NSDate* _latestDate;

}

@property (nonatomic,readonly) double engagedExplicitly;               //@synthesize engagedExplicitly=_engagedExplicitly - In the implementation block
@property (nonatomic,readonly) double engagedImplicitly;               //@synthesize engagedImplicitly=_engagedImplicitly - In the implementation block
@property (nonatomic,readonly) double rejectedExplicitly;              //@synthesize rejectedExplicitly=_rejectedExplicitly - In the implementation block
@property (nonatomic,readonly) double rejectedImplicitly;              //@synthesize rejectedImplicitly=_rejectedImplicitly - In the implementation block
@property (nonatomic,readonly) NSDate * latestDate;                    //@synthesize latestDate=_latestDate - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)toDictionary;
-(NSDate *)latestDate;
-(id)initWithLatestDate:(id)arg1 engagedExplicitly:(double)arg2 engagedImplicitly:(double)arg3 rejectedExplicitly:(double)arg4 rejectedImplicitly:(double)arg5 ;
-(double)engagedExplicitly;
-(double)engagedImplicitly;
-(double)rejectedExplicitly;
-(double)rejectedImplicitly;
@end

