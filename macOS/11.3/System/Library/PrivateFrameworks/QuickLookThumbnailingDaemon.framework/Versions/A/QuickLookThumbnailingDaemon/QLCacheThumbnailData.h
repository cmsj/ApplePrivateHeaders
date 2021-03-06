/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/Versions/A/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class NSObject, QLCacheFileIdentifier, QLThumbnailVersion, NSData, QLCacheBlobInfo, NSDate;

@interface QLCacheThumbnailData : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _state;
	char _iconMode;
	float _size;
	int _interpolationQuality;
	unsigned _bitmapInfo;
	int _flavor;
	unsigned long long _totalBufferSize;
	QLCacheFileIdentifier* _fileIdentifier;
	QLThumbnailVersion* _version;
	unsigned long long _cacheId;
	long long _iconVariant;
	unsigned long long _badgeType;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	NSData* _bitmapData;
	NSData* _metadata;
	QLCacheBlobInfo* _bitmapDataToValidate;
	QLCacheBlobInfo* _metadataToValidate;
	unsigned long long _externalGeneratorDataHash;
	unsigned long long _hitCount;
	NSDate* _lastHitDate;
	CGRect _contentRect;

}

@property (nonatomic,readonly) unsigned long long totalBufferSize;                        //@synthesize totalBufferSize=_totalBufferSize - In the implementation block
@property (nonatomic,readonly) char hasData; 
@property (nonatomic,readonly) QLCacheFileIdentifier * fileIdentifier;                    //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (nonatomic,readonly) QLThumbnailVersion * version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheId;                                //@synthesize cacheId=_cacheId - In the implementation block
@property (nonatomic,readonly) float size;                                                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char iconMode;                                             //@synthesize iconMode=_iconMode - In the implementation block
@property (nonatomic,readonly) long long iconVariant;                                     //@synthesize iconVariant=_iconVariant - In the implementation block
@property (nonatomic,readonly) int interpolationQuality;                                  //@synthesize interpolationQuality=_interpolationQuality - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeType;                              //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                                  //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                                 //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long bitsPerComponent;                       //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (nonatomic,readonly) unsigned long long bitsPerPixel;                           //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;                            //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned bitmapInfo;                                       //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (nonatomic,readonly) NSData * bitmapData;                                       //@synthesize bitmapData=_bitmapData - In the implementation block
@property (nonatomic,readonly) NSData * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) QLCacheBlobInfo * bitmapDataToValidate;                      //@synthesize bitmapDataToValidate=_bitmapDataToValidate - In the implementation block
@property (nonatomic,retain) QLCacheBlobInfo * metadataToValidate;                        //@synthesize metadataToValidate=_metadataToValidate - In the implementation block
@property (nonatomic,readonly) int flavor;                                                //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,readonly) CGRect contentRect;                                        //@synthesize contentRect=_contentRect - In the implementation block
@property (nonatomic,readonly) unsigned long long externalGeneratorDataHash;              //@synthesize externalGeneratorDataHash=_externalGeneratorDataHash - In the implementation block
@property (nonatomic,readonly) unsigned long long hitCount;                               //@synthesize hitCount=_hitCount - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastHitDate;                                 //@synthesize lastHitDate=_lastHitDate - In the implementation block
-(float)size;
-(void)dealloc;
-(char)hasData;
-(unsigned long long)state;
-(QLThumbnailVersion *)version;
-(char)setState:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
-(unsigned long long)bitsPerPixel;
-(NSData *)bitmapData;
-(unsigned long long)bitsPerComponent;
-(unsigned)bitmapInfo;
-(CGRect)contentRect;
-(NSData *)metadata;
-(QLCacheFileIdentifier *)fileIdentifier;
-(unsigned long long)badgeType;
-(char)iconMode;
-(long long)iconVariant;
-(int)interpolationQuality;
-(int)flavor;
-(NSDate *)lastHitDate;
-(unsigned long long)cacheId;
-(unsigned long long)externalGeneratorDataHash;
-(id)initWithCacheId:(unsigned long long)arg1 fileIdentifier:(id)arg2 version:(id)arg3 size:(float)arg4 iconMode:(char)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 hitCount:(unsigned long long)arg8 lastHitDate:(id)arg9 width:(unsigned long long)arg10 height:(unsigned long long)arg11 bitsPerComponent:(unsigned long long)arg12 bitsPerPixel:(unsigned long long)arg13 bytesPerRow:(unsigned long long)arg14 bitmapInfo:(unsigned)arg15 bitmapData:(id)arg16 metadata:(id)arg17 flavor:(int)arg18 contentRect:(CGRect)arg19 badgeType:(unsigned long long)arg20 externalGeneratorDataHash:(unsigned long long)arg21 ;
-(id)initWithCacheId:(unsigned long long)arg1 thumbnailRequest:(id)arg2 size:(float)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bitsPerPixel:(unsigned long long)arg7 bytesPerRow:(unsigned long long)arg8 bitmapInfo:(unsigned)arg9 bitmapData:(id)arg10 metadata:(id)arg11 flavor:(int)arg12 contentRect:(CGRect)arg13 badgeType:(unsigned long long)arg14 ;
-(char)setState:(unsigned long long)arg1 changedState:(char*)arg2 ;
-(id)initWithCacheId:(unsigned long long)arg1 fileIdentifier:(id)arg2 version:(id)arg3 size:(float)arg4 iconMode:(char)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 badgeType:(unsigned long long)arg8 externalGeneratorDataHash:(unsigned long long)arg9 hitCount:(unsigned long long)arg10 lastHitDate:(id)arg11 ;
-(id)initWithCacheId:(unsigned long long)arg1 thumbnailRequest:(id)arg2 size:(float)arg3 badgeType:(unsigned long long)arg4 ;
-(id)initWithUnsavedDataForThumbnailRequest:(id)arg1 size:(float)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bitsPerComponent:(unsigned long long)arg5 bitsPerPixel:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 bitmapInfo:(unsigned)arg8 bitmapData:(id)arg9 reservationInfo:(id)arg10 metadata:(id)arg11 reservationInfo:(id)arg12 flavor:(int)arg13 contentRect:(CGRect)arg14 badgeType:(unsigned long long)arg15 ;
-(unsigned long long)totalBufferSize;
-(QLCacheBlobInfo *)bitmapDataToValidate;
-(void)setBitmapDataToValidate:(QLCacheBlobInfo *)arg1 ;
-(QLCacheBlobInfo *)metadataToValidate;
-(void)setMetadataToValidate:(QLCacheBlobInfo *)arg1 ;
-(unsigned long long)hitCount;
@end

