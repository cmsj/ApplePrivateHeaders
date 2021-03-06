/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate, NSUUID;

@interface DRSEnableDataGatheringQueryMO : NSManagedObject

@property (assign,nonatomic) short attemptCount; 
@property (nonatomic,copy) NSString * build; 
@property (nonatomic,retain) NSData * contextDictionaryData; 
@property (assign,nonatomic) char isContinue; 
@property (nonatomic,copy) NSString * issueCategory; 
@property (nonatomic,copy) NSString * logType; 
@property (nonatomic,copy) NSDate * queryDate; 
@property (nonatomic,copy) NSUUID * queryID; 
@property (nonatomic,copy) NSString * rejectionReason; 
@property (assign,nonatomic) short response; 
@property (nonatomic,copy) NSString * teamID; 
+(id)fetchRequest;
@end

