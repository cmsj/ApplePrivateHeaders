/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNChangeHistoryEventVisitorPrivate;
@class CNSaveRequest, CNChangeHistoryEventFactory;

@interface CNSaveRequestVisitationTask : CNTask {

	CNSaveRequest* _saveRequest;
	id<CNChangeHistoryEventVisitorPrivate> _visitor;
	CNChangeHistoryEventFactory* _factory;

}

@property (readonly) CNSaveRequest * saveRequest;                                 //@synthesize saveRequest=_saveRequest - In the implementation block
@property (readonly) id<CNChangeHistoryEventVisitorPrivate> visitor;              //@synthesize visitor=_visitor - In the implementation block
@property (readonly) CNChangeHistoryEventFactory * factory;                       //@synthesize factory=_factory - In the implementation block
-(id<CNChangeHistoryEventVisitorPrivate>)visitor;
-(CNChangeHistoryEventFactory *)factory;
-(id)run:(id*)arg1 ;
-(CNSaveRequest *)saveRequest;
-(id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3 ;
-(void)sendAddedContactEvents;
-(void)sendUpdatedContactEvents;
-(void)sendDeletedContactEvents;
-(void)sendAddedGroupEvents;
-(void)sendUpdatedGroupEvents;
-(void)sendDeletedGroupEvents;
-(void)sendAddMemberToGroupEvents;
-(void)sendRemoveMemberFromGroupEvents;
-(void)sendAddSubgroupToGroupEvents;
-(void)sendRemoveSubgroupFromGroupEvents;
-(void)sendLinkContactsEvents;
-(void)sendUnlinkContactEvents;
-(void)sendPreferredContactForNameEvents;
-(void)sendPreferredContactForImageEvents;
-(void)sendDifferentMeCardEvent;
@end

