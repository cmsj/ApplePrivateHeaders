/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCyclerTestTarget.h>

@class BookmarksController, ProcessMonitor, WBSDistributedNotificationObserver, NSString;

@interface CyclerCommandHandler : NSObject <WBSCyclerTestTarget> {

	BookmarksController* _bookmarksController;
	ProcessMonitor* _davClientMonitor;
	WBSDistributedNotificationObserver* _syncAgentNotificationObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)fetchTopLevelBookmarkList:(/*^block*/id)arg1 ;
-(void)syncBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createBookmarkWithTitle:(id)arg1 url:(id)arg2 inListWithIdentifier:(id)arg3 atIndex:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)createBookmarkListWithTitle:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)deleteBookmarkWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)moveBookmarkWithIdentifier:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setTitle:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setURL:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithBookmarksController:(id)arg1 ;
-(id)_cyclerRepresentationOfBookmark:(id)arg1 ;
-(char)_isSpecialBookmark:(id)arg1 ;
-(void)_performBookmarkUpdatesWithCompletionHandler:(/*^block*/id)arg1 updates:(/*^block*/id)arg2 ;
-(void)_insertBookmark:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(char)_validateInsertionOfBookmark:(id)arg1 intoList:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_startMonitoringSyncStatusWithCompletionHandler:(/*^block*/id)arg1 ;
@end
