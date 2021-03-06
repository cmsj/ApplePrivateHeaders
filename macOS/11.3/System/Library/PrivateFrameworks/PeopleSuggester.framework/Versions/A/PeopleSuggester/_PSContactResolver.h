/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSArray;

@interface _PSContactResolver : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                      //@synthesize keysToFetch=_keysToFetch - In the implementation block
+(id)handlesForContactFavorites;
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 ;
-(NSArray *)keysToFetch;
-(id)contactWithIdentifier:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 pickFirstOfMultiple:(char)arg2 ;
-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg1 ;
-(id)resolveContact:(id)arg1 ;
-(id)resolveContactFromINPerson:(id)arg1 ;
-(id)resolveContactIdentifier:(id)arg1 ;
-(id)normalizedHandlesDictionaryFromHandles:(id)arg1 ;
@end

