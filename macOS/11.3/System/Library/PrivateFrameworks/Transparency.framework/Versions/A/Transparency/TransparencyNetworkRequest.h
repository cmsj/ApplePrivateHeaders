/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData;

@interface TransparencyNetworkRequest : NSObject {

	char _authenticated;
	char _isGET;
	NSURL* _url;
	NSData* _data;
	double _timeout;

}

@property (retain) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (retain) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (assign) double timeout;                  //@synthesize timeout=_timeout - In the implementation block
@property (assign) char isGET;                      //@synthesize isGET=_isGET - In the implementation block
@property (assign) char authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)url;
-(double)timeout;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)setAuthenticated:(char)arg1 ;
-(char)authenticated;
-(id)initWithURL:(id)arg1 data:(id)arg2 timeout:(double)arg3 isGET:(char)arg4 ;
-(void)setIsGET:(char)arg1 ;
-(id)initGETWithURL:(id)arg1 ;
-(id)initPOSTWithURL:(id)arg1 data:(id)arg2 ;
-(char)isGET;
-(id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id*)arg4 ;
-(void)createRequestForAuthentication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

