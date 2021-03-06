/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/AddressBookCore-Structs.h>
#import <AddressBookCore/ABCNFetchRequest.h>

@class NSPredicate;

@interface ABCNGroupFetchRequest : ABCNFetchRequest {

	NSPredicate* _predicate;
	char _mutableObjects;

}

@property (nonatomic,copy) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) char mutableObjects;                //@synthesize mutableObjects=_mutableObjects - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2 ;
-(char)mutableObjects;
-(void)setMutableObjects:(char)arg1 ;
@end

