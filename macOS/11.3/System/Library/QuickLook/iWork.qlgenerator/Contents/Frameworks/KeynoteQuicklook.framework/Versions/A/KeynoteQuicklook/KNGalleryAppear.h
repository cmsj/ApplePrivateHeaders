/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KNAnimationEffect.h>
#import <libobjc.A.dylib/KNBuildBasicContentAnimator.h>

@class NSString;

@interface KNGalleryAppear : KNAnimationEffect <KNBuildBasicContentAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedTypes;
+(id)defaultAttributes;
+(id)animationName;
+(id)localizedMenuString:(long long)arg1 ;
+(id)thumbnailImageNameForType:(long long)arg1 ;
+(long long)animationCategory;
+(id)animationFilter;
+(long long)rendererTypeForAnimationContext:(id)arg1 ;
-(void)addAnimationsTo:(id)arg1 context:(id)arg2 ;
@end
