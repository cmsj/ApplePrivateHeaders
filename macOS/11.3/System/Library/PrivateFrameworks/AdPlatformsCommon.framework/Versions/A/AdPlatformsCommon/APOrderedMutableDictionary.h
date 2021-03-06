/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface APOrderedMutableDictionary : NSObject {

	NSMutableDictionary* _dictionary;
	NSMutableOrderedSet* _mutableOrderedSet;

}

@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id firstKey; 
@property (nonatomic,readonly) id lastObject; 
@property (nonatomic,readonly) id lastKey; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(char)containsKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)firstObject;
-(id)lastObject;
-(id)firstKey;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(id)lastKey;
@end

