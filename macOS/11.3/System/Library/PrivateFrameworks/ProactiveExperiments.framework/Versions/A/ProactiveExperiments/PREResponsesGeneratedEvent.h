/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/Versions/A/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PREResponsesGeneratedEvent : NSObject {

	char _isCached;
	char _hasQuestionMark;
	int _generationStatus;
	NSArray* _responses;
	NSString* _language;
	NSString* _locale;
	unsigned long long _responseTimePerf;
	unsigned long long _messageCharCount;
	unsigned long long _responseGenerationTime;

}

@property (nonatomic,retain) NSArray * responses;                                    //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSString * language;                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * locale;                                      //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) char isCached;                                          //@synthesize isCached=_isCached - In the implementation block
@property (assign,nonatomic) unsigned long long responseTimePerf;                    //@synthesize responseTimePerf=_responseTimePerf - In the implementation block
@property (assign,nonatomic) unsigned long long messageCharCount;                    //@synthesize messageCharCount=_messageCharCount - In the implementation block
@property (assign,nonatomic) char hasQuestionMark;                                   //@synthesize hasQuestionMark=_hasQuestionMark - In the implementation block
@property (assign,nonatomic) unsigned long long responseGenerationTime;              //@synthesize responseGenerationTime=_responseGenerationTime - In the implementation block
@property (assign,nonatomic) int generationStatus;                                   //@synthesize generationStatus=_generationStatus - In the implementation block
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(char)isCached;
-(void)setIsCached:(char)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(int)generationStatus;
-(void)setGenerationStatus:(int)arg1 ;
-(void)setHasQuestionMark:(char)arg1 ;
-(char)hasQuestionMark;
-(void)setResponseTimePerf:(unsigned long long)arg1 ;
-(unsigned long long)responseTimePerf;
-(unsigned long long)messageCharCount;
-(void)setMessageCharCount:(unsigned long long)arg1 ;
-(unsigned long long)responseGenerationTime;
-(void)setResponseGenerationTime:(unsigned long long)arg1 ;
@end
