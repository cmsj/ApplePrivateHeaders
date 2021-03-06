/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObjectContext.h>

@class NSMutableDictionary, NSMutableArray;

@interface EKManagedObjectContext : CalManagedObjectContext {

	NSMutableDictionary* _modifiedSourceMap;
	NSMutableDictionary* _modifiedCalendarMap;
	NSMutableDictionary* _modifiedItemMap;
	NSMutableDictionary* _modifiedNotificationMap;
	NSMutableArray* _confirmedSuggestedEvents;
	NSMutableArray* _deletedSuggestionInfoUniqueKeys;

}

@property (retain) NSMutableDictionary * modifiedSourceMap;                       //@synthesize modifiedSourceMap=_modifiedSourceMap - In the implementation block
@property (retain) NSMutableDictionary * modifiedCalendarMap;                     //@synthesize modifiedCalendarMap=_modifiedCalendarMap - In the implementation block
@property (retain) NSMutableDictionary * modifiedItemMap;                         //@synthesize modifiedItemMap=_modifiedItemMap - In the implementation block
@property (retain) NSMutableDictionary * modifiedNotificationMap;                 //@synthesize modifiedNotificationMap=_modifiedNotificationMap - In the implementation block
@property (retain) NSMutableArray * confirmedSuggestedEvents;                     //@synthesize confirmedSuggestedEvents=_confirmedSuggestedEvents - In the implementation block
@property (retain) NSMutableArray * deletedSuggestionInfoUniqueKeys;              //@synthesize deletedSuggestionInfoUniqueKeys=_deletedSuggestionInfoUniqueKeys - In the implementation block
+(id)contextToleratingInaccessibleFaultForBackingStore:(id)arg1 ;
+(id)readOnlyContextToleratingInaccessibleFault;
-(char)trackModifiedSources:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)modifiedSourceMap;
-(char)trackModifiedCalendars:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)modifiedCalendarMap;
-(char)trackModifiedItems:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)modifiedItemMap;
-(char)trackConfirmedSuggestedEvents:(id)arg1 error:(id*)arg2 ;
-(char)trackDeletedSuggestionInfoUniqueKeys:(id)arg1 error:(id*)arg2 ;
-(char)trackModifiedNotifications:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)modifiedNotificationMap;
-(NSMutableArray *)confirmedSuggestedEvents;
-(NSMutableArray *)deletedSuggestionInfoUniqueKeys;
-(void)setModifiedSourceMap:(NSMutableDictionary *)arg1 ;
-(void)setModifiedCalendarMap:(NSMutableDictionary *)arg1 ;
-(void)setModifiedItemMap:(NSMutableDictionary *)arg1 ;
-(void)setConfirmedSuggestedEvents:(NSMutableArray *)arg1 ;
-(void)setDeletedSuggestionInfoUniqueKeys:(NSMutableArray *)arg1 ;
-(void)setModifiedNotificationMap:(NSMutableDictionary *)arg1 ;
@end

