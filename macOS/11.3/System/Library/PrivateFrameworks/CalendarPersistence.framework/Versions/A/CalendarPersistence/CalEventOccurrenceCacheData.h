/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableOrderedSet, NSMutableDictionary, CalDefaultDictionary, CalDateRange, NSMutableSet, NSSet, NSOrderedSet;

@interface CalEventOccurrenceCacheData : NSObject {

	NSString* _timeZoneString;
	NSMutableOrderedSet* _binnedDates;
	NSMutableDictionary* _occurrenceForOccurrenceIDs;
	CalDefaultDictionary* _occurrencesForDates;
	CalDefaultDictionary* _datesForManagedObjectIDs;
	CalDefaultDictionary* _occurrencesForManagedObjectIDs;
	NSMutableDictionary* _detachedObjectIDToMasterObjectID;
	CalDateRange* _range;
	NSMutableSet* _calendarObjectIDs;

}

@property (nonatomic,retain) CalDateRange * range;                    //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSString * timeZoneString;               //@synthesize timeZoneString=_timeZoneString - In the implementation block
@property (nonatomic,retain) NSSet * calendarObjectIDs;               //@synthesize calendarObjectIDs=_calendarObjectIDs - In the implementation block
@property (nonatomic,retain) NSOrderedSet * binnedDates;              //@synthesize binnedDates=_binnedDates - In the implementation block
-(id)description;
-(unsigned long long)count;
-(CalDateRange *)range;
-(void)setRange:(CalDateRange *)arg1 ;
-(NSOrderedSet *)binnedDates;
-(void)setBinnedDates:(NSOrderedSet *)arg1 ;
-(unsigned long long)_insertIndexForDate:(id)arg1 ;
-(id)allOccurrences;
-(id)occurrencesInRange:(id)arg1 withCalendarIDs:(id)arg2 ;
-(id)occurrenceForOccurrenceID:(id)arg1 ;
-(id)occurrenceByOcurrenceID;
-(id)occurrencesForDateBin:(id)arg1 ;
-(void)pruneOccurrencesOutsideNewRange:(id)arg1 ;
-(id)initWithTimeZoneString:(id)arg1 range:(id)arg2 calendarObjectIDs:(id)arg3 ;
-(void)addOccurrences:(id)arg1 ;
-(NSString *)timeZoneString;
-(void)rebinAllWithTimeZoneString:(id)arg1 ;
-(id)occurrencesForManagedObjectID:(id)arg1 ;
-(void)removeOccurrencesWithManagedObjectIDs:(id)arg1 ;
-(void)unionNewCacheData:(id)arg1 ;
-(char)_masterAndMainObjectIDsDifferForOccurrence:(id)arg1 ;
-(void)emptyCacheData;
-(void)_emptyBins;
-(NSSet *)calendarObjectIDs;
-(unsigned long long)_addDateToBinnedDates:(id)arg1 nextIndex:(unsigned long long)arg2 ;
-(void)_updateOccurrencesDictionariesWithOccurrence:(id)arg1 ;
-(void)_addDateToBinnedDates:(id)arg1 ;
-(void)setTimeZoneString:(NSString *)arg1 ;
-(void)_binOccurrence:(id)arg1 ;
-(char)_validateIsCompletelyEmpty;
-(void)setCalendarObjectIDs:(NSSet *)arg1 ;
@end

