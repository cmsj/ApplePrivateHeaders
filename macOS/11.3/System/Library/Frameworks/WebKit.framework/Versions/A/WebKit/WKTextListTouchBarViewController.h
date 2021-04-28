/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <AppKit/NSViewController.h>

@interface WKTextListTouchBarViewController : NSViewController {

	WebViewImpl* _webViewImpl;
	int _currentListType;

}

@property (assign,nonatomic) int currentListType;              //@synthesize currentListType=_currentListType - In the implementation block
-(void)_selectList:(id)arg1 ;
-(void)setCurrentListType:(int)arg1 ;
-(int)currentListType;
-(id)initWithWebViewImpl:(WebViewImpl*)arg1 ;
-(void)didDestroyView;
@end
