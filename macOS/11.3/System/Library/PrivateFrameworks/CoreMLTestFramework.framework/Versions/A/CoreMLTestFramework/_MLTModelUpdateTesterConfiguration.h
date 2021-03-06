/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMLTestFramework.framework/Versions/A/CoreMLTestFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _MLTLogger, _MLTModelUpdateValidator;

@interface _MLTModelUpdateTesterConfiguration : NSObject {

	char _calculateValidationAccuracyEveryEpochEnd;
	NSString* _updateableModelPath;
	NSString* _recipePath;
	long long _computeUnit;
	_MLTLogger* _logger;
	_MLTModelUpdateValidator* _validator;

}

@property (retain) NSString * updateableModelPath;                             //@synthesize updateableModelPath=_updateableModelPath - In the implementation block
@property (retain) NSString * recipePath;                                      //@synthesize recipePath=_recipePath - In the implementation block
@property (assign) long long computeUnit;                                      //@synthesize computeUnit=_computeUnit - In the implementation block
@property (retain) _MLTLogger * logger;                                        //@synthesize logger=_logger - In the implementation block
@property (retain) _MLTModelUpdateValidator * validator;                       //@synthesize validator=_validator - In the implementation block
@property (assign) char calculateValidationAccuracyEveryEpochEnd;              //@synthesize calculateValidationAccuracyEveryEpochEnd=_calculateValidationAccuracyEveryEpochEnd - In the implementation block
-(id)init;
-(_MLTLogger *)logger;
-(void)setValidator:(_MLTModelUpdateValidator *)arg1 ;
-(_MLTModelUpdateValidator *)validator;
-(void)setLogger:(_MLTLogger *)arg1 ;
-(long long)computeUnit;
-(void)setComputeUnit:(long long)arg1 ;
-(NSString *)updateableModelPath;
-(void)setUpdateableModelPath:(NSString *)arg1 ;
-(NSString *)recipePath;
-(void)setRecipePath:(NSString *)arg1 ;
-(char)calculateValidationAccuracyEveryEpochEnd;
-(void)setCalculateValidationAccuracyEveryEpochEnd:(char)arg1 ;
@end

