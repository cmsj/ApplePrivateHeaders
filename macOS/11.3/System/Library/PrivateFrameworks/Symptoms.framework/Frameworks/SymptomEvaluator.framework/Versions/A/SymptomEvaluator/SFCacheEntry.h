/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSDate;

@interface SFCacheEntry : NSObject {

	NSObject* _item;
	NSDate* _lastUsed;

}

@property (nonatomic,retain) NSObject * item;                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDate * lastUsed;              //@synthesize lastUsed=_lastUsed - In the implementation block
-(void)setItem:(NSObject *)arg1 ;
-(NSObject *)item;
-(NSDate *)lastUsed;
-(void)setLastUsed:(NSDate *)arg1 ;
-(id)initWithCacheItem:(id)arg1 ;
@end

