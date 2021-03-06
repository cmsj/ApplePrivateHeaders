/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKCache.h>

@class NSMutableDictionary, GKLinkedList, NSString;

@interface GKCache : NSObject <GKCache> {

	NSMutableDictionary* _dictionary;
	GKLinkedList* _cacheList;
	unsigned long long _maxCount;
	unsigned long long _count;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) GKLinkedList * cacheList;                      //@synthesize cacheList=_cacheList - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                   //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
-(GKLinkedList *)cacheList;
-(void)setCacheList:(GKLinkedList *)arg1 ;
@end

