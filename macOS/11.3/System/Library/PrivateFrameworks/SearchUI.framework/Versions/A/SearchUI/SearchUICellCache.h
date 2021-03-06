/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, NSDate;

@interface SearchUICellCache : NSObject {

	NSCache* _cellCache;
	NSDate* _lastCacheClearTime;

}

@property (nonatomic,retain) NSCache * cellCache;                      //@synthesize cellCache=_cellCache - In the implementation block
@property (nonatomic,retain) NSDate * lastCacheClearTime;              //@synthesize lastCacheClearTime=_lastCacheClearTime - In the implementation block
+(id)sharedCache;
-(id)init;
-(void)setCellCache:(NSCache *)arg1 ;
-(void)setLastCacheClearTime:(NSDate *)arg1 ;
-(NSDate *)lastCacheClearTime;
-(NSCache *)cellCache;
-(id)identifierForResults:(id)arg1 ;
-(id)cellViewsForResults:(id)arg1 ;
-(void)setCells:(id)arg1 forResults:(id)arg2 ;
@end

