/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABLinksUnlinkedRecordsCommandFactory.h>

@class NSArray;

@interface ABLinksInsertedRecordsCommandFactory : ABLinksUnlinkedRecordsCommandFactory {

	NSArray* _insertedRecords;

}

@property (copy) NSArray * insertedRecords;              //@synthesize insertedRecords=_insertedRecords - In the implementation block
-(void)dealloc;
-(NSArray *)insertedRecords;
-(void)setInsertedRecords:(NSArray *)arg1 ;
-(id)identifiersOfCollidedPeople;
-(id)fetchContactsWithIdentifiers:(id)arg1 ;
-(id)combineInsertedAndMatchingRecords:(id)arg1 ;
-(Class)builtCommandClass;
-(id)fetchPeople;
@end
