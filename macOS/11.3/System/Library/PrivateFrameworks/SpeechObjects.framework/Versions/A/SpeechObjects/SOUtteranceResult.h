/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SOUtteranceResult : NSObject {

	NSString* _type;
	double _startTime;
	double _endTime;
	NSString* _text;
	NSArray* _textVariants;
	NSString* _commandIdentifier;
	double _prependedSilenceDuration;
	NSString* _audioFilePath;
	double _creationDate;

}

@property (retain) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (assign) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (retain) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (retain) NSArray * textVariants;                       //@synthesize textVariants=_textVariants - In the implementation block
@property (retain) NSString * commandIdentifier;                 //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (assign) double prependedSilenceDuration;              //@synthesize prependedSilenceDuration=_prependedSilenceDuration - In the implementation block
@property (retain) NSString * audioFilePath;                     //@synthesize audioFilePath=_audioFilePath - In the implementation block
@property (assign) double creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)_dictionary;
-(double)creationDate;
-(NSString *)text;
-(void)setCreationDate:(double)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(id)_initWithDictionary:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)commandIdentifier;
-(void)setCommandIdentifier:(NSString *)arg1 ;
-(void)setAudioFilePath:(NSString *)arg1 ;
-(NSString *)audioFilePath;
-(void)setTextVariants:(NSArray *)arg1 ;
-(id)initWithType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 text:(id)arg4 textVariants:(id)arg5 commandIdentifier:(id)arg6 ;
-(void)setPrependedSilenceDuration:(double)arg1 ;
-(void)_normalizeTimesAgainstTimeInterval:(double)arg1 ;
-(NSArray *)textVariants;
-(double)prependedSilenceDuration;
@end

