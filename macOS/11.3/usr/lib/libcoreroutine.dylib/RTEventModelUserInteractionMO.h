/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate;

@interface RTEventModelUserInteractionMO : NSManagedObject

@property (nonatomic,copy) NSString * feedback; 
@property (nonatomic,retain) NSNumber * interaction; 
@property (nonatomic,copy) NSString * locationOfInterestIdentifier; 
@property (nonatomic,copy) NSDate * date; 
+(id)managedObjectWithFeedback:(id)arg1 interaction:(id)arg2 locationOfInterestIdentifier:(id)arg3 date:(id)arg4 inManagedObjectContext:(id)arg5 ;
@end

