/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QueryResultSet_BackingStore : NSObject {

	vector<long long, std::__1::allocator<long long>>* _persistentIDs;
	vector<unsigned char, std::__1::allocator<unsigned char>> _sections;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(void)reverseEnumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(char)containsPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>>*)arg1 ;
-(void)reverseEnumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>>*)arg1 ;
@end

