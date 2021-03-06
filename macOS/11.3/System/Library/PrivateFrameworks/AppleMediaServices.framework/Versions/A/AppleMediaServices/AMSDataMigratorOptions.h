/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface AMSDataMigratorOptions : NSObject {

	NSString* _currentBuildVersion;
	NSString* _previousBuildVersion;
	unsigned long long _scenario;

}

@property (copy) NSString * currentBuildVersion;               //@synthesize currentBuildVersion=_currentBuildVersion - In the implementation block
@property (readonly) NSArray * optionsArray; 
@property (copy) NSString * previousBuildVersion;              //@synthesize previousBuildVersion=_previousBuildVersion - In the implementation block
@property (assign) unsigned long long scenario;                //@synthesize scenario=_scenario - In the implementation block
+(id)_stringFromOptionsArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)scenario;
-(NSString *)currentBuildVersion;
-(NSString *)previousBuildVersion;
-(id)initWithOptionsArray:(id)arg1 ;
-(NSArray *)optionsArray;
-(void)setCurrentBuildVersion:(NSString *)arg1 ;
-(void)setPreviousBuildVersion:(NSString *)arg1 ;
-(void)setScenario:(unsigned long long)arg1 ;
@end

