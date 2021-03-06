/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <libobjc.A.dylib/DOMNodeFilter.h>

@class DOMCSSMediaRule, NSMutableSet, NSMutableDictionary, NSMutableArray, BuddyCSSProvider, WebView, DOMDocument, DOMHTMLHeadElement, DOMHTMLBodyElement, DOMCSSStyleSheet, NSString;

@interface TranscriptStyleController : NSObject <DOMNodeFilter> {

	DOMCSSMediaRule* _2xRules;
	NSMutableSet* _dirtyCSSRules;
	NSMutableDictionary* _cssCache;
	NSMutableArray* _cssCacheOrder;
	NSMutableDictionary* _cssRuleMap;
	NSMutableDictionary* _2xRuleMap;
	unsigned _changeCount;
	int _inBatchViewChangeCount;
	char _batchChangeRequiresRebuild;
	char _watchMessageAddressing;
	char _messageContentIsHidden;
	char _requiresCSSRebuild;
	BuddyCSSProvider* _buddyCSSProvider;
	WebView* _webView;
	DOMDocument* _DOM;
	DOMHTMLHeadElement* _head;
	DOMHTMLBodyElement* _body;

}

@property (assign) char requiresCSSRebuild;                                    //@synthesize requiresCSSRebuild=_requiresCSSRebuild - In the implementation block
@property (assign,nonatomic) BuddyCSSProvider * buddyCSSProvider;              //@synthesize buddyCSSProvider=_buddyCSSProvider - In the implementation block
@property (assign,nonatomic) WebView * webView;                                //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) DOMDocument * DOM;                                //@synthesize DOM=_DOM - In the implementation block
@property (nonatomic,retain) DOMHTMLHeadElement * head;                        //@synthesize head=_head - In the implementation block
@property (nonatomic,retain,readonly) DOMHTMLBodyElement * body;               //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) DOMCSSStyleSheet * DOMCSSStyleSheet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cssFilePath;
+(id)scriptFileURLs;
-(void)dealloc;
-(int)changeCount;
-(id)window;
-(void)clear;
-(DOMHTMLHeadElement *)head;
-(WebView *)webView;
-(DOMHTMLBodyElement *)body;
-(void)setWebView:(WebView *)arg1 ;
-(short)acceptNode:(id)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)setHead:(DOMHTMLHeadElement *)arg1 ;
-(void)_applyChanges;
-(void)beginChanges;
-(void)endChanges;
-(DOMDocument *)DOM;
-(void)applyRulesForChatItem:(id)arg1 ;
-(void)showNamesAndPictures;
-(void)showPictures;
-(void)setDOM:(DOMDocument *)arg1 ;
-(char)applyCSSSelector:(id)arg1 property:(id)arg2 value:(id)arg3 ;
-(id)_styleElement;
-(DOMCSSStyleSheet *)DOMCSSStyleSheet;
-(void)_rebuildCSSRuleMap;
-(char)_rebuildCSSContent;
-(char)_applyQueuedCSSRules;
-(void)bodyFinishLayout;
-(void)setDOMCSSRule:(id)arg1 forSelector:(id)arg2 ;
-(void)setDOM2XMediaRule:(id)arg1 forSelector:(id)arg2 ;
-(id)DOM2XMediaRuleForSelector:(id)arg1 ;
-(id)DOMCSSRuleForSelector:(id)arg1 ;
-(char)applyCSSSelector:(id)arg1 property:(id)arg2 value:(id)arg3 priority:(id)arg4 ;
-(void)clearCSSSelector:(id)arg1 forProperties:(id)arg2 ;
-(CGRect)screenBoundsForElement:(id)arg1 ;
-(void)applyCurrentChanges;
-(char)applyCSSSelector:(id)arg1 fromDictionary:(id)arg2 ;
-(void)clearCSSSelector:(id)arg1 ;
-(void)_setNeedsRebuild;
-(void)beginBatchViewChange;
-(char)endBatchViewChange;
-(void)dimTranscriptWithAnimation:(char)arg1 ;
-(void)undimTranscriptWithAnimation:(char)arg1 ;
-(CGRect)screenBoundsForElementID:(id)arg1 ;
-(void)personInfoChanged:(id)arg1 ;
-(void)personPictureChanged:(id)arg1 ;
-(id)chatItemGUIDs;
-(double)minHeightPerMessage;
-(void)setBuddyCSSProvider:(BuddyCSSProvider *)arg1 ;
-(char)requiresCSSRebuild;
-(void)setRequiresCSSRebuild:(char)arg1 ;
-(BuddyCSSProvider *)buddyCSSProvider;
@end

