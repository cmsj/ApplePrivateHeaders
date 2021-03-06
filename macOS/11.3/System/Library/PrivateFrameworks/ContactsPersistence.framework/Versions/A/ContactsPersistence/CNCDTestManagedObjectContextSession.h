/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface CNCDTestManagedObjectContextSession : NSObject {

	NSManagedObjectContext* _context;

}

@property (readonly) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(NSManagedObjectContext *)context;
-(id)executeFetchRequest:(id)arg1 ;
-(id)insertPhoneNumberWithConfiguration:(/*^block*/id)arg1 ;
-(id)fetchContactsMatchingPredicate:(id)arg1 ;
-(id)fetchGroupsMatchingPredicate:(id)arg1 ;
-(id)fetchContainersMatchingPredicate:(id)arg1 ;
-(id)fetchInfosMatchingPredicate:(id)arg1 ;
-(id)insertContactIntoStore:(id)arg1 configuration:(/*^block*/id)arg2 ;
-(id)insertGroupIntoStore:(id)arg1 configuration:(/*^block*/id)arg2 ;
-(id)insertContainerIntoStore:(id)arg1 configuration:(/*^block*/id)arg2 ;
-(id)insertInfoIntoStore:(id)arg1 configuration:(/*^block*/id)arg2 ;
-(id)updateContact:(id)arg1 byAddingPhoneNumberWithConfiguration:(/*^block*/id)arg2 ;
@end

