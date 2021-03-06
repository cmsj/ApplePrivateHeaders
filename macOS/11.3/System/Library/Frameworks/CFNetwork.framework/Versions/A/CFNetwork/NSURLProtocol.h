/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtocolInternal, NSURLRequest, NSCachedURLResponse;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}

@property (retain,readonly) id<NSURLProtocolClient> client; 
@property (copy,readonly) NSURLRequest * request; 
@property (copy,readonly) NSCachedURLResponse * cachedResponse; 
+(id)canonicalRequestForRequest:(id)arg1 task:(id)arg2 ;
+(Class)_protocolClassForRequest:(id)arg1 skipAppSSO:(char)arg2 ;
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(char)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(char)registerClass:(Class)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(Class)_protocolClassForRequest:(id)arg1 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)unregisterClass:(Class)arg1 ;
+(char)canInitWithTask:(id)arg1 ;
-(id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSURLRequest *)request;
-(id<NSURLProtocolClient>)client;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(NSCachedURLResponse *)cachedResponse;
@end

