/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCDManagedObjectContext.h>

@protocol CNCDManagedObjectContext <NSObject>
@required
+(id)executeFetchRequest:(id)arg1 inContext:(id)arg2;
+(id)countForFetchRequest:(id)arg1 inContext:(id)arg2;
+(void)withContext:(id)arg1 performBlockAndWait:(/*^block*/id)arg2;
+(id)withContext:(id)arg1 resultOfBlock:(/*^block*/id)arg2;

@end


@class NSString;

@interface CNCDManagedObjectContext : NSObject <CNCDManagedObjectContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)strategyForContext:(id)arg1 ;
+(id)executeFetchRequest:(id)arg1 inContext:(id)arg2 ;
+(id)countForFetchRequest:(id)arg1 inContext:(id)arg2 ;
+(void)withContext:(id)arg1 performBlockAndWait:(/*^block*/id)arg2 ;
+(id)withContext:(id)arg1 resultOfBlock:(/*^block*/id)arg2 ;
@end

