/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface SFSSCachingService : NSObject {

	NSCache* _memoryCache;

}

@property (nonatomic,retain) NSCache * memoryCache;              //@synthesize memoryCache=_memoryCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)clear;
-(NSCache *)memoryCache;
-(void)setMemoryCache:(NSCache *)arg1 ;
@end

