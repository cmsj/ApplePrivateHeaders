/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource <NSObject>
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) NSArray * familyMemberContactItems; 
@property (nonatomic,readonly) char familyMemberContainerIsEmpty; 
@required
-(void)setObserver:(id)arg1;
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(char)familyMemberContainerIsEmpty;
-(long long)fetchStatus;
-(NSArray *)familyMemberContactItems;
-(id)contactRepresentingItem:(id)arg1;
-(void)updateWhitelistByAddingContacts:(id)arg1;
-(void)updateWhitelistByUpdatingContacts:(id)arg1;
-(void)updateWhitelistByRemovingContacts:(id)arg1;
-(void)finishWhitelistedContactsTasks;

@end

