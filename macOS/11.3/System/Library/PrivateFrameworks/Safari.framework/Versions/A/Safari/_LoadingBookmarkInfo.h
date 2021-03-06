/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class WebBookmarkList, NSDictionary;

@interface _LoadingBookmarkInfo : NSObject {

	WebBookmarkList* _topBookmark;
	NSDictionary* _syncData;
	SHA256Hash _stateHash;

}

@property (nonatomic,retain) WebBookmarkList * topBookmark;              //@synthesize topBookmark=_topBookmark - In the implementation block
@property (nonatomic,copy) NSDictionary * syncData;                      //@synthesize syncData=_syncData - In the implementation block
@property (nonatomic,readonly) SHA256Hash stateHash;                     //@synthesize stateHash=_stateHash - In the implementation block
-(WebBookmarkList *)topBookmark;
-(NSDictionary *)syncData;
-(void)setSyncData:(NSDictionary *)arg1 ;
-(SHA256Hash)stateHash;
-(void)setTopBookmark:(WebBookmarkList *)arg1 ;
@end

