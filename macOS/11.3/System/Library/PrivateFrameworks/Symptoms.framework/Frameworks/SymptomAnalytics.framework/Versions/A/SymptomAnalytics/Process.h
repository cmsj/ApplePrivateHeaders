/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/Versions/A/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSSet, LiveUsage;

@interface Process : NSManagedObject

@property (nonatomic,copy) NSString * bundleName; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * procName; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLiveUsage; 
@property (nonatomic,retain) LiveUsage * hintLiveUsage; 
+(id)entityName;
+(id)fetchRequest;
@end
