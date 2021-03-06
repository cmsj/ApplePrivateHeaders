/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ContinuousPageViewDelegate <NSObject>
@required
-(id)continuousPageView:(id)arg1 itemBefore:(id)arg2;
-(id)continuousPageView:(id)arg1 itemAfter:(id)arg2;
-(id)continuousPageView:(id)arg1 pageViewForItem:(id)arg2;
-(void)continuousPageView:(id)arg1 willTransitionToPageView:(id)arg2 pageItem:(id)arg3;
-(void)continuousPageView:(id)arg1 transitionToPageViewWasCanceled:(id)arg2 pageItem:(id)arg3;
-(void)continuousPageView:(id)arg1 didTransitionToPageView:(id)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6;
-(void)continuousPageView:(id)arg1 pageViewWillParticipateInTransition:(id)arg2 pageItem:(id)arg3 role:(int)arg4;
-(void)continuousPageView:(id)arg1 pageViewDidParticipateInTransition:(id)arg2 pageItem:(id)arg3;
-(char)continuousPageView:(id)arg1 canScrollUpPageView:(id)arg2 pageItem:(id)arg3;
-(char)continuousPageView:(id)arg1 canScrollDownPageView:(id)arg2 pageItem:(id)arg3;
-(char)continuousPageView:(id)arg1 pageViewHasHeaderBanner:(id)arg2 pageItem:(id)arg3;
-(char)continuousPageView:(id)arg1 pageViewHasFooterBanner:(id)arg2 pageItem:(id)arg3;
-(double)topContentInsetForContinuousPageView:(id)arg1;

@end

