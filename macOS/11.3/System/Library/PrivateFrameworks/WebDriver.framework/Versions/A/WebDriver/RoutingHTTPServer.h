/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HTTPServer/HTTPServer.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface RoutingHTTPServer : HTTPServer {

	NSMutableDictionary* routes;
	NSMutableDictionary* defaultHeaders;
	NSMutableDictionary* mimeTypes;
	NSObject*<OS_dispatch_queue> routeQueue;

}

@property (nonatomic,readonly) NSDictionary * defaultHeaders; 
-(id)init;
-(id)mimeTypes;
-(void)handleMethod:(id)arg1 withPath:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(void)handleMethod:(id)arg1 withPath:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setDefaultHeader:(id)arg1 value:(id)arg2 ;
-(void)handleRoute:(id)arg1 withRequest:(id)arg2 response:(id)arg3 ;
-(void)setRouteQueue:(id)arg1 ;
-(void)setupMIMETypes;
-(id)routeWithPath:(id)arg1 ;
-(void)addRoute:(id)arg1 forMethod:(id)arg2 ;
-(void)setDefaultHeaders:(NSDictionary *)arg1 ;
-(id)routeQueue;
-(void)setMIMETypes:(id)arg1 ;
-(void)setMIMEType:(id)arg1 forExtension:(id)arg2 ;
-(id)mimeTypeForPath:(id)arg1 ;
-(void)get:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)post:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)put:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)delete:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)subscribe:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unsubscribe:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(char)supportsMethod:(id)arg1 ;
-(id)routeMethod:(id)arg1 withPath:(id)arg2 parameters:(id)arg3 request:(id)arg4 connection:(id)arg5 ;
-(NSDictionary *)defaultHeaders;
@end

