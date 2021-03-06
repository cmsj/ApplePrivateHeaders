/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMChangeTransaction.h>

@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction {

	_REMNSPersistentHistoryTransactionStorage* _storage;

}

@property (retain) _REMNSPersistentHistoryTransactionStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(_REMNSPersistentHistoryTransactionStorage *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)changes;
-(id)token;
-(id)timestamp;
-(void)setStorage:(_REMNSPersistentHistoryTransactionStorage *)arg1 ;
-(id)accountID;
-(id)author;
-(id)initWithStorage:(id)arg1 ;
-(id)storeID;
-(void)_resolveAccountID:(id)arg1 ;
@end

