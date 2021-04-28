/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSURLCompletionDatabase.h>
#import <libobjc.A.dylib/WBSURLCompletionDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, WebBookmarkList, NSString;

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	char _reloadNotificationPending;
	char _enumeratingBookmarkMatches;
	char _enumeratingHistoryMatches;
	WebBookmarkList* _topBookmark;

}

@property (__weak) WebBookmarkList * topBookmark;                                                                //@synthesize topBookmark=_topBookmark - In the implementation block
@property (getter=isEnumeratingBookmarkMatches,nonatomic,readonly) char enumeratingBookmarkMatches;              //@synthesize enumeratingBookmarkMatches=_enumeratingBookmarkMatches - In the implementation block
@property (getter=isEnumeratingHistoryMatches,nonatomic,readonly) char enumeratingHistoryMatches;                //@synthesize enumeratingHistoryMatches=_enumeratingHistoryMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCompletionDatabase;
-(void)dealloc;
-(id)init;
-(void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned long long)arg4 forQueryID:(long long)arg5 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(char)arg3 ;
-(char)isEnumeratingBookmarkMatches;
-(char)isEnumeratingHistoryMatches;
-(WebBookmarkList *)topBookmark;
-(void)setTopBookmark:(WebBookmarkList *)arg1 ;
-(void)_historyOrBookmarksDidChange:(id)arg1 ;
@end
