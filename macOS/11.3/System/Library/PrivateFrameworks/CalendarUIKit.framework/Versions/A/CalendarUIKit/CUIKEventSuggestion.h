/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKEvent, NSMutableSet, NSString, NSDate, NSTimeZone, EKStructuredLocation, EKCalendar, NSArray, NSURL, EKSuggestedEventInfo, NSData;

@interface CUIKEventSuggestion : NSObject <NSCopying> {

	char _isZKWSuggestion;
	char _wasTimeDetected;
	char _allDay;
	EKEvent* _referenceEvent;
	NSMutableSet* _additionalReferenceEvents;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSTimeZone* _endTimeZone;
	NSString* _location;
	EKStructuredLocation* _structuredLocation;
	EKStructuredLocation* _endLocation;
	NSString* _notes;
	EKCalendar* _calendar;
	NSArray* _attendees;
	NSURL* _URL;
	long long _privacyLevel;
	long long _availability;
	EKSuggestedEventInfo* _suggestionInfo;
	NSData* _localStructuredData;
	NSArray* _attachments;
	NSArray* _alarms;
	NSArray* _recurrenceRules;
	EKEvent* _cachedEventFromSuggestion;

}

@property (retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                       //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;                                  //@synthesize timeZone=_timeZone - In the implementation block
@property (retain) NSTimeZone * endTimeZone;                               //@synthesize endTimeZone=_endTimeZone - In the implementation block
@property (assign) char allDay;                                            //@synthesize allDay=_allDay - In the implementation block
@property (retain) NSString * location;                                    //@synthesize location=_location - In the implementation block
@property (retain) EKStructuredLocation * structuredLocation;              //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (retain) EKStructuredLocation * endLocation;                     //@synthesize endLocation=_endLocation - In the implementation block
@property (retain) NSString * notes;                                       //@synthesize notes=_notes - In the implementation block
@property (retain) EKCalendar * calendar;                                  //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSArray * attendees;                                    //@synthesize attendees=_attendees - In the implementation block
@property (retain) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (assign) long long privacyLevel;                                 //@synthesize privacyLevel=_privacyLevel - In the implementation block
@property (assign) long long availability;                                 //@synthesize availability=_availability - In the implementation block
@property (retain) EKSuggestedEventInfo * suggestionInfo;                  //@synthesize suggestionInfo=_suggestionInfo - In the implementation block
@property (retain) NSData * localStructuredData;                           //@synthesize localStructuredData=_localStructuredData - In the implementation block
@property (retain) NSArray * attachments;                                  //@synthesize attachments=_attachments - In the implementation block
@property (retain) NSArray * alarms;                                       //@synthesize alarms=_alarms - In the implementation block
@property (retain) NSArray * recurrenceRules;                              //@synthesize recurrenceRules=_recurrenceRules - In the implementation block
@property (retain) EKEvent * cachedEventFromSuggestion;                    //@synthesize cachedEventFromSuggestion=_cachedEventFromSuggestion - In the implementation block
@property (retain) EKEvent * referenceEvent;                               //@synthesize referenceEvent=_referenceEvent - In the implementation block
@property (retain) NSMutableSet * additionalReferenceEvents;               //@synthesize additionalReferenceEvents=_additionalReferenceEvents - In the implementation block
@property (assign) char isZKWSuggestion;                                   //@synthesize isZKWSuggestion=_isZKWSuggestion - In the implementation block
@property (assign) char wasTimeDetected;                                   //@synthesize wasTimeDetected=_wasTimeDetected - In the implementation block
+(id)allProperties;
+(id)similarityPropertiesConsideringTimeProperties:(char)arg1 ;
+(id)propertiesForEquality;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)location;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(EKStructuredLocation *)endLocation;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setAllDay:(char)arg1 ;
-(char)allDay;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)notes;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(EKSuggestedEventInfo *)suggestionInfo;
-(EKStructuredLocation *)structuredLocation;
-(NSArray *)alarms;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setAlarms:(NSArray *)arg1 ;
-(void)setEndTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)endTimeZone;
-(void)setSuggestionInfo:(EKSuggestedEventInfo *)arg1 ;
-(void)setEndLocation:(EKStructuredLocation *)arg1 ;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(NSData *)localStructuredData;
-(NSArray *)recurrenceRules;
-(void)setRecurrenceRules:(NSArray *)arg1 ;
-(void)setLocalStructuredData:(NSData *)arg1 ;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(id)eventFromSuggestion;
-(EKEvent *)referenceEvent;
-(NSMutableSet *)additionalReferenceEvents;
-(void)setIsZKWSuggestion:(char)arg1 ;
-(char)isDifferentEnoughFromInitialEvent:(id)arg1 consideringTimeProperties:(char)arg2 ;
-(void)setReferenceEvent:(EKEvent *)arg1 ;
-(EKEvent *)cachedEventFromSuggestion;
-(id)_attendeesForSuggestedEventFromAttendees:(id)arg1 ;
-(void)setCachedEventFromSuggestion:(EKEvent *)arg1 ;
-(void)setAdditionalReferenceEvents:(NSMutableSet *)arg1 ;
-(char)isZKWSuggestion;
-(char)wasTimeDetected;
-(void)setWasTimeDetected:(char)arg1 ;
@end
