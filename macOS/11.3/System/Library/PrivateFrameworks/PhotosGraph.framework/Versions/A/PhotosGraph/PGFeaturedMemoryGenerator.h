/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator {

	char _usesLowRequirements;
	char _oldMemory;
	NSDate* _upperBoundLocalDate;

}

@property (nonatomic,retain) NSDate * upperBoundLocalDate;              //@synthesize upperBoundLocalDate=_upperBoundLocalDate - In the implementation block
@property (assign,nonatomic) char usesLowRequirements;                  //@synthesize usesLowRequirements=_usesLowRequirements - In the implementation block
@property (assign,nonatomic) char oldMemory;                            //@synthesize oldMemory=_oldMemory - In the implementation block
-(NSDate *)upperBoundLocalDate;
-(void)setUpperBoundLocalDate:(NSDate *)arg1 ;
-(char)usesLowRequirements;
-(void)setUsesLowRequirements:(char)arg1 ;
-(char)oldMemory;
-(void)setOldMemory:(char)arg1 ;
@end

