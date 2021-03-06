/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSDate, RTLearnedVisitMO, NSNumber;

@interface RTLearnedTransitionMO : RTCloudManagedObject

@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * stopDate; 
@property (nonatomic,retain) RTLearnedVisitMO * origin; 
@property (nonatomic,retain) RTLearnedVisitMO * destination; 
@property (nonatomic,copy) NSNumber * predominantMotionActivityType; 
+(id)fetchRequest;
+(id)managedObjectWithTransition:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithTransition:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

