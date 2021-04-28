/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {

	NSArray* _requirements;
	NSPredicate* _predicateForEventsRequiredToBeTombstoned;
	NSPredicate* _eventPredicateForEventsRequiredToBeTombstoned;
	NSArray* _propertiesToFetchForTombstones;

}

@property (nonatomic,readonly) NSArray * requirements; 
@property (nonatomic,readonly) NSPredicate * predicateForEventsRequiredToBeTombstoned; 
@property (nonatomic,readonly) NSArray * propertiesToFetchForTombstones; 
+(id)defaultPolicy;
-(id)init;
-(id)initWithRequirements:(id)arg1 ;
-(NSArray *)requirements;
-(NSPredicate *)predicateForEventsRequiredToBeTombstoned;
-(NSArray *)propertiesToFetchForTombstones;
-(id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
@end
