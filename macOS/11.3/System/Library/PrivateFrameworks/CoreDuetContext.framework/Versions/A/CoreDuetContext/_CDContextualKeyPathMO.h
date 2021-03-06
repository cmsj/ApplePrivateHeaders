/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/Versions/A/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData;

@interface _CDContextualKeyPathMO : NSManagedObject

@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSString * deviceIDString; 
@property (assign,nonatomic) char isUserCentric; 
@property (assign,nonatomic) char isEphemeral; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
@property (nonatomic,retain) NSData * value; 
@property (nonatomic,retain) NSDate * creationDate; 
+(void)hydrateMO:(id)arg1 fromKeyPath:(id)arg2 andValue:(id)arg3 ;
+(id)materializedKeyPathFrom:(id)arg1 ;
+(id)materializedContextValueFrom:(id)arg1 ;
@end

