/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject {

	CNContactMetadataPersistentStoreManager* _storeManager;

}

@property (nonatomic,retain) CNContactMetadataPersistentStoreManager * storeManager;              //@synthesize storeManager=_storeManager - In the implementation block
+(long long)maximumContactImagesPerContact;
-(id)init;
-(id)initWithContactMetadataStoreManager:(id)arg1 ;
-(CNContactMetadataPersistentStoreManager *)storeManager;
-(id)managedObjectsToContactImages:(id)arg1 ;
-(char)updateExistingImagesIfNeededWithNewContactImage:(id)arg1 forContactIdentifier:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)insertContactImage:(id)arg1 withContactIdentifier:(id)arg2 inContext:(id)arg3 ;
-(void)ensureImageQuotasForImages:(id)arg1 inContext:(id)arg2 ;
-(id)performFetchRequest:(id)arg1 error:(id*)arg2 ;
-(char)performSaveRequest:(id)arg1 error:(id*)arg2 ;
-(void)setStoreManager:(CNContactMetadataPersistentStoreManager *)arg1 ;
@end

