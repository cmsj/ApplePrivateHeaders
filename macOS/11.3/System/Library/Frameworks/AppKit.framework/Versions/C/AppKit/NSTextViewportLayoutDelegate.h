/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTextViewportLayoutDelegate <NSObject,NSTextViewportLayoutObserver>
@property (readonly) CGRect viewport; 
@property (readonly) CGPoint viewportAnchor; 
@optional
-(void)setNeedsLayout:(char)arg1;
-(id)locationForPositionInViewport:(CGPoint)arg1 offset:(out CGSize*)arg2;

@required
-(CGRect)viewport;
-(void)layoutElement:(id)arg1;
-(CGPoint)viewportAnchor;

@end

