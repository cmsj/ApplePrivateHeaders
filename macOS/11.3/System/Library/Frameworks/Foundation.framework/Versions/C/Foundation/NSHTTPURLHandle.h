/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLHandle.h>

@class NSMutableData, NSDictionary;

@interface NSHTTPURLHandle : NSURLHandle {

	CFHTTPMessageRef request;
	CFReadStreamRef httpStream;
	NSMutableData* errorPage;
	unsigned char examinedHeaders;
	char _padding[3];
	NSDictionary* proxyConfig;

}
+(void)initialize;
+(char)canInitWithURL:(id)arg1 ;
+(id)cachedHandleForURL:(id)arg1 ;
+(id)canonicalHTTPURLForURL:(id)arg1 ;
-(void)dealloc;
-(id)propertyForKey:(id)arg1 ;
-(id)_URL;
-(id)initWithURL:(id)arg1 cached:(char)arg2 ;
-(id)propertyForKeyIfAvailable:(id)arg1 ;
-(void)flushCachedData;
-(void)endLoadInBackground;
-(char)writeData:(id)arg1 ;
-(char)writeProperty:(id)arg1 forKey:(id)arg2 ;
-(long long)expectedResourceDataSize;
-(id)loadInForeground;
-(void)beginLoadInBackground;
-(void)reportStreamError;
-(void)performStreamRead;
-(CFHTTPMessageRef)_constructRequestForURL:(id)arg1 isHead:(char)arg2 ;
-(void)_configureStreamDetails:(CFReadStreamRef)arg1 ;
-(void)populateCacheFromStream:(CFReadStreamRef)arg1 data:(id)arg2 ;
-(void)_processHeaders:(CFHTTPMessageRef)arg1 ;
@end
