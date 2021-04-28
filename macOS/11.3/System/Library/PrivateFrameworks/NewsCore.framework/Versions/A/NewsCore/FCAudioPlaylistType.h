/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol FCAudioPlaylistType
@property (nonatomic,readonly) NSArray * articleIDs; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSArray *)articleIDs;
-(char)containsArticleID:(id)arg1;
-(void)insertArticleID:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)removeArticleID:(id)arg1;
-(void)ensureSyncedWithCompletion:(/*^block*/id)arg1;

@end
