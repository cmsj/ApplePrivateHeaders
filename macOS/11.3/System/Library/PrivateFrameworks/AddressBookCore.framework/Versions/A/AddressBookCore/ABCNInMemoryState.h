/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/AddressBookCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, ABCNContactIdentifier;

@interface ABCNInMemoryState : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _contactsByIdentifier;
	NSMutableDictionary* _groupsByIdentifier;
	ABCNContactIdentifier* _meCardIdentifier;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithState:(id)arg1 ;
-(id)meCardIdentifier;
-(id)contactsWithLinkIdentifier:(id)arg1 ;
-(id)contactsMatchingPredicate:(id)arg1 ;
-(id)contactsWithIdentifiers:(id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 ;
-(id)contactsPassingTest:(/*^block*/id)arg1 ;
-(id)groupsPassingTest:(/*^block*/id)arg1 ;
-(id)allContacts;
-(id)contactWithIdentifier:(id)arg1 ;
@end

