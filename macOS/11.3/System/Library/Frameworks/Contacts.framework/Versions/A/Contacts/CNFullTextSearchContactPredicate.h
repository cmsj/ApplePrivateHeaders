/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString, NSArray;

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSString* _searchString;
	NSArray* _containerIdentifiers;
	NSArray* _groupIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * searchString;                     //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)searchString;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(char)arg2 service:(id)arg3 error:(id*)arg4 ;
-(NSArray *)containerIdentifiers;
-(NSArray *)groupIdentifiers;
-(id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3 ;
@end

