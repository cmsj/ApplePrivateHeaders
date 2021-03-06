/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VNRequestCancelling.h>
#import <libobjc.A.dylib/VNTrackerProviding.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding> {

	NSLock* _requestLock;
	NSMutableArray* _requestsInFlight;
	NSMutableArray* _requestsPending;
	NSMutableDictionary* _sequencedRequestObservations;
	NSMutableSet* _trackerKeys;

}
-(void)dealloc;
-(id)init;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)releaseTracker:(id)arg1 ;
-(void)cancelAllRequests;
-(char)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2 ;
-(id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
-(id)orderedRequestsForRequests:(id)arg1 ;
-(char)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(char)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
@end

