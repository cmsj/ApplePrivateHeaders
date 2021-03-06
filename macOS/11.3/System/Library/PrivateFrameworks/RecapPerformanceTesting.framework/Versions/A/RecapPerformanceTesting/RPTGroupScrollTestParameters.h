/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/Versions/A/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RPTBlockBasedScrollTestParameters.h>
#import <libobjc.A.dylib/RPTTestParameters.h>

@class NSString, NSArray;

@interface RPTGroupScrollTestParameters : NSObject <RPTBlockBasedScrollTestParameters, RPTTestParameters> {

	NSString* testName;
	/*^block*/id _completionHandler;
	NSArray* _parameters;

}

@property (nonatomic,retain) NSArray * parameters;                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * testName; 
@property (nonatomic,readonly) char managesTestStartAndEnd; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTestName:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)parameters;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setParameters:(NSArray *)arg1 ;
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
-(/*^block*/id)composerBlock;
-(void)prepareWithComposer:(id)arg1 ;
@end

