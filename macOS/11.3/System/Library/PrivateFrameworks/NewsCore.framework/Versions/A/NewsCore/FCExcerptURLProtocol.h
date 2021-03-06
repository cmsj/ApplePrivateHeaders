/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@class FCCKContentFetchOperation;

@interface FCExcerptURLProtocol : NSURLProtocol {

	FCCKContentFetchOperation* _fetchOperation;

}

@property (nonatomic,retain) FCCKContentFetchOperation * fetchOperation;              //@synthesize fetchOperation=_fetchOperation - In the implementation block
+(void)initialize;
+(void)unregister;
+(char)canHandleURL:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(char)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)excerptURLForArticleID:(id)arg1 changeTag:(id)arg2 ;
+(void)setupWithArticleDatabase:(id)arg1 ;
+(char)canHandleURLWithComponents:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(FCCKContentFetchOperation *)fetchOperation;
-(void)setFetchOperation:(FCCKContentFetchOperation *)arg1 ;
@end

