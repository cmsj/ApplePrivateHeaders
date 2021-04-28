/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {

	NSMapTable* _requestToObservationClassMap;

}
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(id)initWithSubrequestsAndUniqueObservationClasses:(id)arg1 ;
-(id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2 ;
-(id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2 ;
@end
