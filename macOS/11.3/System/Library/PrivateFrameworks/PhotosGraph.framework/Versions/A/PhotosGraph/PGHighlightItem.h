/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, PHAsset, NSArray;


@protocol PGHighlightItem <NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSString * dateDescription; 
@property (nonatomic,copy,readonly) NSString * smartDescription; 
@property (nonatomic,readonly) PHAsset * keyAsset; 
@property (nonatomic,readonly) NSArray * extendedCuratedAssets; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtended; 
@property (nonatomic,readonly) double promotionScore; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short kind; 
@property (nonatomic,readonly) unsigned short visibilityState; 
@property (nonatomic,readonly) unsigned short enrichmentState; 
@property (nonatomic,readonly) id modelObject; 
@required
-(NSString *)uuid;
-(unsigned short)type;
-(unsigned short)kind;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)dateDescription;
-(unsigned short)visibilityState;
-(NSString *)smartDescription;
-(double)promotionScore;
-(unsigned short)enrichmentState;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(PHAsset *)keyAsset;
-(id)modelObject;
-(unsigned long long)numberOfAssetsInExtended;
-(NSArray *)extendedCuratedAssets;

@end

