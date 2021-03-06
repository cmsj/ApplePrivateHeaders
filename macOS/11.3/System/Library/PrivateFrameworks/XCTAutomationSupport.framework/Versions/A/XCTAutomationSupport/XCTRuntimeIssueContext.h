/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class XCTCapabilities, NSMutableOrderedSet, NSOrderedSet;

@interface XCTRuntimeIssueContext : NSObject {

	XCTCapabilities* _capabilities;
	Class _reportingDelegate;
	NSMutableOrderedSet* _mutableRuntimeIssues;

}

@property (retain) NSMutableOrderedSet * mutableRuntimeIssues;              //@synthesize mutableRuntimeIssues=_mutableRuntimeIssues - In the implementation block
@property (copy,readonly) XCTCapabilities * capabilities;                   //@synthesize capabilities=_capabilities - In the implementation block
@property (__weak,readonly) Class reportingDelegate;                        //@synthesize reportingDelegate=_reportingDelegate - In the implementation block
@property (copy,readonly) NSOrderedSet * runtimeIssues; 
+(id)currentContext;
+(void)reportRuntimeIssue:(id)arg1 ;
+(void)captureIssuesWithContext:(id)arg1 inScope:(/*^block*/id)arg2 ;
+(void)reportRuntimeIssues:(id)arg1 ;
+(id)aggregationOfRuntimeIssues:(id)arg1 ;
-(id)init;
-(XCTCapabilities *)capabilities;
-(void)reportRuntimeIssue:(id)arg1 ;
-(id)initWithCapabilities:(id)arg1 reportingDelegate:(Class)arg2 ;
-(NSOrderedSet *)runtimeIssues;
-(Class)reportingDelegate;
-(NSMutableOrderedSet *)mutableRuntimeIssues;
-(void)setMutableRuntimeIssues:(NSMutableOrderedSet *)arg1 ;
@end

