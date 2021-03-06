/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRating, NSString;

@interface GEOAppleRating : NSObject {

	GEOPDRating* _pdRating;

}

@property (nonatomic,readonly) long long ratingType; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) double percentage; 
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) double maxScore; 
@property (nonatomic,readonly) int numberOfRatingsUsedForScore; 
@property (nonatomic,readonly) char isRecommended; 
-(double)score;
-(NSString *)localizedTitle;
-(double)percentage;
-(long long)ratingType;
-(double)maxScore;
-(id)initWithRating:(id)arg1 ;
-(int)numberOfRatingsUsedForScore;
-(char)isRecommended;
@end

