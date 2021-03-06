/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSImage;


@protocol AVControlsContainerViewControllerContent <NSObject>
@property (readonly) NSString * controlsStyleIdentifier; 
@property (readonly) NSImage * backgroundBackdropViewMaskImage; 
@property (readonly) long long preferredBlendingMode; 
@property (readonly) long long preferredEffectMaterial; 
@property (readonly) long long layoutStyle; 
@property (readonly) CGSize intrinsicControlsContentViewSize; 
@property (readonly) NSEdgeInsets controlsContentViewMargin; 
@property (readonly) char movableControlsContentView; 
@property (readonly) double minimumWidth; 
@required
-(id)initialFirstResponder;
-(double)minimumWidth;
-(long long)layoutStyle;
-(NSString *)controlsStyleIdentifier;
-(NSImage *)backgroundBackdropViewMaskImage;
-(CGSize)intrinsicControlsContentViewSize;
-(NSEdgeInsets)controlsContentViewMargin;
-(char)movableControlsContentView;
-(void)controlsContainerViewControllerWillShowView:(id)arg1;
-(void)controlsContainerViewControllerDidShowView:(id)arg1;
-(void)controlsContainerViewControllerWillHideView:(id)arg1;
-(void)controlsContainerViewControllerDidHideView:(id)arg1;
-(long long)preferredBlendingMode;
-(long long)preferredEffectMaterial;

@end

