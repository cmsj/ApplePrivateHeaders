/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WKWebView, LPEvent;

@interface LPFetcherConfiguration : NSObject <NSCopying> {

	WKWebView* _webViewForProcessSharing;
	long long _maximumResponseCount;
	LPEvent* _rootEvent;

}

@property (nonatomic,retain) WKWebView * webViewForProcessSharing;              //@synthesize webViewForProcessSharing=_webViewForProcessSharing - In the implementation block
@property (assign,nonatomic) long long maximumResponseCount;                    //@synthesize maximumResponseCount=_maximumResponseCount - In the implementation block
@property (nonatomic,retain) LPEvent * rootEvent;                               //@synthesize rootEvent=_rootEvent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setWebViewForProcessSharing:(WKWebView *)arg1 ;
-(WKWebView *)webViewForProcessSharing;
-(long long)maximumResponseCount;
-(void)setMaximumResponseCount:(long long)arg1 ;
-(LPEvent *)rootEvent;
-(void)setRootEvent:(LPEvent *)arg1 ;
@end

