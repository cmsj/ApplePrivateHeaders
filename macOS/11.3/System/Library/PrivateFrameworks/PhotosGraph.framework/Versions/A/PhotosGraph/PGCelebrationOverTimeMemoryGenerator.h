/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSSet;

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator {

	NSDate* _localDate;
	NSSet* _upcomingHolidayNames;

}

@property (nonatomic,retain) NSDate * localDate;                        //@synthesize localDate=_localDate - In the implementation block
@property (nonatomic,retain) NSSet * upcomingHolidayNames;              //@synthesize upcomingHolidayNames=_upcomingHolidayNames - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(id)_holidayNodeForMomentNodes:(id)arg1 ;
-(NSSet *)upcomingHolidayNames;
-(void)setUpcomingHolidayNames:(NSSet *)arg1 ;
@end
