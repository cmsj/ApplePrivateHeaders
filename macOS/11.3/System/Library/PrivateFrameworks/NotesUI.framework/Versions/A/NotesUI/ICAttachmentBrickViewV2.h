/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/ICAttachmentBrickAudioPlayerViewV2Delegate.h>
#import <libobjc.A.dylib/ICMZoomableAttachmentView.h>

@class ICMZoomController, ICAttachment, ICSearchResult, NSView, NSRegularExpression, ICAttachmentBrickFrostedView, NSLayoutConstraint, NSString, ICAttachmentBrickTextViewV2, NSImage;

@interface ICAttachmentBrickViewV2 : NSView <ICAttachmentBrickAudioPlayerViewV2Delegate, ICMZoomableAttachmentView> {

	char _forceDefaultBrickSize;
	char _forManualRendering;
	char _selected;
	char _fullHeightText;
	char _showAsFileIcon;
	char _frostedViewActive;
	char _highlightUpdateScheduled;
	char _usingConstraintsForAXLargerTextSizes;
	char _layerIsInvertedForAXInvertColors;
	char _vibrant;
	char _disableImageUpdates;
	char _disableTextUpdates;
	char _disableVibrancy;
	ICMZoomController* _zoomController;
	ICAttachment* _attachment;
	ICSearchResult* _searchResult;
	NSView* _accessoryView;
	NSRegularExpression* _highlightPatternRegex;
	unsigned long long _defaultBrickSize;
	unsigned long long _brickSize;
	NSView* _backgroundView;
	ICAttachmentBrickFrostedView* _frostedView;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _textViewTopConstraint;
	NSLayoutConstraint* _textViewTrailingConstraint;
	NSLayoutConstraint* _accessoryViewWidthConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewVerticalConstraint;
	NSLayoutConstraint* _accessoryViewTrailingConstraint;
	long long _fileSizeCache;
	NSString* _fileSizeStringCache;
	ICAttachmentBrickTextViewV2* _textView;
	unsigned long long _brickType;
	unsigned long long _accessoryType;
	unsigned long long _imageScaling;
	NSImage* _image;
	CGSize _imageSize;

}

@property (assign,nonatomic) unsigned long long brickSize;                                      //@synthesize brickSize=_brickSize - In the implementation block
@property (assign,getter=isFullHeightText,nonatomic) char fullHeightText;                       //@synthesize fullHeightText=_fullHeightText - In the implementation block
@property (assign,nonatomic) char showAsFileIcon;                                               //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (nonatomic,retain) NSView * backgroundView;                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickFrostedView * frostedView;                        //@synthesize frostedView=_frostedView - In the implementation block
@property (assign,getter=isFrostedViewActive,nonatomic) char frostedViewActive;                 //@synthesize frostedViewActive=_frostedViewActive - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                              //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                             //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewTopConstraint;                        //@synthesize textViewTopConstraint=_textViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewTrailingConstraint;                   //@synthesize textViewTrailingConstraint=_textViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewWidthConstraint;                 //@synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;                //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewVerticalConstraint;              //@synthesize accessoryViewVerticalConstraint=_accessoryViewVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewTrailingConstraint;              //@synthesize accessoryViewTrailingConstraint=_accessoryViewTrailingConstraint - In the implementation block
@property (assign,nonatomic) long long fileSizeCache;                                           //@synthesize fileSizeCache=_fileSizeCache - In the implementation block
@property (nonatomic,copy) NSString * fileSizeStringCache;                                      //@synthesize fileSizeStringCache=_fileSizeStringCache - In the implementation block
@property (assign,nonatomic) char highlightUpdateScheduled;                                     //@synthesize highlightUpdateScheduled=_highlightUpdateScheduled - In the implementation block
@property (assign,nonatomic) char usingConstraintsForAXLargerTextSizes;                         //@synthesize usingConstraintsForAXLargerTextSizes=_usingConstraintsForAXLargerTextSizes - In the implementation block
@property (assign,nonatomic) char layerIsInvertedForAXInvertColors;                             //@synthesize layerIsInvertedForAXInvertColors=_layerIsInvertedForAXInvertColors - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickTextViewV2 * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSView * accessoryView;                                            //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) NSString * typeDescriptionForAccessibility; 
@property (assign,nonatomic) unsigned long long brickType;                                      //@synthesize brickType=_brickType - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryType;                                  //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                                   //@synthesize imageScaling=_imageScaling - In the implementation block
@property (nonatomic,retain) NSImage * image;                                                   //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                  //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,getter=isVibrant,nonatomic) char vibrant;                                     //@synthesize vibrant=_vibrant - In the implementation block
@property (assign,nonatomic) char disableImageUpdates;                                          //@synthesize disableImageUpdates=_disableImageUpdates - In the implementation block
@property (assign,nonatomic) char disableTextUpdates;                                           //@synthesize disableTextUpdates=_disableTextUpdates - In the implementation block
@property (assign,nonatomic) char disableVibrancy;                                              //@synthesize disableVibrancy=_disableVibrancy - In the implementation block
@property (nonatomic,retain) ICMZoomController * zoomController;                                //@synthesize zoomController=_zoomController - In the implementation block
@property (assign,nonatomic,__weak) ICAttachment * attachment;                                  //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) ICSearchResult * searchResult;                              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,retain) NSRegularExpression * highlightPatternRegex;                       //@synthesize highlightPatternRegex=_highlightPatternRegex - In the implementation block
@property (assign,nonatomic) char forceDefaultBrickSize;                                        //@synthesize forceDefaultBrickSize=_forceDefaultBrickSize - In the implementation block
@property (assign,nonatomic) unsigned long long defaultBrickSize;                               //@synthesize defaultBrickSize=_defaultBrickSize - In the implementation block
@property (assign,nonatomic) char forManualRendering;                                           //@synthesize forManualRendering=_forManualRendering - In the implementation block
@property (assign,nonatomic) char selected;                                                     //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)brickSizeWithSize:(unsigned long long)arg1 ;
+(CGSize)imageSizeForBrickSize:(unsigned long long)arg1 ;
+(id)brickInfoForAttachment:(id)arg1 brickSize:(unsigned long long)arg2 brick:(id)arg3 ;
+(id)audioAttachmentDetail1StringWithDuration:(double)arg1 attachment:(id)arg2 brick:(id)arg3 ;
+(unsigned long long)brickTypeForAttachment:(id)arg1 ;
+(unsigned long long)maximumBrickSizeForAttachment:(id)arg1 defaultSize:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setImage:(NSImage *)arg1 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(void)layout;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(NSImage *)image;
-(void)viewDidMoveToWindow;
-(void)setBackgroundView:(NSView *)arg1 ;
-(NSView *)backgroundView;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(NSView *)accessoryView;
-(id)accessibilityValueDescription;
-(void)cacheDisplayInRect:(CGRect)arg1 toBitmapImageRep:(id)arg2 ;
-(unsigned long long)imageScaling;
-(CGSize)imageSize;
-(void)setTextView:(ICAttachmentBrickTextViewV2 *)arg1 ;
-(ICAttachmentBrickTextViewV2 *)textView;
-(void)viewDidChangeBackingProperties;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(ICSearchResult *)searchResult;
-(void)setSearchResult:(ICSearchResult *)arg1 ;
-(void)updateText;
-(void)setZoomController:(ICMZoomController *)arg1 ;
-(ICMZoomController *)zoomController;
-(void)setImageSize:(CGSize)arg1 ;
-(char)isVibrant;
-(void)setVibrant:(char)arg1 ;
-(char)accessibilityIgnoresInvertColors;
-(unsigned long long)accessoryType;
-(void)setAccessoryType:(unsigned long long)arg1 ;
-(void)updateImage;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)scaleDidChange;
-(id)thumbnailCache;
-(NSLayoutConstraint *)accessoryViewWidthConstraint;
-(void)setAccessoryViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(char)showAsFileIcon;
-(void)setShowAsFileIcon:(char)arg1 ;
-(void)setDisableVibrancy:(char)arg1 ;
-(char)disableVibrancy;
-(void)hostViewDidZoom:(id)arg1 ;
-(NSString *)typeDescriptionForAccessibility;
-(id)icaxTypeDescription;
-(void)setHighlightPatternRegex:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)highlightPatternRegex;
-(id)initWithFrame:(CGRect)arg1 defaultBrickSize:(unsigned long long)arg2 ;
-(void)setFileSizeCache:(long long)arg1 ;
-(void)setDefaultBrickSize:(unsigned long long)arg1 ;
-(void)initializeBasicViews;
-(void)accentColorDidChange:(id)arg1 ;
-(void)attachmentDidLoadNotification:(id)arg1 ;
-(void)attachmentPreviewImagesDidUpdateNotification:(id)arg1 ;
-(void)mediaDidLoadNotification:(id)arg1 ;
-(void)locationContextAuthorizationStatusDidChangeNotification:(id)arg1 ;
-(void)updateContentFromAttachment;
-(void)updateSearchHighlighting;
-(char)highlightUpdateScheduled;
-(void)setHighlightUpdateScheduled:(char)arg1 ;
-(ICAttachmentBrickFrostedView *)frostedView;
-(void)setForManualRendering:(char)arg1 ;
-(id)backgroundColorForCurrentVibrancy;
-(CGSize)computedSize;
-(void)updateVibrancyIfNecessary;
-(void)setFrostedViewActive:(char)arg1 ;
-(void)setFrostedView:(ICAttachmentBrickFrostedView *)arg1 ;
-(void)layoutBackgroundView;
-(void)updateBackgroundImage;
-(NSLayoutConstraint *)textViewTopConstraint;
-(NSLayoutConstraint *)textViewTrailingConstraint;
-(id)createTextViewTrailingConstraint;
-(void)setTextViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(char)isFrostedViewActive;
-(void)setTextViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateAccessoryViewShadow;
-(void)updateAccessoryView;
-(double)layoutScaling;
-(void)updateBrickType;
-(void)updateStyle;
-(void)setBrickType:(unsigned long long)arg1 ;
-(unsigned long long)defaultBrickSize;
-(unsigned long long)brickType;
-(char)forceDefaultBrickSize;
-(void)setBrickSize:(unsigned long long)arg1 ;
-(void)setFullHeightText:(char)arg1 ;
-(char)forManualRendering;
-(unsigned long long)brickSize;
-(void)updateSearchHighlightingIfNecessary;
-(char)isFullHeightText;
-(void)layoutAccessoryTypeMapMarker;
-(void)updateForAppearanceChange;
-(char)disableTextUpdates;
-(void)updateFileSizeCacheStringIfNeeded;
-(NSString *)fileSizeStringCache;
-(void)clearAccessoryView;
-(CGSize)computedAccessorySize;
-(double)accessoryViewTopMarginWithAccessorySize:(CGSize)arg1 ;
-(void)setAccessoryViewVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAccessoryViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewVerticalConstraint;
-(NSLayoutConstraint *)accessoryViewTrailingConstraint;
-(void)updateAccessoryViewForAccessibilityInvertColors;
-(char)disableImageUpdates;
-(long long)fileSizeCache;
-(void)setFileSizeStringCache:(NSString *)arg1 ;
-(void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg1 ;
-(void)audioPlayerView:(id)arg1 updateTime:(double)arg2 ;
-(void)audioPlayerViewStopped:(id)arg1 ;
-(void)setAttachment:(id)arg1 forSearchResult:(id)arg2 ;
-(void)prepareForPrinting;
-(CGRect)quickLookSourceFrameOnScreen;
-(id)quickLookTransitionImageWithContentRect:(CGRect*)arg1 ;
-(void)setForceDefaultBrickSize:(char)arg1 ;
-(char)usingConstraintsForAXLargerTextSizes;
-(void)setUsingConstraintsForAXLargerTextSizes:(char)arg1 ;
-(char)layerIsInvertedForAXInvertColors;
-(void)setLayerIsInvertedForAXInvertColors:(char)arg1 ;
-(void)setDisableImageUpdates:(char)arg1 ;
-(void)setDisableTextUpdates:(char)arg1 ;
@end

