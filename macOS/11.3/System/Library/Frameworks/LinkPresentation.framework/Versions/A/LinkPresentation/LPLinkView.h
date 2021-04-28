/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSAccessibilityGroup.h>
#import <libobjc.A.dylib/NSGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NSImmediateActionGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/QLPreviewMenuItemDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/LPComponentViewDelegate.h>
#import <libobjc.A.dylib/LPTapToLoadViewDelegate.h>
#import <libobjc.A.dylib/LPThemeClient.h>

@protocol LPLinkViewDelegate;
@class NSHashTable, LPLinkMetadata, NSArray, LPTheme, NSMutableArray, NSView, LPCaptionBarPresentationProperties, LPCaptionButtonPresentationProperties, LPImage, LPImagePresentationProperties, NSString, LPVideo, NSColor, LPInlineMediaPlaybackInformation, LPLinkViewComponents, NSImmediateActionGestureRecognizer, NSURL;

@interface LPLinkView : NSView <NSAccessibilityGroup, NSGestureRecognizerDelegate, NSImmediateActionGestureRecognizerDelegate, QLPreviewMenuItemDelegate, CAAnimationDelegate, LPComponentViewDelegate, LPTapToLoadViewDelegate, LPThemeClient> {

	unsigned _loggingID;
	NSHashTable* _pendingMetadataProviders;
	LPLinkMetadata* _metadata;
	NSArray* _multipleMetadata;
	NSArray* _multipleURLs;
	LPTheme* _theme;
	NSMutableArray* _tapGestureRecognizers;
	NSMutableArray* _highlightGestureRecognizers;
	NSView* _captionHighlightView;
	NSView* _mediaHighlightView;
	char _isPreliminary;
	long long _style;
	LPCaptionBarPresentationProperties* _captionBar;
	LPCaptionBarPresentationProperties* _mediaTopCaptionBar;
	LPCaptionBarPresentationProperties* _mediaBottomCaptionBar;
	LPCaptionButtonPresentationProperties* _captionButton;
	LPImage* _backgroundImage;
	LPImagePresentationProperties* _backgroundImageProperties;
	NSString* _quotedText;
	LPImage* _image;
	LPImagePresentationProperties* _imageProperties;
	NSArray* _alternateImages;
	LPVideo* _video;
	NSColor* _backgroundColor;
	NSColor* _overrideBackgroundColor;
	LPInlineMediaPlaybackInformation* _inlinePlaybackInformation;
	double _minimumHeight;
	NSString* _domainNameForIndicator;
	LPLinkViewComponents* _components;
	LPLinkViewComponents* _componentsForSizing;
	NSView* _contentView;
	NSView* _animationView;
	NSImmediateActionGestureRecognizer* _immediateActionGestureRecognizer;
	char _hasEverBuilt;
	char _needsRebuild;
	char _usesDeferredLayout;
	char _shouldAnimateDuringNextBuild;
	char _hasValidPresentationProperties;
	char _hasSetDisableHighlightGesture;
	char _hasSetDisablePreviewGesture;
	char _mayReceiveAdditionalMetadata;
	char _usesComputedPresentationProperties;
	char _asynchronouslyLoadingMetadataFields;
	char _metadataIsComplete;
	char _disableAnimations;
	char _needsMessagesTranscriptPushCounterAnimation;
	char _disableTapGesture;
	char _disableHighlightGesture;
	char _disablePreviewGesture;
	char _disableAutoPlay;
	char _allowsLoadingMediaWithAutoPlayDisabled;
	char _disablePlayback;
	char _disablePlaybackControls;
	char _allowsTapToLoad;
	char _forceFlexibleWidth;
	char _applyCornerRadius;
	char _allowsOpeningSensitiveURLs;
	long long _animationOrigin;
	NSURL* _overrideURL;
	unsigned long long _preferredSizeClass;
	NSString* _sourceBundleIdentifier;
	id<LPLinkViewDelegate> _delegate;
	NSURL* _URL;
	NSEdgeInsets _textSafeAreaInset;
	NSEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<LPLinkViewDelegate> delegate;                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSEdgeInsets contentInset;                                                                                              //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                                                                            //@synthesize URL=_URL - In the implementation block
@property (setter=_setOverrideURL:,nonatomic,retain) NSURL * _overrideURL;                                                                           //@synthesize overrideURL=_overrideURL - In the implementation block
@property (assign,setter=_setDisableAnimations:,nonatomic) char _disableAnimations;                                                                  //@synthesize disableAnimations=_disableAnimations - In the implementation block
@property (assign,setter=_setAnimationOrigin:,nonatomic) long long _animationOrigin;                                                                 //@synthesize animationOrigin=_animationOrigin - In the implementation block
@property (assign,setter=_setNeedsMessagesTranscriptPushCounterAnimation:,nonatomic) char _needsMessagesTranscriptPushCounterAnimation;              //@synthesize needsMessagesTranscriptPushCounterAnimation=_needsMessagesTranscriptPushCounterAnimation - In the implementation block
@property (assign,setter=_setDisableTapGesture:,nonatomic) char _disableTapGesture;                                                                  //@synthesize disableTapGesture=_disableTapGesture - In the implementation block
@property (assign,setter=_setDisableHighlightGesture:,nonatomic) char _disableHighlightGesture;                                                      //@synthesize disableHighlightGesture=_disableHighlightGesture - In the implementation block
@property (assign,setter=_setDisablePreviewGesture:,nonatomic) char _disablePreviewGesture;                                                          //@synthesize disablePreviewGesture=_disablePreviewGesture - In the implementation block
@property (assign,setter=_setDisablePlayback:,nonatomic) char _disablePlayback;                                                                      //@synthesize disablePlayback=_disablePlayback - In the implementation block
@property (assign,setter=_setDisablePlaybackControls:,nonatomic) char _disablePlaybackControls;                                                      //@synthesize disablePlaybackControls=_disablePlaybackControls - In the implementation block
@property (assign,setter=_setDisableAutoPlay:,nonatomic) char _disableAutoPlay;                                                                      //@synthesize disableAutoPlay=_disableAutoPlay - In the implementation block
@property (assign,setter=_setAllowsLoadingMediaWithAutoPlayDisabled:,nonatomic) char _allowsLoadingMediaWithAutoPlayDisabled;                        //@synthesize allowsLoadingMediaWithAutoPlayDisabled=_allowsLoadingMediaWithAutoPlayDisabled - In the implementation block
@property (assign,setter=_setAllowsTapToLoad:,nonatomic) char _allowsTapToLoad;                                                                      //@synthesize allowsTapToLoad=_allowsTapToLoad - In the implementation block
@property (assign,setter=_setUsesDeferredLayout:,nonatomic) char _usesDeferredLayout;                                                                //@synthesize usesDeferredLayout=_usesDeferredLayout - In the implementation block
@property (assign,setter=_setForceFlexibleWidth:,nonatomic) char _forceFlexibleWidth;                                                                //@synthesize forceFlexibleWidth=_forceFlexibleWidth - In the implementation block
@property (assign,setter=_setApplyCornerRadius:,nonatomic) char _applyCornerRadius;                                                                  //@synthesize applyCornerRadius=_applyCornerRadius - In the implementation block
@property (assign,setter=_setAllowsOpeningSensitiveURLs:,nonatomic) char _allowsOpeningSensitiveURLs;                                                //@synthesize allowsOpeningSensitiveURLs=_allowsOpeningSensitiveURLs - In the implementation block
@property (nonatomic,readonly) long long _style; 
@property (assign,setter=_setTextSafeAreaInset:,nonatomic) NSEdgeInsets _textSafeAreaInset;                                                          //@synthesize textSafeAreaInset=_textSafeAreaInset - In the implementation block
@property (assign,setter=_setPreferredSizeClass:,nonatomic) unsigned long long _preferredSizeClass;                                                  //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
@property (nonatomic,readonly) CGRect _primaryCaptionBarFrame; 
@property (setter=_setSourceBundleIdentifier:,nonatomic,retain) NSString * _sourceBundleIdentifier;                                                  //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) LPLinkMetadata * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<LPLinkViewDelegate>)delegate;
-(id)initWithURL:(id)arg1 ;
-(void)setDelegate:(id<LPLinkViewDelegate>)arg1 ;
-(NSURL *)URL;
-(NSURL *)_overrideURL;
-(long long)_style;
-(void)setURL:(NSURL *)arg1 ;
-(void)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)viewDidChangeEffectiveAppearance;
-(void)setWantsLayer:(char)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)accessibilityRole;
-(id)accessibilityTitle;
-(NSEdgeInsets)contentInset;
-(void)setContentInset:(NSEdgeInsets)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)menuItem:(id)arg1 previewItemAtPoint:(CGPoint)arg2 ;
-(CGRect)menuItem:(id)arg1 itemFrameForPoint:(CGPoint)arg2 ;
-(void)immediateActionRecognizerWillPrepare:(id)arg1 ;
-(void)_invalidateLayout;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(char)_applyCornerRadius;
-(unsigned long long)_preferredSizeClass;
-(id)initWithMetadata:(id)arg1 ;
-(void)_setupView;
-(NSString *)_sourceBundleIdentifier;
-(void)_fetchMetadata;
-(void)_setPresentationProperties:(id)arg1 ;
-(void)_setMetadata:(id)arg1 isFinal:(char)arg2 ;
-(id)_createCaptionBar;
-(void)_setAllowsTapToLoad:(char)arg1 ;
-(char)_allowsTapToLoad;
-(char)_disableAutoPlay;
-(void)_setDisableAutoPlay:(char)arg1 ;
-(char)_disablePlayback;
-(char)_disablePlaybackControls;
-(char)_allowsLoadingMediaWithAutoPlayDisabled;
-(void)componentViewDidChangeIntrinsicContentSize:(id)arg1 ;
-(long long)componentView:(id)arg1 allowedImageFilterForFilter:(long long)arg2 ;
-(void)_commonInitWithURL:(id)arg1 ;
-(void)_configureWithoutLoadingMetadataFromURLs:(id)arg1 ;
-(void)_setMultipleMetadata:(id)arg1 ;
-(id)_fetchMetadataForURL:(id)arg1 withSubresources:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 ;
-(void)_updateMetadataIsComplete;
-(void)themeParametersDidChange;
-(void)_invalidatePresentationProperties;
-(void)_setMetadataInternal:(id)arg1 ;
-(void)_setPreferredSizeClass:(unsigned long long)arg1 ;
-(void)_setAction:(/*^block*/id)arg1 withText:(id)arg2 buttonType:(long long)arg3 ;
-(void)_computePresentationPropertiesFromMetadataIfNeeded;
-(void)_layoutLinkView;
-(CGSize)_layoutLinkViewForSize:(CGSize)arg1 applyingLayout:(char)arg2 ;
-(id)_createMediaView;
-(id)_createMediaTopCaptionBarView;
-(id)_createMediaBottomCaptionBarView;
-(id)_createQuotedTextView;
-(id)_createBackgroundImageView;
-(void)animateOutAndRemoveViews;
-(void)_uninstallTapGestureRecognizers;
-(void)_uninstallHighlightGestureRecognizers;
-(char)_shouldApplyCornerRadius;
-(char)_shouldClipAnimationView;
-(id)_createComponents;
-(void)animateInViews;
-(void)animateBackgroundColor;
-(void)_rebuildGestureRecognizersIfNeeded;
-(char)_shouldUseAnimations;
-(void)_rebuildSubviewsWithAnimation:(char)arg1 ;
-(void)animateFromOldFrame:(CGRect)arg1 oldMediaBackgroundFrame:(CGRect)arg2 oldCaptionBarView:(id)arg3 ;
-(id)_createTapToLoadView;
-(id)_videoViewConfiguration;
-(char)_isUsingAppClipPresentation;
-(void)_addHighlightRecognizerToView:(id)arg1 forMedia:(char)arg2 ;
-(void)_addTapRecognizerToView:(id)arg1 forMedia:(char)arg2 ;
-(void)_captionBarButtonPressed:(id)arg1 ;
-(char)_disableHighlightGesture;
-(void)_installHighlightGestureRecognizers;
-(void)_installTapGestureRecognizers;
-(char)_disablePreviewGesture;
-(void)_uninstallPreviewGestureRecognizer;
-(void)_installPreviewGestureRecognizer;
-(void)_mediaTapRecognized:(id)arg1 ;
-(void)_captionTapRecognized:(id)arg1 ;
-(void)_mediaHighlightRecognized:(id)arg1 ;
-(void)_captionHighlightRecognized:(id)arg1 ;
-(void)_setHighlightMedia:(char)arg1 ;
-(void)_setHighlightCaption:(char)arg1 ;
-(void)_openURLAllowingSensitiveSchemes:(char)arg1 allowingAssociatedApplications:(char)arg2 ;
-(void)tapToLoadViewWasTapped:(id)arg1 ;
-(id)initWithMetadataLoadedFromURL:(id)arg1 ;
-(id)_initWithMetadataLoadedFromURLs:(id)arg1 ;
-(id)_initWithMultipleMetadata:(id)arg1 ;
-(id)initWithPresentationProperties:(id)arg1 ;
-(void)_setApplyCornerRadius:(char)arg1 ;
-(void)_setOverrideURL:(id)arg1 ;
-(void)set_preferredSizeClass:(unsigned long long)arg1 ;
-(void)_setSourceBundleIdentifier:(id)arg1 ;
-(void)_setAction:(/*^block*/id)arg1 withText:(id)arg2 ;
-(void)_setTextSafeAreaInset:(NSEdgeInsets)arg1 ;
-(CGRect)_primaryCaptionBarFrame;
-(void)_setDisableTapGesture:(char)arg1 ;
-(void)_setDisableHighlightGesture:(char)arg1 ;
-(void)_setDisablePreviewGesture:(char)arg1 ;
-(void)_cancelActiveHighlight;
-(char)_disableAnimations;
-(void)_setDisableAnimations:(char)arg1 ;
-(char)_needsMessagesTranscriptPushCounterAnimation;
-(void)_setNeedsMessagesTranscriptPushCounterAnimation:(char)arg1 ;
-(char)_disableTapGesture;
-(void)_setAllowsLoadingMediaWithAutoPlayDisabled:(char)arg1 ;
-(void)_setDisablePlayback:(char)arg1 ;
-(void)_setDisablePlaybackControls:(char)arg1 ;
-(long long)_animationOrigin;
-(void)_setAnimationOrigin:(long long)arg1 ;
-(char)_usesDeferredLayout;
-(void)_setUsesDeferredLayout:(char)arg1 ;
-(char)_forceFlexibleWidth;
-(void)_setForceFlexibleWidth:(char)arg1 ;
-(NSEdgeInsets)_textSafeAreaInset;
-(char)_allowsOpeningSensitiveURLs;
-(void)_setAllowsOpeningSensitiveURLs:(char)arg1 ;
@end
