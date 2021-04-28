/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2NLEventInBanner : PBCodable <NSCopying> {

	int _actionType;
	NSString* _addedAttendeesCount;
	NSString* _calendarAppUsageLevel;
	unsigned _confidenceScore;
	int _dateAdj;
	unsigned _daysFromStartDate;
	int _duraAdj;
	NSString* _eventType;
	int _extractionLevel;
	int _interface;
	NSString* _key;
	NSString* _languageID;
	int _locationAdj;
	int _mailAppUsageLevel;
	int _messagesAppUsageLevel;
	unsigned _participantCount;
	int _significantSender;
	int _titleAdj;
	int _titleSource;
	unsigned _usedBubblesCount;
	SCD_Struct_SG10 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasInterface; 
@property (assign,nonatomic) int interface;                                 //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic) char hasActionType; 
@property (assign,nonatomic) int actionType;                                //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) char hasEventType; 
@property (nonatomic,retain) NSString * eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) char hasLanguageID; 
@property (nonatomic,retain) NSString * languageID;                         //@synthesize languageID=_languageID - In the implementation block
@property (assign,nonatomic) char hasDaysFromStartDate; 
@property (assign,nonatomic) unsigned daysFromStartDate;                    //@synthesize daysFromStartDate=_daysFromStartDate - In the implementation block
@property (assign,nonatomic) char hasConfidenceScore; 
@property (assign,nonatomic) unsigned confidenceScore;                      //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (assign,nonatomic) char hasSignificantSender; 
@property (assign,nonatomic) int significantSender;                         //@synthesize significantSender=_significantSender - In the implementation block
@property (assign,nonatomic) char hasParticipantCount; 
@property (assign,nonatomic) unsigned participantCount;                     //@synthesize participantCount=_participantCount - In the implementation block
@property (assign,nonatomic) char hasExtractionLevel; 
@property (assign,nonatomic) int extractionLevel;                           //@synthesize extractionLevel=_extractionLevel - In the implementation block
@property (assign,nonatomic) char hasUsedBubblesCount; 
@property (assign,nonatomic) unsigned usedBubblesCount;                     //@synthesize usedBubblesCount=_usedBubblesCount - In the implementation block
@property (assign,nonatomic) char hasTitleSource; 
@property (assign,nonatomic) int titleSource;                               //@synthesize titleSource=_titleSource - In the implementation block
@property (assign,nonatomic) char hasTitleAdj; 
@property (assign,nonatomic) int titleAdj;                                  //@synthesize titleAdj=_titleAdj - In the implementation block
@property (assign,nonatomic) char hasDateAdj; 
@property (assign,nonatomic) int dateAdj;                                   //@synthesize dateAdj=_dateAdj - In the implementation block
@property (assign,nonatomic) char hasDuraAdj; 
@property (assign,nonatomic) int duraAdj;                                   //@synthesize duraAdj=_duraAdj - In the implementation block
@property (assign,nonatomic) char hasLocationAdj; 
@property (assign,nonatomic) int locationAdj;                               //@synthesize locationAdj=_locationAdj - In the implementation block
@property (nonatomic,readonly) char hasAddedAttendeesCount; 
@property (nonatomic,retain) NSString * addedAttendeesCount;                //@synthesize addedAttendeesCount=_addedAttendeesCount - In the implementation block
@property (nonatomic,readonly) char hasCalendarAppUsageLevel; 
@property (nonatomic,retain) NSString * calendarAppUsageLevel;              //@synthesize calendarAppUsageLevel=_calendarAppUsageLevel - In the implementation block
@property (assign,nonatomic) char hasMailAppUsageLevel; 
@property (assign,nonatomic) int mailAppUsageLevel;                         //@synthesize mailAppUsageLevel=_mailAppUsageLevel - In the implementation block
@property (assign,nonatomic) char hasMessagesAppUsageLevel; 
@property (assign,nonatomic) int messagesAppUsageLevel;                     //@synthesize messagesAppUsageLevel=_messagesAppUsageLevel - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)eventType;
-(int)interface;
-(void)setInterface:(int)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(unsigned)participantCount;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setHasActionType:(char)arg1 ;
-(char)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(char)hasKey;
-(char)hasEventType;
-(void)setConfidenceScore:(unsigned)arg1 ;
-(unsigned)confidenceScore;
-(void)setHasConfidenceScore:(char)arg1 ;
-(char)hasConfidenceScore;
-(NSString *)languageID;
-(void)setLanguageID:(NSString *)arg1 ;
-(void)setHasInterface:(char)arg1 ;
-(char)hasInterface;
-(id)interfaceAsString:(int)arg1 ;
-(int)StringAsInterface:(id)arg1 ;
-(int)titleAdj;
-(void)setTitleAdj:(int)arg1 ;
-(void)setHasTitleAdj:(char)arg1 ;
-(char)hasTitleAdj;
-(id)titleAdjAsString:(int)arg1 ;
-(int)StringAsTitleAdj:(id)arg1 ;
-(int)dateAdj;
-(void)setDateAdj:(int)arg1 ;
-(void)setHasDateAdj:(char)arg1 ;
-(char)hasDateAdj;
-(id)dateAdjAsString:(int)arg1 ;
-(int)StringAsDateAdj:(id)arg1 ;
-(int)duraAdj;
-(void)setDuraAdj:(int)arg1 ;
-(void)setHasDuraAdj:(char)arg1 ;
-(char)hasDuraAdj;
-(id)duraAdjAsString:(int)arg1 ;
-(int)StringAsDuraAdj:(id)arg1 ;
-(char)hasLanguageID;
-(void)setDaysFromStartDate:(unsigned)arg1 ;
-(void)setHasDaysFromStartDate:(char)arg1 ;
-(char)hasDaysFromStartDate;
-(int)significantSender;
-(void)setSignificantSender:(int)arg1 ;
-(void)setHasSignificantSender:(char)arg1 ;
-(char)hasSignificantSender;
-(id)significantSenderAsString:(int)arg1 ;
-(int)StringAsSignificantSender:(id)arg1 ;
-(void)setParticipantCount:(unsigned)arg1 ;
-(void)setHasParticipantCount:(char)arg1 ;
-(char)hasParticipantCount;
-(int)extractionLevel;
-(void)setExtractionLevel:(int)arg1 ;
-(void)setHasExtractionLevel:(char)arg1 ;
-(char)hasExtractionLevel;
-(id)extractionLevelAsString:(int)arg1 ;
-(int)StringAsExtractionLevel:(id)arg1 ;
-(void)setUsedBubblesCount:(unsigned)arg1 ;
-(void)setHasUsedBubblesCount:(char)arg1 ;
-(char)hasUsedBubblesCount;
-(int)titleSource;
-(void)setTitleSource:(int)arg1 ;
-(void)setHasTitleSource:(char)arg1 ;
-(char)hasTitleSource;
-(id)titleSourceAsString:(int)arg1 ;
-(int)StringAsTitleSource:(id)arg1 ;
-(int)locationAdj;
-(void)setLocationAdj:(int)arg1 ;
-(void)setHasLocationAdj:(char)arg1 ;
-(char)hasLocationAdj;
-(id)locationAdjAsString:(int)arg1 ;
-(int)StringAsLocationAdj:(id)arg1 ;
-(char)hasAddedAttendeesCount;
-(char)hasCalendarAppUsageLevel;
-(int)mailAppUsageLevel;
-(void)setMailAppUsageLevel:(int)arg1 ;
-(void)setHasMailAppUsageLevel:(char)arg1 ;
-(char)hasMailAppUsageLevel;
-(id)mailAppUsageLevelAsString:(int)arg1 ;
-(int)StringAsMailAppUsageLevel:(id)arg1 ;
-(int)messagesAppUsageLevel;
-(void)setMessagesAppUsageLevel:(int)arg1 ;
-(void)setHasMessagesAppUsageLevel:(char)arg1 ;
-(char)hasMessagesAppUsageLevel;
-(id)messagesAppUsageLevelAsString:(int)arg1 ;
-(int)StringAsMessagesAppUsageLevel:(id)arg1 ;
-(unsigned)daysFromStartDate;
-(unsigned)usedBubblesCount;
-(NSString *)addedAttendeesCount;
-(void)setAddedAttendeesCount:(NSString *)arg1 ;
-(NSString *)calendarAppUsageLevel;
-(void)setCalendarAppUsageLevel:(NSString *)arg1 ;
@end
