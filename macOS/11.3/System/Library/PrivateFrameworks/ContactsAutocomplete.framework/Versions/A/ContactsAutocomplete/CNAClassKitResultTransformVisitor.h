/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
@class NSMutableArray, CNAutocompleteResultFactory, CLSDataStore;

@interface CNAClassKitResultTransformVisitor : NSObject {

	NSMutableArray* _results;
	CNAutocompleteResultFactory* _factory;
	CLSDataStore* _dataStore;
	unsigned long long _searchType;

}

@property (nonatomic,readonly) CNAutocompleteResultFactory * factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,readonly) CLSDataStore * dataStore;                           //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) unsigned long long searchType;                      //@synthesize searchType=_searchType - In the implementation block
+(id)addressForPerson:(id)arg1 searchType:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CNAutocompleteResultFactory *)factory;
-(unsigned long long)searchType;
-(CLSDataStore *)dataStore;
-(id)initWithFactory:(id)arg1 dataStore:(id)arg2 searchType:(unsigned long long)arg3 ;
-(id)reduceCollection:(id)arg1 ;
-(void)visitPerson:(id)arg1 ;
-(void)visitClass:(id)arg1 ;
@end

