/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString, NSMutableArray;

@interface RKText : NSObject {

	char _trainVerbatim;
	NSString* _string;
	NSString* _languageID;
	double _trainingWeight;
	NSMutableArray* _annotations;
	NSString* _processedText;

}

@property (retain) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (retain) NSString * languageID;                     //@synthesize languageID=_languageID - In the implementation block
@property (assign) double trainingWeight;                     //@synthesize trainingWeight=_trainingWeight - In the implementation block
@property (assign) char trainVerbatim;                        //@synthesize trainVerbatim=_trainVerbatim - In the implementation block
@property (retain) NSMutableArray * annotations;              //@synthesize annotations=_annotations - In the implementation block
@property (retain) NSString * processedText;                  //@synthesize processedText=_processedText - In the implementation block
+(void)initialize;
+(id)annotationNameFromType:(unsigned long long)arg1 ;
+(id)defaultDataProvider;
+(unsigned long long)annotationTypeFromName:(id)arg1 ;
+(id)polarityNameFromType:(unsigned long long)arg1 ;
+(unsigned long long)polarityTypeFromName:(id)arg1 ;
-(id)init;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSMutableArray *)annotations;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(NSString *)languageID;
-(void)setLanguageID:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 ;
-(void)annotateRange:(NSRange)arg1 type:(unsigned long long)arg2 ;
-(void)enumerateAnnotationsInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(char)arg4 ;
-(void)annotateRange:(NSRange)arg1 type:(unsigned long long)arg2 machineGenerated:(char)arg3 ;
-(void)setProcessedText:(NSString *)arg1 ;
-(id)taggedText;
-(double)trainingWeight;
-(char)trainVerbatim;
-(id)subTextWithRange:(NSRange)arg1 ;
-(NSString *)processedText;
-(char)cleanupData;
-(id)subTextsByPolarity;
-(unsigned long long)annotatedPolarity;
-(id)lsmText;
-(void)setTrainingWeight:(double)arg1 ;
-(void)setTrainVerbatim:(char)arg1 ;
@end

