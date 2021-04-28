/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarkList, NSURL, NSSet;

@interface RecursiveBookmarkDuplicateHousekeeper : NSObject {

	WebBookmarkList* _rootBookmark;
	char _keepsBookmarksWithSyncData;
	NSURL* _davHomeURL;
	NSSet* _addedBookmarks;

}

@property (setter=setDAVHomeURL:,nonatomic,retain) NSURL * davHomeURL;              //@synthesize davHomeURL=_davHomeURL - In the implementation block
@property (assign,nonatomic) char keepsBookmarksWithSyncData;                       //@synthesize keepsBookmarksWithSyncData=_keepsBookmarksWithSyncData - In the implementation block
@property (nonatomic,copy) NSSet * addedBookmarks;                                  //@synthesize addedBookmarks=_addedBookmarks - In the implementation block
-(id)init;
-(void)setDAVHomeURL:(id)arg1 ;
-(id)initWithRootBookmark:(id)arg1 ;
-(NSURL *)davHomeURL;
-(void)setAddedBookmarks:(NSSet *)arg1 ;
-(void)setKeepsBookmarksWithSyncData:(char)arg1 ;
-(void)deleteAllDuplicateSiblingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getNumberOfDuplicateBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)_numberOfDuplicateBookmarksUnderFolder:(id)arg1 recurse:(char)arg2 ;
-(char)_deduplicateSubtreeRootedAtFolder:(id)arg1 mergingAdditionalChildren:(id)arg2 ;
-(id)_moveBookmark:(id)arg1 intoFolder:(id)arg2 index:(unsigned long long)arg3 ;
-(char)keepsBookmarksWithSyncData;
-(NSSet *)addedBookmarks;
@end
