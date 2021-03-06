/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFNSViewController.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKViewControllerAudioSupport.h>
#import <libobjc.A.dylib/OKAudioPlaylistDelegate.h>
#import <libobjc.A.dylib/OKNavigatorViewControllerProxyExport.h>
#import <libobjc.A.dylib/OKActionResponder.h>

@class NSString, OKDocumentNavigator, NSMutableDictionary, OKDocumentViewController, OKPageViewController, NSMutableSet, OKAudioPlaylist, OKNavigatorView, OFNSView;

@interface OKNavigatorViewControllerProxy : OFNSViewController <OKCollectionProxyDataSource, OKSettingsSupport, OKActionResponderPrivate, OKViewControllerAudioSupport, OKAudioPlaylistDelegate, OKNavigatorViewControllerProxyExport, OKActionResponder> {

	NSString* _willAppearActionScript;
	NSString* _didAppearActionScript;
	NSString* _willDisappearActionScript;
	NSString* _didDisappearActionScript;
	char _needsApplySettings;
	char _hasSettingsApplied;
	OKDocumentNavigator* _navigator;
	unsigned long long _prepareMode;
	NSMutableDictionary* _pageViewControllers;
	OKDocumentViewController* _documentViewController;
	OKPageViewController* _parentPageViewController;
	OKPageViewController* _currentPageViewController;
	NSString* _prepareActionScript;
	NSString* _navigationScript;
	NSMutableSet* _actionBindings;
	OKAudioPlaylist* _audioPlaylist;
	float _requiredDuckLevel;
	NSString* _playlistTrackID;
	char _audioPlaylistEnabled;
	double _audioVolume;
	char _audioPlaylistLoops;

}

@property (assign,nonatomic) OKDocumentViewController * documentViewController;              //@synthesize documentViewController=_documentViewController - In the implementation block
@property (assign,nonatomic) OKPageViewController * parentPageViewController;                //@synthesize parentPageViewController=_parentPageViewController - In the implementation block
@property (nonatomic,retain) OKPageViewController * currentPageViewController;               //@synthesize currentPageViewController=_currentPageViewController - In the implementation block
@property (assign,nonatomic) char audioPlaylistEnabled;                                      //@synthesize audioPlaylistEnabled=_audioPlaylistEnabled - In the implementation block
@property (nonatomic,retain,readonly) OKNavigatorView * navigatorView; 
@property (nonatomic,retain,readonly) OKDocumentNavigator * navigator;                       //@synthesize navigator=_navigator - In the implementation block
@property (nonatomic,readonly) unsigned long long prepareMode;                               //@synthesize prepareMode=_prepareMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) OFNSView * actionView; 
+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)name;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)commonInit;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(char)prepareForDisplay;
-(void)didReceiveMemoryWarning;
-(void)prepareForReload;
-(OFNSView *)actionView;
-(OKDocumentViewController *)documentViewController;
-(void)instantPause;
-(void)instantResume;
-(void)navigateToItemAtKeyPath:(id)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OKPageViewController *)currentPageViewController;
-(char)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(void)applySettingsIfNeeded;
-(unsigned long long)prepareMode;
-(void)prepareForRefresh;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(char)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(id)allActionBindings;
-(void)applySettings;
-(void)cancelCouchPotatoPlayback;
-(CGSize)layoutFactor;
-(id)layoutSettingsKeys;
-(void)navigatorWillAppear:(char)arg1 ;
-(char)prepareForUnload;
-(id)displayedPageViewControllers;
-(id)deepestDisplayedPageViewController;
-(id)initWithNavigator:(id)arg1 ;
-(void)setDocumentViewController:(OKDocumentViewController *)arg1 ;
-(void)navigateToPageWithName:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)canStartCouchPotatoPlayback;
-(void)rewindAudioPlaylist;
-(void)setPlaybackAudioVolume:(double)arg1 ;
-(void)beginFadingWithDuration:(double)arg1 ;
-(double)requiredDuckLevel;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2 ;
-(void)removeActionBinding:(id)arg1 ;
-(void)removeAllActionBindings;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(id)dynamicsPushBehaviors;
-(OKDocumentNavigator *)navigator;
-(char)prepareForWarmup;
-(id)pageViewControllerForPageWithName:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)prepareForMode:(unsigned long long)arg1 ;
-(void)setCurrentPageViewController:(OKPageViewController *)arg1 ;
-(void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forPageViewController:(id)arg4 andWidgetView:(id)arg5 ;
-(id)cachedPageViewControllerForPageWithNames:(id)arg1 ;
-(void)navigatorDidAppear:(char)arg1 ;
-(void)navigatorWillDisappear:(char)arg1 ;
-(void)navigatorDidDisappear:(char)arg1 ;
-(void)gotoPageWithName:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNeedsApplySettings;
-(id)cachedPageViewControllers;
-(void)resolutionDidChange;
-(void)applyLayoutSettings;
-(void)layoutDidChange;
-(OKPageViewController *)parentPageViewController;
-(CGSize)parentLayoutFactor;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(void)_playAudioPlaylist;
-(void)_stopAudioPlaylist;
-(void)setNeedsPrepare;
-(void)_setLoopsAndPlayAudioPlaylist;
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3 ;
-(void)endFading;
-(void)audioStartedPlayingWithURL:(id)arg1 ;
-(void)audioFinishedPlayingWithURL:(id)arg1 ;
-(void)setParentPageViewController:(OKPageViewController *)arg1 ;
-(OKNavigatorView *)navigatorView;
-(void)setSettingWillAppearActionScript:(id)arg1 ;
-(void)setSettingDidAppearActionScript:(id)arg1 ;
-(void)setSettingWillDisappearActionScript:(id)arg1 ;
-(void)setSettingDidDisappearActionScript:(id)arg1 ;
-(void)setSettingNavigationScript:(id)arg1 ;
-(void)setSettingAudioPlaylist:(id)arg1 ;
-(void)setSettingAudioVolume:(float)arg1 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg1 ;
-(void)setSettingAudioPlaylistLoops:(char)arg1 ;
-(void)setAudioPlaylistEnabled:(char)arg1 ;
-(char)audioPlaylistEnabled;
@end

