/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/AddressBookCore-Structs.h>
#import <AddressBookCore/ABCNFetchRequest.h>

@class NSPredicate, NSArray;

@interface ABCNContactFetchRequest : ABCNFetchRequest {

	NSPredicate* _predicate;
	NSArray* _keysToFetch;
	char _unifyResults;
	char _mutableObjects;

}

@property (nonatomic,copy) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * keysToFetch;                //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) char unifyResults;                  //@synthesize unifyResults=_unifyResults - In the implementation block
@property (assign,nonatomic) char mutableObjects;                //@synthesize mutableObjects=_mutableObjects - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(char)unifyResults;
-(void)setUnifyResults:(char)arg1 ;
-(char)mutableObjects;
-(void)setMutableObjects:(char)arg1 ;
@end

