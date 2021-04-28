/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningLocationMobilityCriteria : NSObject <PGMeaningCriteria> {

	unsigned long long _locationMobilityType;
	NSString* _locationMobilityLabel;

}

@property (assign,nonatomic) unsigned long long locationMobilityType;              //@synthesize locationMobilityType=_locationMobilityType - In the implementation block
@property (nonatomic,retain) NSString * locationMobilityLabel;                     //@synthesize locationMobilityLabel=_locationMobilityLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(char)isValid;
-(char)passesForMomentNode:(id)arg1 ;
-(void)setLocationMobilityLabel:(NSString *)arg1 ;
-(void)setLocationMobilityType:(unsigned long long)arg1 ;
-(unsigned long long)locationMobilityType;
-(NSString *)locationMobilityLabel;
@end
