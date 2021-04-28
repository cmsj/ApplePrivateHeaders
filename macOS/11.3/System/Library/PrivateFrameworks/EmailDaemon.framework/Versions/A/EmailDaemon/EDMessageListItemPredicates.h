/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDMessageListItemPredicates : NSObject
+(id)_predicateForRecipientMessagesAddressesKey:(id)arg1 addresses:(id)arg2 ;
+(id)_predicateForAnyMailboxWithPredicate:(id)arg1 ;
+(id)_objectIDsFromRightExpression:(id)arg1 ;
+(id)predicateForAnyRecipientPredicate:(id)arg1 ;
+(id)predicateForSenderPredicate:(id)arg1 ;
+(id)predicateForSubjectPredicate:(id)arg1 ;
+(id)predicateForBody:(id)arg1 ;
+(id)predicateForMessagesFromVIPs:(id)arg1 ;
+(id)predicateForMessagesToAddresses:(id)arg1 ;
+(id)predicateForMessagesThatCCAddresses:(id)arg1 ;
+(id)predicateForMailboxTypePredicate:(id)arg1 mailboxes:(id)arg2 ;
+(id)predicateForMessagesWithObjectIDsPredicate:(id)arg1 objectIDConverter:(id)arg2 ;
+(id)predicateForMessageIDHeaderHashPredicate:(id)arg1 ;
+(id)predicateForSpotlightPredicate:(id)arg1 ;
@end
