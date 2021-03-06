/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch> {

	CNContactStore* _contactStore;
	CNContactStore* _contactFetcherStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactFetcherStore;              //@synthesize contactFetcherStore=_contactFetcherStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CNContactStore *)contactFetcherStore;
-(void)setContactFetcherStore:(CNContactStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 contactFetcherStore:(id)arg2 ;
-(id)groupsForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3 ;
-(id)peopleForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3 ;
@end

