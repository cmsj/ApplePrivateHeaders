/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookAutocomplete.framework/Versions/A/AddressBookAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABCNPredicate.h>

@class NSPredicate;

@interface ABAutocompleteContactPredicate : ABCNPredicate {

	NSPredicate* _abcn_coreDataPredicate;

}
+(id)predicateForProperties:(id)arg1 term:(id)arg2 ;
-(id)cn_coreDataPredicate;
-(id)initWithPredicate:(id)arg1 coreDataPredicate:(id)arg2 ;
@end

