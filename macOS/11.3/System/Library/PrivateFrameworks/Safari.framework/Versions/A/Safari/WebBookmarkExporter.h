/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface WebBookmarkExporter : NSObject {

	NSError* _error;

}
-(id)error;
-(id)initWithRootBookmark:(id)arg1 path:(id)arg2 hideExtension:(char)arg3 ;
-(id)leadingWhiteSpaceForIndentLevel:(int)arg1 ;
-(id)escapeHTML:(id)arg1 ;
-(id)stringForRootBookmark:(id)arg1 withIndentLevel:(int)arg2 ;
-(id)stringForBookmarkLeaf:(id)arg1 withIndentLevel:(int)arg2 ;
-(id)stringForBookmarkList:(id)arg1 withIndentLevel:(int)arg2 ;
-(id)stringForBookmark:(id)arg1 withIndentLevel:(int)arg2 ;
-(id)fileContentsWithRootBookmark:(id)arg1 ;
@end

