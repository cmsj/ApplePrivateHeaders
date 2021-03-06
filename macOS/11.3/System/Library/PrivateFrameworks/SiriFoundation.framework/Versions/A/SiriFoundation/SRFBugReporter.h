/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriFoundation.framework/Versions/A/SiriFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SDRDiagnosticReporter;

@interface SRFBugReporter : NSObject {

	SDRDiagnosticReporter* _diagnosticReporter;

}

@property (retain) SDRDiagnosticReporter * diagnosticReporter;              //@synthesize diagnosticReporter=_diagnosticReporter - In the implementation block
+(id)sharedReporter;
-(id)init;
-(void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(SDRDiagnosticReporter *)diagnosticReporter;
-(void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 ;
-(void)setDiagnosticReporter:(SDRDiagnosticReporter *)arg1 ;
@end

