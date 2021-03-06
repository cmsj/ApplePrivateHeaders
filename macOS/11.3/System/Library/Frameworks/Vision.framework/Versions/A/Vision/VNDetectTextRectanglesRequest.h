/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@class NSString;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (assign,nonatomic) unsigned long long algorithm; 
@property (assign,nonatomic) unsigned long long minimumCharacterPixelHeight; 
@property (assign,nonatomic) char detectDiacritics; 
@property (assign,nonatomic) char minimizeFalseDetections; 
@property (nonatomic,copy) NSString * textRecognition; 
@property (assign,nonatomic) char reportCharacterBoxes; 
+(void)initialize;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(unsigned long long)algorithm;
-(char)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(char)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)reportCharacterBoxes;
-(void)setReportCharacterBoxes:(char)arg1 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(unsigned long long)minimumCharacterPixelHeight;
-(void)setMinimumCharacterPixelHeight:(unsigned long long)arg1 ;
-(char)detectDiacritics;
-(void)setDetectDiacritics:(char)arg1 ;
-(char)minimizeFalseDetections;
-(void)setMinimizeFalseDetections:(char)arg1 ;
-(NSString *)textRecognition;
-(void)setTextRecognition:(NSString *)arg1 ;
-(char)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
@end

