/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Reveal.framework/Versions/A/Reveal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, RVPresenterViewControllerProvider;
#import <Reveal/Reveal-Structs.h>
@class LUPresenter, RVPopoverPresenter;

@interface RVPresenter : NSObject {

	id<NSObject> _observer;
	LUPresenter* _lookupPresenter;
	RVPopoverPresenter* _popoverPresenter;
	id<RVPresenterViewControllerProvider> _viewControllerProvider;

}

@property (assign,nonatomic,__weak) id<RVPresenterViewControllerProvider> viewControllerProvider;              //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
+(id)sharedPresenter;
-(char)revealItem:(id)arg1 documentContext:(id)arg2 presentingContext:(id)arg3 options:(id)arg4 ;
-(id)animationControllerForItem:(id)arg1 documentContext:(id)arg2 presentingContext:(id)arg3 options:(id)arg4 ;
-(id)menuItemsForItem:(id)arg1 documentContext:(id)arg2 presentingContext:(id)arg3 options:(id)arg4 ;
-(void)contentMoved;
-(id)ddActionContextFromDocumentContext:(id)arg1 presentingContext:(id)arg2 item:(id)arg3 ddResult:(_DDResult*)arg4 ;
-(id)revealOptionsFromClientOptions:(id)arg1 withItem:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(char)ddActionAvailableForUrl:(id)arg1 ddResult:(_DDResult*)arg2 ddContext:(id)arg3 ;
-(id)taggedItems:(id)arg1 ;
-(id)lookupTextForText:(id)arg1 ;
-(id)lookupMenuItemTitleForText:(id)arg1 ;
-(char)tryCloseAllPopoverForDDContext:(id)arg1 ;
-(void)contentChanged;
-(id<RVPresenterViewControllerProvider>)viewControllerProvider;
-(void)setViewControllerProvider:(id<RVPresenterViewControllerProvider>)arg1 ;
@end
