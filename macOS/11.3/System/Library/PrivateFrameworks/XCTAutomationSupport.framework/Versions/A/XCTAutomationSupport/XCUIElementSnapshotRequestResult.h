/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <XCTAutomationSupport/XCTCapabilitiesProviding.h>
#import <XCTAutomationSupport/XCTRuntimeIssueContextReportingDelegate.h>

@class XCElementSnapshot, NSOrderedSet, NSString;

@interface XCUIElementSnapshotRequestResult : NSObject <NSSecureCoding, XCTCapabilitiesProviding, XCTRuntimeIssueContextReportingDelegate> {

	XCElementSnapshot* _rootElementSnapshot;
	NSOrderedSet* _runtimeIssues;

}

@property (readonly) XCElementSnapshot * rootElementSnapshot;              //@synthesize rootElementSnapshot=_rootElementSnapshot - In the implementation block
@property (copy,readonly) NSOrderedSet * runtimeIssues;                    //@synthesize runtimeIssues=_runtimeIssues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(void)provideCapabilitiesToBuilder:(id)arg1 ;
+(char)shouldRuntimeIssueContext:(id)arg1 reportIssue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(XCElementSnapshot *)rootElementSnapshot;
-(NSOrderedSet *)runtimeIssues;
-(id)initWithRootElementSnapshot:(id)arg1 runtimeIssues:(id)arg2 ;
@end

