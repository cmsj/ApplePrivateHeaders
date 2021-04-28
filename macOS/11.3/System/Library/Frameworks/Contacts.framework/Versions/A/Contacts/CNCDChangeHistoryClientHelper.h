/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface CNCDChangeHistoryClientHelper : NSObject {

	NSManagedObjectContext* _context;

}

@property (nonatomic,readonly) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
+(char)contextHasPersistentStores:(id)arg1 ;
-(NSManagedObjectContext *)context;
-(id)save;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(id)clientWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)insertNewClientWithIdentifier:(id)arg1 ;
-(id)updateClientWithIdentifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end
