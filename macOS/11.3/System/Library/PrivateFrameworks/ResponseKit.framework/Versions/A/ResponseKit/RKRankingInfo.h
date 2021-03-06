/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface RKRankingInfo : NSManagedObject

@property (assign,nonatomic) long long responseId; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSString * response; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * recipientId; 
@property (assign,nonatomic) unsigned long long source; 
@property (assign,nonatomic) unsigned long long inputMethod; 
@property (nonatomic,retain) NSString * rankedList; 
@property (nonatomic,retain) NSDate * timestamp; 
@end

