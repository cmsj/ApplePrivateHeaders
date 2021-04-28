/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABContactSearching;
@class NSString;

@interface ABGroupSearchingContext : NSObject {

	id<ABContactSearching> _searchNode;
	NSString* _groupLabel;
	char _canCreateGroups;

}

@property (retain,readonly) id<ABContactSearching> searchNode;              //@synthesize searchNode=_searchNode - In the implementation block
@property (copy,readonly) NSString * groupLabel;                            //@synthesize groupLabel=_groupLabel - In the implementation block
@property (readonly) char canCreateGroups;                                  //@synthesize canCreateGroups=_canCreateGroups - In the implementation block
-(void)dealloc;
-(char)canCreateGroups;
-(id<ABContactSearching>)searchNode;
-(id)initWithSearchNode:(id)arg1 groupLabel:(id)arg2 canCreateGroups:(char)arg3 ;
-(NSString *)groupLabel;
@end
