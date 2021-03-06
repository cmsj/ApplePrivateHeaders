/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/ABAssistantSyncHandler.h>
#import <libobjc.A.dylib/ABAssistantSyncDelegate.h>

@class ABAddressBook, NSString;

@interface ABAssistantSyncPeople : ABAssistantSyncHandler <ABAssistantSyncDelegate>

@property (nonatomic,readonly) ABAddressBook * addressBook; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newSADomainObjectFromABRecord:(id)arg1 ;
-(id)fullSyncSnapshotProperty;
-(void)deleteChangeHistoryToAnchor:(id)arg1 ;
-(CFArrayRef)copyAllRecordsForFullSync;
-(void)copyChangeHistoryAfterAnchor:(id)arg1 changedIDs:(const _CFArray*)arg2 changeTypes:(const _CFArray*)arg3 sequenceNumbers:(const _CFArray*)arg4 ;
-(id)newSADomainObjectFromABRecordID:(id)arg1 ;
-(id)newSADomainObjectFromDeletedRecordID:(id)arg1 ;
-(char)shouldSyncSADomainObject:(id)arg1 ;
-(long long)expectedTotalSyncedRecords;
-(id)init;
-(ABAddressBook *)addressBook;
-(id)syncKey;
@end

