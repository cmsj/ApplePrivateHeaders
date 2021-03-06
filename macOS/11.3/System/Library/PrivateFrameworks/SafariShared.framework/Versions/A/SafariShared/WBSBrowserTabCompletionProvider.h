/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate;
@class NSOperationQueue, NSArray, WBSBrowserTabCompletionInfo, NSString;

@interface WBSBrowserTabCompletionProvider : NSObject {

	NSOperationQueue* _queue;
	NSArray* _tabInfos;
	WBSBrowserTabCompletionInfo* _selectedTabInfo;
	id<WBSBrowserTabCompletionProviderSource> _dataSource;
	id<WBSBrowserTabCompletionProviderDelegate> _delegate;
	NSString* _currentQuery;
	NSArray* _currentTabCompletionMatches;

}

@property (assign,nonatomic,__weak) id<WBSBrowserTabCompletionProviderSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WBSBrowserTabCompletionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentQuery;                                           //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentTabCompletionMatches;                             //@synthesize currentTabCompletionMatches=_currentTabCompletionMatches - In the implementation block
-(id)init;
-(void)invalidate;
-(id<WBSBrowserTabCompletionProviderDelegate>)delegate;
-(void)setDelegate:(id<WBSBrowserTabCompletionProviderDelegate>)arg1 ;
-(id<WBSBrowserTabCompletionProviderSource>)dataSource;
-(void)setDataSource:(id<WBSBrowserTabCompletionProviderSource>)arg1 ;
-(NSString *)currentQuery;
-(void)_performTabCompletionOperationForQuery:(id)arg1 tabInfos:(id)arg2 selectedTabInfo:(id)arg3 forQueryID:(long long)arg4 ;
-(id)bestTabCompletionMatchFromMatches:(id)arg1 withTopHitURL:(id)arg2 isBestMatchTopHit:(char*)arg3 ;
-(long long)_compareTabMatch:(id)arg1 otherTabMatch:(id)arg2 ;
-(void)_tabCompletionOperationCompletedForQuery:(id)arg1 matches:(id)arg2 tabInfos:(id)arg3 selectedTabInfo:(id)arg4 ;
-(unsigned long long)_distanceFromSelectedTabForTabMatch:(id)arg1 ;
-(void)setCurrentQuery:(id)arg1 forQueryID:(long long)arg2 ;
-(id)bestTabCompletionMatchWithTopHitURL:(id)arg1 isBestMatchTopHit:(char*)arg2 ;
-(NSArray *)currentTabCompletionMatches;
@end

