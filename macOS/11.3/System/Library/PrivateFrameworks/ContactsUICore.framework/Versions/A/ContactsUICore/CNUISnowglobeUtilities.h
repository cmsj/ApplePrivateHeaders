/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsUICore/ContactsUICore-Structs.h>
@interface CNUISnowglobeUtilities : NSObject
+(char)enableGroupPhoto;
+(CGSize)sizeForImageAtIndex:(unsigned long long)arg1 inRect:(CGRect)arg2 forItemCount:(unsigned long long)arg3 scope:(id)arg4 ;
+(CGImageRef)imageForCGImages:(CGImage*)arg1 rect:(CGRect)arg2 itemCount:(long long)arg3 scope:(id)arg4 ;
+(id)layerForCGImages:(CGImage*)arg1 inRect:(CGRect)arg2 forItemCount:(long long)arg3 scope:(id)arg4 ;
+(CGColorRef)backgroundColorForBackgroundStyle:(unsigned long long)arg1 ;
+(id)containerLayerForRect:(CGRect)arg1 backgroundStyle:(unsigned long long)arg2 ;
+(id)circularContainerLayerForRect:(CGRect)arg1 backgroundStyle:(unsigned long long)arg2 ;
+(CGImageRef)imageForLayer:(id)arg1 inRect:(CGRect)arg2 ;
+(id)roundedRectContainerLayerForRect:(CGRect)arg1 backgroundStyle:(unsigned long long)arg2 ;
+(CGColorRef)defaultBackgroundColor;
+(CGColorRef)defaultDarkBackgroundColor;
+(CGImageRef)circularPlaceholderImageForSize:(CGSize)arg1 backgroundStyle:(unsigned long long)arg2 scale:(double)arg3 ;
+(CGImageRef)roundedRectPlaceholderImageForSize:(CGSize)arg1 backgroundStyle:(unsigned long long)arg2 scale:(double)arg3 ;
@end

