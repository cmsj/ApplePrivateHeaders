/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CNCDContactFetcherPredicateEvaluationContext <NSObject>
@property (readonly) NSArray * accountContainers; 
@property (readonly) NSArray * exchangeAccountContainers; 
@property (readonly) NSObject*<OS_os_log> os_log; 
@required
-(NSObject*<OS_os_log>)os_log;
-(NSArray *)accountContainers;
-(id)storesForContainers:(id)arg1;
-(NSArray *)exchangeAccountContainers;
-(id)fetchRequestWithPredicate:(id)arg1;

@end

