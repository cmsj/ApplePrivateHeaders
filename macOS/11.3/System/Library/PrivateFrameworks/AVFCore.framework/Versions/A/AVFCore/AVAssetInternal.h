/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVLoggingIdentifier;
@class AVWeakReference, AVDispatchOnce, NSArray, NSString;

@interface AVAssetInternal : NSObject {

	AVWeakReference* weakReference;
	AVDispatchOnce* loadChapterInfoOnce;
	NSArray* chapterGroupInfo;
	NSString* anchorChapterType;
	NSArray* availableChapterLanguages;
	NSArray* availableCanonicalizedChapterLanguages;
	NSArray* availableChapterLocales;
	id<AVLoggingIdentifier> loggingIdentifier;

}
@end

