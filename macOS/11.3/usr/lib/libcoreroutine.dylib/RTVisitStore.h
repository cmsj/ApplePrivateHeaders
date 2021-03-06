/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTStore.h>
#import <libobjc.A.dylib/RTEnumerableStore.h>

@class NSString;

@interface RTVisitStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchRequestFromOptions:(id)arg1 offset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_fetchVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_storeVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_purgeVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)purgeVisitsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

