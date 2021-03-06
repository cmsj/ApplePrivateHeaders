/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeatureExtractor.h>

@class NSLocale;

@interface PGFeatureExtractorLocale : PGFeatureExtractor {

	NSLocale* _currentLocale;

}

@property (nonatomic,retain) NSLocale * currentLocale;              //@synthesize currentLocale=_currentLocale - In the implementation block
-(id)init;
-(id)name;
-(NSLocale *)currentLocale;
-(id)featureNames;
-(void)setCurrentLocale:(NSLocale *)arg1 ;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
@end

