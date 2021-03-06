/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/Versions/A/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PREResponsesMetricsProtocol.h>

@protocol PREResponsesTrialProtocol;
@class PETEventTracker2, NSObject, NSString;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol> {

	PETEventTracker2* _tracker;
	NSObject*<PREResponsesTrialProtocol> _trial;
	char _isApricotDevice;
	NSString* _processName;

}
-(id)tracker;
-(char)isApricotDevice;
-(void)registerResponsesGenerated:(id)arg1 ;
-(void)registerResponseTapped:(id)arg1 ;
-(void)registerResponseViewed:(id)arg1 ;
-(id)initWithTrial:(id)arg1 ;
-(id)initWithTracker:(id)arg1 trial:(id)arg2 ;
-(id)_responseListFromGeneratedEvent:(id)arg1 ;
@end

