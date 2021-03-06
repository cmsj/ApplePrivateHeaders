/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <PAImaging/PAImageResponseInternal.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, PAImageRequest, PA2DBuffer, NSDictionary, IPAColorProfile, PAImageCacheEntrySharedValid, NSError, NSString;

@interface PAImageCacheEntry : NSObject <PAImageResponseInternal, NSCopying> {

	PAImageCacheEntrySharedValid* _sharedValid;
	PAImageRequest* _imageRequest;
	id _cacheKey;
	id _invalidationKey;
	NSError* _error;
	PA2DBuffer* _buffer;
	char _scaled;
	NSDictionary* _cgImageProperties;
	IPAColorProfile* _colorProfile;
	int _format;
	long long _masterToRasterOrientation;
	long long _rasterToDisplayOrientation;
	unsigned long long _requestedSubsampleFactor;
	char _endAccessOnDealloc;
	NSURL* _imageURL;

}

@property (retain) id invalidationKey;                                         //@synthesize invalidationKey=_invalidationKey - In the implementation block
@property (assign) int format;                                                 //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) char endAccessOnDealloc;                          //@synthesize endAccessOnDealloc=_endAccessOnDealloc - In the implementation block
@property (assign) long long masterToRasterOrientation;                        //@synthesize masterToRasterOrientation=_masterToRasterOrientation - In the implementation block
@property (assign) long long rasterToDisplayOrientation;                       //@synthesize rasterToDisplayOrientation=_rasterToDisplayOrientation - In the implementation block
@property (readonly) PFIntSize_st size; 
@property (readonly) unsigned long long requestedSubsampleFactor; 
@property (nonatomic,retain) NSURL * imageURL;                                 //@synthesize imageURL=_imageURL - In the implementation block
@property (readonly) char scaled; 
@property (readonly) PAImageRequest * imageRequest; 
@property (readonly) id cacheKey; 
@property (readonly) PA2DBuffer * buffer; 
@property (readonly) NSDictionary * cgImageProperties; 
@property (readonly) IPAColorProfile * colorProfile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(PFIntSize_st)size;
-(void)dealloc;
-(NSString *)description;
-(id)error;
-(PA2DBuffer *)buffer;
-(int)format;
-(void)setFormat:(int)arg1 ;
-(IPAColorProfile *)colorProfile;
-(id)cacheKey;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(unsigned long long)accessCount;
-(char)beginAccess;
-(void)endAccess;
-(PAImageRequest *)imageRequest;
-(char)scaled;
-(CGImageRef)newCGImage;
-(NSDictionary *)cgImageProperties;
-(id)invalidationKey;
-(void)setEndAccessOnDealloc:(char)arg1 ;
-(id)copyWithImageRequest:(id)arg1 ;
-(id)initWithImageRequest:(id)arg1 cacheKey:(id)arg2 invalidationKey:(id)arg3 buffer:(id)arg4 scaled:(char)arg5 cgImageProperties:(id)arg6 colorProfile:(id)arg7 masterToRasterOrientation:(long long)arg8 rasterToDisplayOrientation:(long long)arg9 requestedSubsampleFactor:(unsigned long long)arg10 error:(id)arg11 ;
-(void)transferAccess;
-(unsigned long long)requestedSubsampleFactor;
-(CGImageRef)newCGImageWithMaxSize:(PFIntSize_st)arg1 cropCenter:(CGPoint)arg2 ;
-(long long)masterToRasterOrientation;
-(long long)rasterToDisplayOrientation;
-(void)setInvalidationKey:(id)arg1 ;
-(char)endAccessOnDealloc;
-(void)setMasterToRasterOrientation:(long long)arg1 ;
-(void)setRasterToDisplayOrientation:(long long)arg1 ;
@end

