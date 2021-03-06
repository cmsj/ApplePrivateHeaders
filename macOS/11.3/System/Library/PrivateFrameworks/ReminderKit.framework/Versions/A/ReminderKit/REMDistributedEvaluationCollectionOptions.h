/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface REMDistributedEvaluationCollectionOptions : NSObject <NSSecureCoding> {

	char _includeListNames;
	char _includeReminderTitles;
	char _includeListNameFuzzedEmbeddings;
	char _includeReminderTitleFuzzedEmbeddings;
	char _includeSystemLanguage;
	char _includeSystemTimezone;
	char _includeAccountType;
	char _includeListGroupInfo;
	char _includeReminderTitleSaltedHash;
	char _includeDates;
	char _includeDayOfWeek;
	char _includeRecurrenceInfo;
	char _includeLocationInfo;
	char _includeAttachmentUTIs;
	char _includeRemindMeWhenMessagingInfo;
	char _includeAlarmDates;
	char _includeSubtaskInfo;
	char _includeUserActivityInfo;
	char _includeIsFlagged;
	char _includePriority;
	char _relevantWordTagsIncludeOtherWord;
	char _includeReminderTitleCategoryFilteredStopWords;
	char _includeReminderTitleCategoryUniversalGrammar;
	char _includeReminderTitleCategorySentence2Vec;
	double _reminderTitleCategoryDistanceTolerance;
	NSURL* _reminderTitleCategoryEmbeddingURL;
	unsigned long long _dateResolutionInSeconds;
	unsigned long long _creationDateWithinDays;

}

@property (assign,nonatomic) char includeListNames;                                           //@synthesize includeListNames=_includeListNames - In the implementation block
@property (assign,nonatomic) char includeReminderTitles;                                      //@synthesize includeReminderTitles=_includeReminderTitles - In the implementation block
@property (assign,nonatomic) char includeListNameFuzzedEmbeddings;                            //@synthesize includeListNameFuzzedEmbeddings=_includeListNameFuzzedEmbeddings - In the implementation block
@property (assign,nonatomic) char includeReminderTitleFuzzedEmbeddings;                       //@synthesize includeReminderTitleFuzzedEmbeddings=_includeReminderTitleFuzzedEmbeddings - In the implementation block
@property (assign,nonatomic) char includeSystemLanguage;                                      //@synthesize includeSystemLanguage=_includeSystemLanguage - In the implementation block
@property (assign,nonatomic) char includeSystemTimezone;                                      //@synthesize includeSystemTimezone=_includeSystemTimezone - In the implementation block
@property (assign,nonatomic) char includeAccountType;                                         //@synthesize includeAccountType=_includeAccountType - In the implementation block
@property (assign,nonatomic) char includeListGroupInfo;                                       //@synthesize includeListGroupInfo=_includeListGroupInfo - In the implementation block
@property (assign,nonatomic) char includeReminderTitleSaltedHash;                             //@synthesize includeReminderTitleSaltedHash=_includeReminderTitleSaltedHash - In the implementation block
@property (assign,nonatomic) char includeDates;                                               //@synthesize includeDates=_includeDates - In the implementation block
@property (assign,nonatomic) char includeDayOfWeek;                                           //@synthesize includeDayOfWeek=_includeDayOfWeek - In the implementation block
@property (assign,nonatomic) char includeRecurrenceInfo;                                      //@synthesize includeRecurrenceInfo=_includeRecurrenceInfo - In the implementation block
@property (assign,nonatomic) char includeLocationInfo;                                        //@synthesize includeLocationInfo=_includeLocationInfo - In the implementation block
@property (assign,nonatomic) char includeAttachmentUTIs;                                      //@synthesize includeAttachmentUTIs=_includeAttachmentUTIs - In the implementation block
@property (assign,nonatomic) char includeRemindMeWhenMessagingInfo;                           //@synthesize includeRemindMeWhenMessagingInfo=_includeRemindMeWhenMessagingInfo - In the implementation block
@property (assign,nonatomic) char includeAlarmDates;                                          //@synthesize includeAlarmDates=_includeAlarmDates - In the implementation block
@property (assign,nonatomic) char includeSubtaskInfo;                                         //@synthesize includeSubtaskInfo=_includeSubtaskInfo - In the implementation block
@property (assign,nonatomic) char includeUserActivityInfo;                                    //@synthesize includeUserActivityInfo=_includeUserActivityInfo - In the implementation block
@property (assign,nonatomic) char includeIsFlagged;                                           //@synthesize includeIsFlagged=_includeIsFlagged - In the implementation block
@property (assign,nonatomic) char includePriority;                                            //@synthesize includePriority=_includePriority - In the implementation block
@property (assign,nonatomic) char relevantWordTagsIncludeOtherWord;                           //@synthesize relevantWordTagsIncludeOtherWord=_relevantWordTagsIncludeOtherWord - In the implementation block
@property (assign,nonatomic) char includeReminderTitleCategoryFilteredStopWords;              //@synthesize includeReminderTitleCategoryFilteredStopWords=_includeReminderTitleCategoryFilteredStopWords - In the implementation block
@property (assign,nonatomic) char includeReminderTitleCategoryUniversalGrammar;               //@synthesize includeReminderTitleCategoryUniversalGrammar=_includeReminderTitleCategoryUniversalGrammar - In the implementation block
@property (assign,nonatomic) char includeReminderTitleCategorySentence2Vec;                   //@synthesize includeReminderTitleCategorySentence2Vec=_includeReminderTitleCategorySentence2Vec - In the implementation block
@property (assign,nonatomic) double reminderTitleCategoryDistanceTolerance;                   //@synthesize reminderTitleCategoryDistanceTolerance=_reminderTitleCategoryDistanceTolerance - In the implementation block
@property (nonatomic,retain) NSURL * reminderTitleCategoryEmbeddingURL;                       //@synthesize reminderTitleCategoryEmbeddingURL=_reminderTitleCategoryEmbeddingURL - In the implementation block
@property (assign,nonatomic) unsigned long long dateResolutionInSeconds;                      //@synthesize dateResolutionInSeconds=_dateResolutionInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long creationDateWithinDays;                       //@synthesize creationDateWithinDays=_creationDateWithinDays - In the implementation block
+(char)supportsSecureCoding;
+(id)_attachmentURLFromFilenameWithKey:(id)arg1 inJSONRepresentation:(id)arg2 attachmentURLs:(id)arg3 error:(id*)arg4 ;
+(id)optionsWithDefaultValues;
+(id)optionsWithEverythingOff;
+(id)optionsFromJSONRepresentation:(id)arg1 attachmentURLs:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setIncludeListNames:(char)arg1 ;
-(void)setIncludeReminderTitles:(char)arg1 ;
-(void)setIncludeListNameFuzzedEmbeddings:(char)arg1 ;
-(void)setIncludeReminderTitleFuzzedEmbeddings:(char)arg1 ;
-(void)setIncludeSystemLanguage:(char)arg1 ;
-(void)setIncludeSystemTimezone:(char)arg1 ;
-(void)setIncludeAccountType:(char)arg1 ;
-(void)setIncludeListGroupInfo:(char)arg1 ;
-(void)setIncludeReminderTitleSaltedHash:(char)arg1 ;
-(void)setIncludeDayOfWeek:(char)arg1 ;
-(void)setIncludeDates:(char)arg1 ;
-(void)setIncludeRecurrenceInfo:(char)arg1 ;
-(void)setIncludeLocationInfo:(char)arg1 ;
-(void)setIncludeAttachmentUTIs:(char)arg1 ;
-(void)setIncludeRemindMeWhenMessagingInfo:(char)arg1 ;
-(void)setIncludeAlarmDates:(char)arg1 ;
-(void)setIncludeSubtaskInfo:(char)arg1 ;
-(void)setIncludeUserActivityInfo:(char)arg1 ;
-(void)setIncludeIsFlagged:(char)arg1 ;
-(void)setIncludePriority:(char)arg1 ;
-(void)setRelevantWordTagsIncludeOtherWord:(char)arg1 ;
-(void)setDateResolutionInSeconds:(unsigned long long)arg1 ;
-(void)setCreationDateWithinDays:(unsigned long long)arg1 ;
-(void)setReminderTitleCategoryEmbeddingURL:(NSURL *)arg1 ;
-(void)setIncludeReminderTitleCategorySentence2Vec:(char)arg1 ;
-(void)setIncludeReminderTitleCategoryUniversalGrammar:(char)arg1 ;
-(void)setIncludeReminderTitleCategoryFilteredStopWords:(char)arg1 ;
-(void)setReminderTitleCategoryDistanceTolerance:(double)arg1 ;
-(char)includeListNames;
-(char)includeListNameFuzzedEmbeddings;
-(char)includeReminderTitles;
-(char)includeReminderTitleFuzzedEmbeddings;
-(char)includeSystemLanguage;
-(char)includeSystemTimezone;
-(char)includeAccountType;
-(char)includeListGroupInfo;
-(char)includeReminderTitleSaltedHash;
-(char)includeDates;
-(char)includeRecurrenceInfo;
-(char)includeLocationInfo;
-(char)includeAttachmentUTIs;
-(char)includeRemindMeWhenMessagingInfo;
-(char)includeAlarmDates;
-(char)includeSubtaskInfo;
-(char)includeUserActivityInfo;
-(char)includeIsFlagged;
-(char)includePriority;
-(char)relevantWordTagsIncludeOtherWord;
-(char)includeReminderTitleCategoryFilteredStopWords;
-(char)includeReminderTitleCategoryUniversalGrammar;
-(char)includeReminderTitleCategorySentence2Vec;
-(unsigned long long)dateResolutionInSeconds;
-(NSURL *)reminderTitleCategoryEmbeddingURL;
-(double)reminderTitleCategoryDistanceTolerance;
-(char)includeDayOfWeek;
-(unsigned long long)creationDateWithinDays;
@end

