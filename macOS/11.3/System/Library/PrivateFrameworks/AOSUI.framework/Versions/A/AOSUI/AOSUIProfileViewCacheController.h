/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData, NSString;

@interface AOSUIProfileViewCacheController : NSObject {

	char _cacheIsValid;
	char _cacheHideOverLay;
	NSArray* _cachePrefToHide;
	NSData* _cacheImageData;
	NSString* _cachePath;

}

@property (retain) NSString * cachePath;                   //@synthesize cachePath=_cachePath - In the implementation block
@property (assign) char cacheIsValid;                      //@synthesize cacheIsValid=_cacheIsValid - In the implementation block
@property (assign) char cacheHideOverLay;                  //@synthesize cacheHideOverLay=_cacheHideOverLay - In the implementation block
@property (retain) NSArray * cachePrefToHide;              //@synthesize cachePrefToHide=_cachePrefToHide - In the implementation block
@property (retain) NSData * cacheImageData;                //@synthesize cacheImageData=_cacheImageData - In the implementation block
+(id)_cacheQueue;
-(id)init;
-(NSString *)cachePath;
-(void)setCachePath:(NSString *)arg1 ;
-(id)_currentLanguage;
-(char)readCache;
-(NSData *)cacheImageData;
-(char)cacheIsValid;
-(char)cacheHideOverLay;
-(NSArray *)cachePrefToHide;
-(void)setCacheHideOverLay:(char)arg1 ;
-(void)setCachePrefToHide:(NSArray *)arg1 ;
-(void)writeCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)setCacheImageData:(NSData *)arg1 ;
-(void)setCacheIsValid:(char)arg1 ;
@end

