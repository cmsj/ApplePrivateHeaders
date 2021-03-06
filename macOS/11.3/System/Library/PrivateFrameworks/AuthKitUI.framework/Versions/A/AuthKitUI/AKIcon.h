/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AuthKitUI/AuthKitUI-Structs.h>
@class NSString, NSData;

@interface AKIcon : NSObject {

	double _scale;
	CGSize _size;
	NSString* _name;
	NSString* _bundleID;
	NSData* _data;
	unsigned long long _maskingStyle;

}
+(double)defaultScale;
+(double)_screenScale;
+(id)iconWithPresentationContext:(id)arg1 ;
+(id)iconWithName:(id)arg1 size:(CGSize)arg2 ;
+(id)iconWithIconContext:(id)arg1 ;
+(id)iconWithBundleID:(id)arg1 size:(CGSize)arg2 ;
+(id)iconWithData:(id)arg1 scale:(double)arg2 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 ;
-(unsigned long long)iconType;
-(id)automaskedImage;
-(id)initWithPresentationContext:(id)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(id)initWithIconContext:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 size:(CGSize)arg2 ;
-(id)_imageWithData:(id)arg1 scale:(double)arg2 masked:(char)arg3 ;
-(id)_imageWithName:(id)arg1 size:(CGSize)arg2 masked:(char)arg3 ;
-(id)_imageWithBundleID:(id)arg1 size:(CGSize)arg2 masked:(char)arg3 ;
-(char)_shouldMaskImage;
-(id)unmaskedImage;
-(id)_dataForImage:(id)arg1 ;
-(id)maskedImage;
-(id)_catalogueImageWithName:(id)arg1 ;
-(char)_hasInstalledApplicationWithBundleID:(id)arg1 ;
-(id)_iconWithImage:(id)arg1 ;
-(id)_imageWithIcon:(id)arg1 size:(CGSize)arg2 masked:(char)arg3 ;
-(id)_applicationProxyForBundleID:(id)arg1 ;
-(CGImageRef)_CGImageForImage:(id)arg1 ;
-(id)unmaskedImageData;
-(id)maskedImageData;
-(id)automaskedImageData;
@end

