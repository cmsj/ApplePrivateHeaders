/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/Versions/A/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RecapPerformanceTesting/RecapPerformanceTesting-Structs.h>
#import <libobjc.A.dylib/_RPTCoordinateSpaces.h>
#import <libobjc.A.dylib/RPTTestParameters.h>

@class RPTCoordinateSpaceConverter, NSString;

@interface RPTPagingScrollTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters> {

	char _useFlicks;
	RPTCoordinateSpaceConverter* _conversion;
	NSString* _testName;
	/*^block*/id _completionHandler;
	unsigned long long _iterations;
	double _amplitude;
	long long _direction;
	double _iterationDuration;
	CGRect _scrollingBounds;

}

@property (assign,nonatomic) unsigned long long iterations;                         //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) CGRect scrollingBounds;                                //@synthesize scrollingBounds=_scrollingBounds - In the implementation block
@property (assign,nonatomic) double amplitude;                                      //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) long long direction;                                   //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double iterationDuration;                              //@synthesize iterationDuration=_iterationDuration - In the implementation block
@property (assign,nonatomic) char useFlicks;                                        //@synthesize useFlicks=_useFlicks - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) RPTCoordinateSpaceConverter * conversion;              //@synthesize conversion=_conversion - In the implementation block
@property (nonatomic,copy) NSString * testName;                                     //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) char managesTestStartAndEnd; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)direction;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDirection:(long long)arg1 ;
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
-(NSString *)testName;
-(unsigned long long)iterations;
-(void)setIterations:(unsigned long long)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(RPTCoordinateSpaceConverter *)conversion;
-(void)setConversion:(RPTCoordinateSpaceConverter *)arg1 ;
-(/*^block*/id)composerBlock;
-(void)prepareWithComposer:(id)arg1 ;
-(void)setScrollingBounds:(CGRect)arg1 ;
-(CGRect)scrollingBounds;
-(double)iterationDuration;
-(void)scrollWithComposer:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 duration:(double)arg4 ;
-(void)setIterationDuration:(double)arg1 ;
-(pair<CGPoint, CGPoint>)initialAndFinalPositions;
-(char)useFlicks;
-(id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 iterationDuration:(double)arg6 useFlicks:(char)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)setUseFlicks:(char)arg1 ;
@end

