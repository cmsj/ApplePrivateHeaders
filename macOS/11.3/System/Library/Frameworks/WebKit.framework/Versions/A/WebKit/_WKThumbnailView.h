/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <AppKit/NSView.h>

@class CALayer, NSColor;

@interface _WKThumbnailView : NSView {

	RetainPtr<WKView>* _wkView;
	RetainPtr<WKWebView>* _wkWebView;
	NakedPtr<WebKit::WebPageProxy>* _webPageProxy;
	char _originalMayStartMediaWhenInWindow;
	char _originalSourceViewIsInWindow;
	char _snapshotWasDeferred;
	double _lastSnapshotScale;
	CGSize _lastSnapshotMaximumSize;
	RetainPtr<NSColor>* _overrideBackgroundColor;
	char _waitingForSnapshot;
	char _exclusivelyUsesSnapshot;
	char _shouldKeepSnapshotWhenRemovedFromSuperview;
	double _scale;
	CGSize _snapshotSize;
	CGSize _maximumSnapshotSize;

}

@property (assign,setter=_setThumbnailLayer:,nonatomic) CALayer * _thumbnailLayer; 
@property (assign,setter=_setWaitingForSnapshot:,nonatomic) char _waitingForSnapshot;              //@synthesize waitingForSnapshot=_waitingForSnapshot - In the implementation block
@property (assign,nonatomic) double scale;                                                         //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize snapshotSize;                                                //@synthesize snapshotSize=_snapshotSize - In the implementation block
@property (assign,nonatomic) CGSize maximumSnapshotSize;                                           //@synthesize maximumSnapshotSize=_maximumSnapshotSize - In the implementation block
@property (assign,nonatomic) char exclusivelyUsesSnapshot;                                         //@synthesize exclusivelyUsesSnapshot=_exclusivelyUsesSnapshot - In the implementation block
@property (assign,nonatomic) char shouldKeepSnapshotWhenRemovedFromSuperview;                      //@synthesize shouldKeepSnapshotWhenRemovedFromSuperview=_shouldKeepSnapshotWhenRemovedFromSuperview - In the implementation block
@property (nonatomic,retain) NSColor * overrideBackgroundColor; 
-(double)scale;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setScale:(double)arg1 ;
-(CGSize)snapshotSize;
-(NSColor *)overrideBackgroundColor;
-(void)_requestSnapshotIfNeeded;
-(void)requestSnapshot;
-(void)_viewWasParented;
-(void)_viewWasUnparented;
-(id)initWithFrame:(CGRect)arg1 fromWKView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 fromWKWebView:(id)arg2 ;
-(void)setOverrideBackgroundColor:(NSColor *)arg1 ;
-(void)_didTakeSnapshot:(CGImageRef)arg1 ;
-(void)setMaximumSnapshotSize:(CGSize)arg1 ;
-(void)_setThumbnailLayer:(id)arg1 ;
-(CALayer *)_thumbnailLayer;
-(char)_waitingForSnapshot;
-(void)_setWaitingForSnapshot:(char)arg1 ;
-(CGSize)maximumSnapshotSize;
-(char)exclusivelyUsesSnapshot;
-(void)setExclusivelyUsesSnapshot:(char)arg1 ;
-(char)shouldKeepSnapshotWhenRemovedFromSuperview;
-(void)setShouldKeepSnapshotWhenRemovedFromSuperview:(char)arg1 ;
@end

