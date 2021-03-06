/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/Versions/A/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol IAMViewControllerMetricsDelegate;
@class NSButton, IAMWebView;

@interface IAMModalWebMessageViewController : NSViewController {

	char _shouldDisplayCloseButton;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	NSButton* _closeButton;
	IAMWebView* _webView;

}

@property (nonatomic,retain) NSButton * closeButton;                                                   //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IAMWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (assign,nonatomic) char shouldDisplayCloseButton;                                            //@synthesize shouldDisplayCloseButton=_shouldDisplayCloseButton - In the implementation block
-(void)loadView;
-(NSButton *)closeButton;
-(void)viewDidLoad;
-(IAMWebView *)webView;
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
-(void)setWebView:(IAMWebView *)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)setCloseButton:(NSButton *)arg1 ;
-(void)setShouldDisplayCloseButton:(char)arg1 ;
-(void)_handleCloseButtonTap:(id)arg1 ;
-(char)shouldDisplayCloseButton;
@end

