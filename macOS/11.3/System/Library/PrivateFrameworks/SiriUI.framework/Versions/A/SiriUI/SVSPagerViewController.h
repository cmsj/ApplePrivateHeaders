/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/SVSPagerViewDataSource.h>
#import <libobjc.A.dylib/SVSPagerViewDelegate.h>

@protocol SVSPagerViewControllerDelegate;
@class NSMutableArray, NSViewController, SVSPagerView, NSArray, NSString;

@interface SVSPagerViewController : NSViewController <SVSPagerViewDataSource, SVSPagerViewDelegate> {

	NSMutableArray* _viewControllers;
	NSViewController* _activePageViewController;
	id<SVSPagerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SVSPagerView * view; 
@property (nonatomic,readonly) NSArray * pageViewControllers; 
@property (nonatomic,retain) NSViewController * activePageViewController;                     //@synthesize activePageViewController=_activePageViewController - In the implementation block
@property (assign,getter=isPagingEnabled,nonatomic) char pagingEnabled; 
@property (nonatomic,readonly) unsigned long long transitionState; 
@property (assign,nonatomic,__weak) id<SVSPagerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVSPagerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SVSPagerViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(unsigned long long)transitionState;
-(char)isPagingEnabled;
-(void)setPagingEnabled:(char)arg1 ;
-(void)insertPageViewController:(id)arg1 atIndex:(long long)arg2 ;
-(id)_viewControllerForPageView:(id)arg1 ;
-(void)setActivePageViewController:(NSViewController *)arg1 ;
-(long long)numberOfPageViewsInPagerView:(id)arg1 ;
-(id)pagerView:(id)arg1 pageViewAtIndex:(long long)arg2 ;
-(void)pagerView:(id)arg1 didActivatePageView:(id)arg2 oldActivePageView:(id)arg3 ;
-(void)pagerViewDidChangeTransitionState:(id)arg1 ;
-(NSArray *)pageViewControllers;
-(void)addPageViewController:(id)arg1 ;
-(void)removePageViewController:(id)arg1 ;
-(char)containsPageViewController:(id)arg1 ;
-(NSViewController *)activePageViewController;
@end

