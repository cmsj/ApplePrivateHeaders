/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKIconManager : NSObject
+(id)iconManager;
+(id)_imageForFeatureStyleAttributes:(id)arg1 iconText:(id)arg2 size:(unsigned long long)arg3 forScale:(double)arg4 navMode:(char)arg5 nightMode:(char)arg6 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(char)arg4 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(char)arg4 nightMode:(char)arg5 ;
+(id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(char)arg4 ;
+(id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(char)arg4 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(char)arg4 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 fallbackToBundleIcon:(char)arg3 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 fallbackToBundleIcon:(char)arg4 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 isResizableImage:(char*)arg4 fallbackToBundleIcon:(char)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 isResizableImage:(char*)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(char)arg6 transparent:(char)arg7 interactive:(char)arg8 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 isResizableImage:(char*)arg4 customIconID:(unsigned long long)arg5 ;
+(void)setDiskCacheURL:(id)arg1 ;
+(CGColorRef)newFillColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newHaloColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newGlyphColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForRouteAnnotationStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForIconID:(unsigned)arg1 contentScale:(double)arg2 sizeGroup:(unsigned long long)arg3 nightMode:(char)arg4 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 isResizableImage:(char*)arg4 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 isResizableImage:(char*)arg4 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 isResizableImage:(char*)arg4 transparent:(char)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 isResizableImage:(char*)arg4 transparent:(char)arg5 interactive:(char)arg6 ;
@end

