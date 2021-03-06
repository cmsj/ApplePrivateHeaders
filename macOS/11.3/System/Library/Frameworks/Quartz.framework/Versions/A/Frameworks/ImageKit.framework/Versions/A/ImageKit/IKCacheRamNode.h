/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKLinkedListLink.h>
#import <libobjc.A.dylib/IKImageProxy.h>

@class IKCacheNode, NSBitmapImageRep, NSData, NSString;

@interface IKCacheRamNode : IKLinkedListLink <IKImageProxy> {

	IKCacheNode* _parent;
	unsigned _cacheUsedByBitmapRep;
	unsigned _cacheUsedByJpegData;
	unsigned _session;
	int _rawDataFormat;
	char _isInPriorityList;
	NSBitmapImageRep* _bitmapRep;
	NSData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)proxyImage;
-(id)proxyReferenceInstance;
-(int)proxyDataFormat;
-(id)thumbnailWithSize:(double)arg1 antialiased:(char)arg2 quality:(int)arg3 ;
-(CGSize)proxySize;
-(char)isVectorial;
-(id)proxyData;
-(char)supportConcurrentLoading;
-(void)willDie;
-(unsigned)cacheUsedByBitmapRep;
-(void)setCacheUsedByBitmapRep:(unsigned)arg1 ;
-(unsigned)cacheUsedByJpegData;
-(void)setCacheUsedByJpegData:(unsigned)arg1 ;
-(int)rawDataFormat;
-(void)setRawDataFormat:(int)arg1 ;
-(char)isInPriorityList;
-(void)setIsInPriorityList:(char)arg1 ;
-(unsigned)totalCacheUsed;
-(void)setBitmap:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)parent;
-(unsigned)session;
-(void)setSession:(unsigned)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)bitmap;
@end

