/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/Versions/A/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface BMItemMO : NSManagedObject

@property (assign,nonatomic) long long absoluteSupport; 
@property (nonatomic,copy) NSString * normalizedValue; 
@property (nonatomic,copy) NSString * typeIdentifier; 
@property (nonatomic,copy) NSString * uniformIdentifier; 
@property (nonatomic,retain) NSSet * antecedentOfRules; 
@property (nonatomic,retain) NSSet * consequentOfRules; 
+(id)fetchRequest;
@end

