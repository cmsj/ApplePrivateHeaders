/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSScrollerImpPairDelegate
@optional
-(char)scrollerImpPair:(id)arg1 isContentPointVisible:(CGPoint)arg2;

@required
-(CGRect*)contentAreaRectForScrollerImpPair:(id)arg1;
-(char)inLiveResizeForScrollerImpPair:(id)arg1;
-(CGPoint*)mouseLocationInContentAreaForScrollerImpPair:(id)arg1;
-(CGPoint*)scrollerImpPair:(id)arg1 convertContentPoint:(CGPoint)arg2 toScrollerImp:(id)arg3;
-(void)scrollerImpPair:(id)arg1 setContentAreaNeedsDisplayInRect:(CGRect)arg2;
-(void)scrollerImpPair:(id)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2;

@end
