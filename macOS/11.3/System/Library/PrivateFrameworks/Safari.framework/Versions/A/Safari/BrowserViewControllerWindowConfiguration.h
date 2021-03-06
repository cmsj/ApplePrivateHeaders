/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKWebViewConfiguration, WKNavigationAction, WKWindowFeatures;

@interface BrowserViewControllerWindowConfiguration : NSObject {

	char _omitParentTabRelationship;
	WKWebViewConfiguration* _webViewConfiguration;
	WKNavigationAction* _navigationAction;
	WKWindowFeatures* _windowFeatures;

}

@property (nonatomic,readonly) WKWebViewConfiguration * webViewConfiguration;              //@synthesize webViewConfiguration=_webViewConfiguration - In the implementation block
@property (nonatomic,readonly) WKNavigationAction * navigationAction;                      //@synthesize navigationAction=_navigationAction - In the implementation block
@property (nonatomic,readonly) WKWindowFeatures * windowFeatures;                          //@synthesize windowFeatures=_windowFeatures - In the implementation block
@property (assign,nonatomic) char omitParentTabRelationship;                               //@synthesize omitParentTabRelationship=_omitParentTabRelationship - In the implementation block
-(WKWebViewConfiguration *)webViewConfiguration;
-(id)initWithWebViewConfiguration:(id)arg1 navigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(void)setOmitParentTabRelationship:(char)arg1 ;
-(WKWindowFeatures *)windowFeatures;
-(WKNavigationAction *)navigationAction;
-(char)omitParentTabRelationship;
@end

