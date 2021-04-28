/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNSaveRequest, CNCDPersistenceContext, NSManagedObjectContext, CNCDRecordSaveCache;

@interface CNCDSaveContext : NSObject {

	CNSaveRequest* _saveRequest;
	CNCDPersistenceContext* _persistenceContext;
	NSManagedObjectContext* _context;
	CNCDRecordSaveCache* _contactCache;
	CNCDRecordSaveCache* _groupCache;

}

@property (readonly) CNSaveRequest * saveRequest;                              //@synthesize saveRequest=_saveRequest - In the implementation block
@property (readonly) CNCDPersistenceContext * persistenceContext;              //@synthesize persistenceContext=_persistenceContext - In the implementation block
@property (readonly) NSManagedObjectContext * context;                         //@synthesize context=_context - In the implementation block
@property (readonly) CNCDRecordSaveCache * contactCache;                       //@synthesize contactCache=_contactCache - In the implementation block
@property (readonly) CNCDRecordSaveCache * groupCache;                         //@synthesize groupCache=_groupCache - In the implementation block
-(NSManagedObjectContext *)context;
-(CNCDPersistenceContext *)persistenceContext;
-(CNSaveRequest *)saveRequest;
-(CNCDRecordSaveCache *)contactCache;
-(CNCDRecordSaveCache *)groupCache;
-(id)initWithSaveRequest:(id)arg1 persistenceContext:(id)arg2 context:(id)arg3 ;
@end
