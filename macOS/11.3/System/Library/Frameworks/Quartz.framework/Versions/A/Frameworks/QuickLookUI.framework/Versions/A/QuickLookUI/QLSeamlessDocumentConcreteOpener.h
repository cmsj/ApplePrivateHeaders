/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLSeamlessDocumentOpener.h>

@protocol OS_dispatch_source;
@class NSObject, NSDictionary, QLSeamlessOpeningItemInfo;

@interface QLSeamlessDocumentConcreteOpener : QLSeamlessDocumentOpener {

	unsigned _port;
	int _openingState;
	int _loadingState;
	int _showingState;
	NSObject*<OS_dispatch_source> _deferredTimeoutTimer;
	double _loadingProgress;
	NSDictionary* _displayState;
	QLSeamlessOpeningItemInfo* _info;
	char _automaticallyAdjustWindowPosition;
	long long _animationBehavior;

}
-(char)_beginShowingWindow:(id)arg1 effect:(id*)arg2 ;
-(void)_endShowingWindow:(id)arg1 contentFrame:(CGRect)arg2 alreadyVisible:(char)arg3 effect:(id)arg4 ;
-(void)deferDocumentLoading;
-(void)deferDocumentShowing;
-(char)automaticallyAdjustWindowPosition;
-(void)_stopDeferredTimeout;
-(void)_startDeferredTimeout;
-(void)_noteDocumentOpenedWithWindow:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(char)isAnimating;
-(void)beginDocumentOpening;
-(void)endDocumentOpening;
-(void)beginDocumentLoading;
-(void)endDocumentLoading;
-(void)discard;
-(void)showWindow:(id)arg1 contentFrame:(CGRect)arg2 withBlock:(/*^block*/id)arg3 ;
-(char)isOpening;
-(double)loadingProgress;
-(void)setLoadingProgress:(double)arg1 ;
-(id)displayState;
-(id)transitionImage;
-(void)setAutomaticallyAdjustWindowPosition:(char)arg1 ;
-(void)showLoadingWindow;
@end
